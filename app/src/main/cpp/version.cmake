if(EXISTS metadata/version.dat)
    file(READ metadata/version.dat VERSION_LIST_)
else()
    set(VERSION_LIST_ 0 0 0)
endif()

list(GET VERSION_LIST_ 0 VERSION_)
list(GET VERSION_LIST_ 1 VERSION_BUILD_NUMBER_)
list(GET VERSION_LIST_ 2 BUILD_NUMBER_)

math(EXPR BUILD_NUMBER_ "${BUILD_NUMBER_}+1")
math(EXPR VERSION_BUILD_NUMBER_ "${VERSION_BUILD_NUMBER_}+1")

math(EXPR VERSION_MAJOR_ "${VERSION_} >> 22")
math(EXPR VERSION_MINOR_ "(${VERSION_} >> 12) & 0x3ff")
math(EXPR VERSION_PATCH_ "${VERSION_} & 0xfff")

if(BUMP_MAJOR)
    math(EXPR VERSION_MAJOR_ "${VERSION_MAJOR_}+1")
    set(VERSION_MINOR_ 0)
    set(VERSION_PATCH_ 0)
    set(VERSION_BUILD_NUMBER_ 0)
elseif(BUMP_MINOR)
    math(EXPR VERSION_MINOR_ "${VERSION_MINOR_}+1")
    set(VERSION_PATCH_ 0)
    set(VERSION_BUILD_NUMBER_ 0)
elseif(BUMP_PATCH)
    math(EXPR VERSION_PATCH_ "${VERSION_PATCH_}+1")
    set(VERSION_BUILD_NUMBER_ 0)
endif()

math(EXPR VERSION_ "${VERSION_MAJOR_} << 22 | ${VERSION_MINOR_} << 12 | (${VERSION_PATCH_} & 0xfff)")

set(VERSION_LIST_ ${VERSION_} ${VERSION_BUILD_NUMBER_} ${BUILD_NUMBER_})
file(WRITE metadata/version.dat "${VERSION_LIST_}")

set(SEM_VERSION_ "extern const int PROJECT_VERSION_MAJOR=${VERSION_MAJOR_};
extern const int PROJECT_VERSION_MINOR=${VERSION_MINOR_};
extern const int PROJECT_VERSION_PATCH=${VERSION_PATCH_};
extern const int PROJECT_VERSION_BUILD_NUMBER=${VERSION_BUILD_NUMBER_};
extern const int PROJECT_BUILD_NUMBER=${BUILD_NUMBER_};")

file(WRITE metadata/version.cpp "${SEM_VERSION_}")