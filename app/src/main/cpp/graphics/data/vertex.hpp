#ifndef NCV_VERTEX_HPP
#define NCV_VERTEX_HPP

#include <glm/glm.hpp>
#include <vector>

namespace graphics{ namespace data{
    struct vertex_format
    {
        glm::vec4 position;
        glm::vec4 color;
        glm::vec2 tex_coords;
    };

    static const std::vector<vertex_format> vertex_set = std::vector<vertex_format>
    {
        {{-1.0f, 1.0f,  1.0f, 1.0f}, {1.f,  0.0f, 0.0f, 1.0f}, {1.0f, 0.0f}},
        {{1.0f, 1.0f,  1.0f, 1.0f}, {0.0f, 0.0f, 1.0f, 1.0f}, {0.0f, 0.0f}},
        {{1.0f, -1.0f, 1.0f, 1.0f}, {0.0f, 1.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},
        {{-1.0f, -1.0f, 1.0f, 1.0f}, {1.0f, 1.0f, 0.0f, 1.0f}, {1.0f, 1.0f}},

        {{-1.0f, 1.0f,  -1.0f, 1.0f}, {1.f,  0.0f, 0.0f, 1.0f}, {0.0f, 0.0f}},
        {{1.0f, 1.0f,  -1.0f, 1.0f}, {0.0f, 0.0f, 1.0f, 1.0f}, {1.0f, 0.0f}},
        {{1.0f, -1.0f, -1.0f, 1.0f}, {0.0f, 1.0f, 0.0f, 1.0f}, {1.0f, 1.0f}},
        {{-1.0f, -1.0f, -1.0f, 1.0f}, {1.0f, 1.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},

        {{1.0f, 1.0f,  1.0f, 1.0f}, {0.0f, 0.0f, 1.0f, 1.0f}, {1.0f, 0.0f}},
        {{1.0f, 1.0f,  -1.0f, 1.0f}, {0.0f, 0.0f, 1.0f, 1.0f}, {0.0f, 0.0f}},
        {{1.0f, -1.0f, -1.0f, 1.0f}, {0.0f, 1.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},
        {{1.0f, -1.0f, 1.0f, 1.0f}, {0.0f, 1.0f, 0.0f, 1.0f}, {1.0f, 1.0f}},

        {{-1.0f, 1.0f,  -1.0f, 1.0f}, {1.f,  0.0f, 0.0f, 1.0f}, {1.0f, 0.0f}},
        {{-1.0f, 1.0f,  1.0f, 1.0f}, {1.f,  0.0f, 0.0f, 1.0f}, {0.0f, 0.0f}},
        {{-1.0f, -1.0f, 1.0f, 1.0f}, {1.0f, 1.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},
        {{-1.0f, -1.0f, -1.0f, 1.0f}, {1.0f, 1.0f, 0.0f, 1.0f}, {1.0f, 1.0f}},

        {{-1.0f, 1.0f,  -1.0f, 1.0f}, {1.f,  0.0f, 0.0f, 1.0f}, {0.0f, 0.0f}},
        {{1.0f, 1.0f,  -1.0f, 1.0f}, {0.0f, 0.0f, 1.0f, 1.0f}, {0.0f, 1.0f}},
        {{1.0f, 1.0f,  1.0f, 1.0f}, {0.0f, 0.0f, 1.0f, 1.0f}, {1.0f, 1.0f}},
        {{-1.0f, 1.0f,  1.0f, 1.0f}, {1.f,  0.0f, 0.0f, 1.0f}, {1.0f, 0.0f}},

        {{-1.0f, -1.0f, 1.0f, 1.0f}, {1.0f, 1.0f, 0.0f, 1.0f}, {0.0f, 0.0f}},
        {{1.0f, -1.0f, 1.0f, 1.0f}, {0.0f, 1.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},
        {{1.0f, -1.0f, -1.0f, 1.0f}, {0.0f, 1.0f, 0.0f, 1.0f}, {1.0f, 1.0f}},
        {{-1.0f, -1.0f, -1.0f, 1.0f}, {1.0f, 1.0f, 0.0f, 1.0f}, {1.0f, 0.0f}}
    };
}}

#endif //NCV_VERTEX_HPP