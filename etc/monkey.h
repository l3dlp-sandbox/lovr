float monkey_bounds[6] = { 0.000000f, 0.000000f, 0.000000f, 0.683594f, 0.492188f, 0.425781f };
float monkey_offset[3] = { -0.683594f, -0.492188f, -0.425781f };

uint8_t monkey_vertices[] = {
  168, 149, 242, 220, 44, 154,
  87, 149, 242, 35, 44, 154,
  174, 140, 230, 205, 62, 206,
  81, 140, 230, 50, 62, 206,
  179, 135, 214, 215, 58, 189,
  77, 135, 214, 40, 58, 189,
  160, 124, 220, 142, 17, 189,
  95, 124, 220, 113, 17, 189,
  160, 132, 235, 140, 32, 211,
  95, 132, 235, 115, 32, 211,
  160, 145, 244, 132, 4, 161,
  95, 145, 244, 123, 4, 161,
  153, 149, 247, 44, 39, 166,
  102, 149, 247, 211, 39, 166,
  146, 140, 239, 70, 59, 218,
  109, 140, 239, 185, 59, 218,
  142, 135, 225, 57, 46, 196,
  113, 135, 225, 198, 46, 196,
  135, 159, 226, 24, 127, 201,
  120, 159, 226, 231, 127, 201,
  141, 159, 239, 39, 127, 219,
  114, 159, 239, 216, 127, 219,
  150, 159, 247, 7, 126, 169,
  105, 159, 247, 248, 126, 169,
  153, 170, 247, 43, 216, 164,
  102, 170, 247, 212, 216, 164,
  146, 178, 239, 69, 194, 219,
  109, 178, 239, 186, 194, 219,
  142, 184, 225, 60, 207, 200,
  113, 184, 225, 195, 207, 200,
  160, 194, 220, 143, 234, 195,
  95, 194, 220, 112, 234, 195,
  160, 186, 235, 140, 222, 212,
  95, 186, 235, 115, 222, 212,
  160, 174, 244, 132, 251, 158,
  95, 174, 244, 123, 251, 158,
  168, 170, 242, 221, 211, 152,
  87, 170, 242, 34, 211, 152,
  174, 178, 230, 205, 191, 207,
  81, 178, 230, 50, 191, 207,
  179, 184, 214, 213, 196, 192,
  77, 184, 214, 42, 196, 192,
  186, 159, 212, 238, 127, 191,
  69, 159, 212, 17, 127, 191,
  180, 159, 228, 230, 127, 204,
  75, 159, 228, 25, 127, 204,
  171, 159, 241, 252, 126, 154,
  84, 159, 241, 3, 126, 154,
  172, 159, 243, 252, 126, 156,
  83, 159, 243, 3, 126, 156,
  169, 171, 244, 220, 210, 158,
  86, 171, 244, 35, 210, 158,
  160, 176, 248, 132, 247, 173,
  95, 176, 248, 123, 247, 173,
  152, 171, 250, 48, 210, 183,
  103, 171, 250, 207, 210, 183,
  149, 159, 250, 11, 126, 180,
  106, 159, 250, 244, 126, 180,
  152, 148, 250, 49, 44, 183,
  103, 148, 250, 206, 44, 183,
  160, 159, 251, 151, 127, 253,
  95, 159, 251, 104, 127, 253,
  160, 143, 248, 132, 8, 172,
  95, 143, 248, 123, 8, 172,
  169, 148, 244, 219, 44, 158,
  86, 148, 244, 36, 44, 158,
  128, 183, 239, 128, 250, 163,
  128, 173, 250, 128, 124, 255,
  128, 39, 237, 128, 123, 255,
  128, 86, 244, 128, 18, 193,
  128, 103, 247, 128, 228, 206,
  128, 27, 235, 128, 12, 182,
  128, 180, 218, 128, 240, 188,
  128, 180, 218, 128, 240, 188,
  128, 180, 218, 128, 240, 188,
  128, 201, 213, 128, 207, 227,
  128, 201, 213, 128, 207, 227,
  128, 244, 46, 128, 234, 57,
  128, 244, 46, 128, 234, 57,
  128, 200, 0, 128, 168, 6,
  128, 200, 0, 128, 168, 6,
  128, 137, 4, 128, 89, 6,
  128, 137, 4, 128, 89, 6,
  128, 78, 75, 128, 8, 84,
  128, 78, 75, 128, 8, 84,
  146, 103, 212, 243, 78, 149,
  109, 103, 212, 12, 78, 149,
  157, 71, 213, 251, 155, 146,
  98, 71, 213, 4, 155, 146,
  160, 37, 213, 252, 140, 153,
  95, 37, 213, 3, 140, 153,
  162, 12, 207, 251, 109, 152,
  93, 12, 207, 4, 109, 152,
  158, 5, 206, 211, 33, 146,
  97, 5, 206, 44, 33, 146,
  144, 2, 211, 148, 3, 148,
  111, 2, 211, 107, 3, 148,
  128, 0, 214, 128, 3, 154,
  168, 109, 207, 173, 9, 133,
  87, 109, 207, 82, 9, 133,
  187, 122, 208, 203, 27, 149,
  68, 122, 208, 52, 27, 149,
  205, 147, 194, 244, 76, 119,
  50, 147, 194, 11, 76, 119,
  208, 183, 216, 240, 182, 155,
  47, 183, 216, 15, 182, 155,
  194, 190, 221, 193, 234, 155,
  61, 190, 221, 62, 234, 155,
  173, 205, 230, 204, 227, 149,
  82, 205, 230, 51, 227, 149,
  157, 226, 237, 157, 250, 149,
  98, 226, 237, 98, 250, 149,
  142, 221, 241, 51, 227, 152,
  113, 221, 241, 204, 227, 152,
  133, 191, 240, 27, 202, 151,
  122, 191, 240, 228, 202, 151,
  143, 181, 243, 161, 101, 248,
  112, 181, 243, 94, 101, 248,
  139, 167, 242, 131, 102, 252,
  116, 167, 242, 124, 102, 252,
  146, 140, 239, 110, 100, 251,
  109, 140, 239, 145, 100, 251,
  162, 130, 233, 167, 84, 241,
  93, 130, 233, 88, 84, 241,
  173, 136, 228, 181, 79, 233,
  82, 136, 228, 74, 79, 233,
  186, 152, 225, 184, 101, 239,
  69, 152, 225, 71, 101, 239,
  187, 166, 225, 174, 100, 243,
  68, 166, 225, 81, 100, 243,
  184, 176, 227, 158, 88, 245,
  71, 176, 227, 97, 88, 245,
  168, 184, 235, 153, 126, 252,
  87, 184, 235, 102, 126, 252,
  151, 188, 241, 161, 111, 249,
  104, 188, 241, 94, 111, 249,
  128, 28, 237, 128, 73, 243,
  138, 34, 237, 147, 106, 252,
  117, 34, 237, 108, 106, 252,
  138, 19, 234, 139, 86, 248,
  117, 19, 234, 116, 86, 248,
  133, 13, 232, 124, 75, 244,
  122, 13, 232, 131, 75, 244,
  128, 12, 230, 128, 85, 248,
  128, 102, 240, 128, 224, 210,
  128, 109, 239, 128, 200, 232,
  137, 108, 239, 160, 172, 243,
  118, 108, 239, 95, 172, 243,
  139, 98, 240, 219, 81, 203,
  116, 98, 240, 36, 81, 203,
  136, 90, 239, 191, 72, 223,
  119, 90, 239, 64, 72, 223,
  165, 121, 228, 176, 62, 225,
  90, 121, 228, 79, 62, 225,
  185, 135, 221, 191, 76, 225,
  70, 135, 221, 64, 76, 225,
  195, 154, 218, 197, 86, 226,
  60, 154, 218, 58, 86, 226,
  197, 176, 226, 190, 109, 237,
  58, 176, 226, 65, 109, 237,
  192, 181, 236, 171, 123, 247,
  63, 181, 236, 84, 123, 247,
  168, 198, 247, 168, 124, 248,
  87, 198, 247, 87, 124, 248,
  157, 210, 253, 162, 155, 247,
  98, 210, 253, 93, 155, 247,
  146, 207, 255, 107, 148, 252,
  109, 207, 255, 148, 148, 252,
  137, 183, 254, 118, 124, 255,
  118, 183, 254, 137, 124, 255,
  139, 114, 249, 136, 103, 252,
  116, 114, 249, 119, 103, 252,
  147, 70, 234, 202, 142, 230,
  108, 70, 234, 53, 142, 230,
  151, 36, 230, 200, 123, 232,
  104, 36, 230, 55, 123, 232,
  152, 21, 227, 198, 100, 230,
  103, 21, 227, 57, 100, 230,
  149, 9, 222, 174, 49, 216,
  106, 9, 222, 81, 49, 216,
  143, 7, 222, 149, 31, 209,
  112, 7, 222, 106, 31, 209,
  128, 5, 223, 128, 26, 205,
  128, 134, 236, 128, 129, 255,
  128, 155, 242, 128, 99, 252,
  158, 189, 239, 145, 115, 253,
  97, 189, 239, 110, 115, 253,
  143, 146, 240, 88, 106, 247,
  112, 146, 240, 167, 106, 247,
  140, 155, 241, 107, 102, 251,
  115, 155, 241, 148, 102, 251,
  138, 38, 237, 150, 120, 253,
  117, 38, 237, 105, 120, 253,
  135, 70, 240, 145, 128, 254,
  120, 70, 240, 110, 128, 254,
  128, 70, 240, 128, 127, 255,
  128, 85, 239, 128, 69, 241,
  136, 92, 244, 201, 34, 173,
  119, 92, 244, 54, 34, 173,
  140, 98, 247, 245, 100, 168,
  115, 98, 247, 10, 100, 168,
  138, 110, 244, 207, 226, 142,
  117, 110, 244, 48, 226, 142,
  131, 111, 244, 89, 248, 147,
  124, 111, 244, 166, 248, 147,
  128, 101, 251, 128, 142, 254,
  132, 108, 249, 102, 204, 226,
  123, 108, 249, 153, 204, 226,
  136, 107, 249, 174, 188, 229,
  119, 107, 249, 81, 188, 229,
  138, 98, 251, 182, 104, 240,
  117, 98, 251, 73, 104, 240,
  135, 95, 248, 156, 56, 229,
  120, 95, 248, 99, 56, 229,
  128, 90, 248, 128, 60, 236,
  152, 87, 211, 247, 169, 142,
  103, 87, 211, 8, 169, 142,
  143, 96, 234, 222, 131, 213,
  112, 96, 234, 33, 131, 213,
  144, 87, 234, 210, 146, 223,
  111, 87, 234, 45, 146, 223,
  149, 95, 211, 249, 163, 141,
  106, 95, 211, 6, 163, 141,
  128, 14, 230, 128, 210, 225,
  132, 15, 230, 80, 197, 223,
  123, 15, 230, 175, 197, 223,
  136, 21, 234, 45, 135, 224,
  119, 21, 234, 210, 135, 224,
  136, 31, 236, 113, 49, 227,
  119, 31, 236, 142, 49, 227,
  128, 26, 226, 128, 38, 219,
  136, 30, 227, 62, 38, 190,
  119, 30, 227, 193, 38, 190,
  136, 22, 223, 41, 142, 220,
  119, 22, 223, 214, 142, 220,
  132, 17, 222, 86, 188, 232,
  123, 17, 222, 169, 188, 232,
  128, 16, 222, 128, 195, 236,
  144, 156, 244, 149, 116, 253,
  111, 156, 244, 106, 116, 253,
  145, 148, 243, 125, 120, 255,
  110, 148, 243, 130, 120, 255,
  159, 183, 241, 149, 142, 252,
  96, 183, 241, 106, 142, 252,
  153, 182, 243, 151, 132, 253,
  102, 182, 243, 104, 132, 253,
  167, 179, 243, 150, 113, 252,
  88, 179, 243, 105, 113, 252,
  180, 173, 232, 167, 132, 249,
  75, 173, 232, 88, 132, 249,
  182, 165, 230, 151, 119, 252,
  73, 165, 230, 104, 119, 252,
  181, 153, 229, 166, 116, 249,
  74, 153, 229, 89, 116, 249,
  172, 141, 235, 164, 122, 250,
  83, 141, 235, 91, 122, 250,
  162, 136, 239, 153, 101, 250,
  93, 136, 239, 102, 101, 250,
  149, 142, 244, 129, 108, 253,
  106, 142, 244, 126, 108, 253,
  144, 166, 244, 158, 114, 251,
  111, 166, 244, 97, 114, 251,
  147, 176, 244, 148, 117, 253,
  108, 176, 244, 107, 117, 253,
  149, 174, 241, 191, 79, 226,
  106, 174, 241, 64, 79, 226,
  146, 166, 241, 223, 100, 208,
  109, 166, 241, 32, 100, 208,
  150, 144, 241, 182, 199, 218,
  105, 144, 241, 73, 199, 218,
  162, 139, 236, 146, 206, 226,
  93, 139, 236, 109, 206, 226,
  170, 143, 233, 117, 197, 234,
  85, 143, 233, 138, 197, 234,
  179, 155, 228, 95, 156, 247,
  77, 155, 228, 160, 156, 247,
  179, 164, 228, 82, 111, 246,
  76, 164, 228, 173, 111, 246,
  177, 171, 229, 103, 49, 225,
  78, 171, 229, 152, 49, 225,
  166, 178, 240, 110, 30, 208,
  89, 178, 240, 145, 30, 208,
  154, 179, 242, 167, 84, 241,
  101, 179, 242, 88, 84, 241,
  159, 180, 240, 128, 64, 238,
  96, 180, 240, 127, 64, 238,
  146, 150, 240, 215, 165, 212,
  109, 150, 240, 40, 165, 212,
  146, 157, 240, 230, 129, 203,
  109, 157, 240, 25, 129, 203,
  138, 187, 219, 63, 237, 133,
  138, 187, 219, 63, 237, 133,
  117, 187, 219, 192, 237, 133,
  117, 187, 219, 192, 237, 133,
  146, 214, 220, 67, 193, 36,
  146, 214, 220, 67, 193, 36,
  109, 214, 220, 188, 193, 36,
  109, 214, 220, 188, 193, 36,
  159, 217, 216, 142, 211, 32,
  159, 217, 216, 142, 211, 32,
  96, 217, 216, 113, 211, 32,
  96, 217, 216, 113, 211, 32,
  173, 199, 211, 167, 244, 94,
  173, 199, 211, 167, 244, 94,
  82, 199, 211, 88, 244, 94,
  82, 199, 211, 88, 244, 94,
  191, 186, 201, 172, 243, 99,
  191, 186, 201, 172, 243, 99,
  64, 186, 201, 83, 243, 99,
  64, 186, 201, 83, 243, 99,
  202, 180, 197, 222, 204, 89,
  53, 180, 197, 33, 204, 89,
  200, 149, 184, 247, 88, 108,
  55, 149, 184, 8, 88, 108,
  184, 128, 189, 201, 24, 115,
  71, 128, 189, 54, 24, 115,
  168, 115, 198, 184, 14, 115,
  87, 115, 198, 71, 14, 115,
  128, 244, 171, 128, 233, 199,
  128, 244, 171, 128, 233, 199,
  128, 255, 116, 128, 255, 130,
  128, 255, 116, 128, 255, 130,
  128, 102, 27, 128, 39, 36,
  128, 102, 27, 128, 39, 36,
  128, 68, 156, 128, 2, 106,
  128, 68, 156, 128, 2, 106,
  128, 1, 197, 128, 19, 61,
  128, 23, 179, 128, 90, 6,
  128, 23, 179, 128, 90, 6,
  128, 54, 175, 128, 87, 7,
  128, 54, 175, 128, 87, 7,
  128, 65, 170, 128, 25, 52,
  128, 65, 170, 128, 25, 52,
  207, 158, 136, 252, 102, 138,
  48, 158, 136, 3, 102, 138,
  208, 169, 120, 255, 122, 128,
  47, 169, 120, 0, 122, 128,
  200, 162, 62, 207, 124, 28,
  200, 162, 62, 207, 124, 28,
  55, 162, 62, 48, 124, 28,
  55, 162, 62, 48, 124, 28,
  170, 184, 22, 185, 153, 17,
  85, 184, 22, 70, 153, 17,
  196, 121, 138, 219, 39, 137,
  59, 121, 138, 36, 39, 137,
  183, 111, 103, 162, 5, 120,
  183, 111, 103, 162, 5, 120,
  72, 111, 103, 93, 5, 120,
  72, 111, 103, 93, 5, 120,
  187, 126, 63, 179, 49, 41,
  187, 126, 63, 179, 49, 41,
  68, 126, 63, 76, 49, 41,
  68, 126, 63, 76, 49, 41,
  159, 135, 28, 182, 86, 20,
  96, 135, 28, 73, 86, 20,
  149, 82, 188, 250, 127, 92,
  106, 82, 188, 5, 127, 92,
  144, 74, 166, 220, 53, 82,
  111, 74, 166, 35, 53, 82,
  154, 35, 185, 205, 130, 26,
  101, 35, 185, 50, 130, 26,
  151, 63, 186, 227, 126, 47,
  104, 63, 186, 28, 126, 47,
  158, 9, 187, 199, 68, 40,
  97, 9, 187, 56, 68, 40,
  141, 29, 182, 144, 105, 3,
  114, 29, 182, 111, 105, 3,
  139, 58, 181, 171, 95, 12,
  116, 58, 181, 84, 95, 12,
  143, 5, 193, 140, 30, 47,
  112, 5, 193, 115, 30, 47,
  148, 91, 192, 252, 98, 128,
  107, 91, 192, 3, 98, 128,
  147, 98, 198, 249, 102, 156,
  108, 98, 198, 6, 102, 156,
  146, 105, 202, 231, 57, 150,
  109, 105, 202, 24, 57, 150,
  147, 77, 152, 203, 24, 125,
  108, 77, 152, 52, 24, 125,
  155, 87, 88, 194, 22, 100,
  100, 87, 88, 61, 22, 100,
  160, 108, 47, 194, 44, 58,
  95, 108, 47, 61, 44, 58,
  170, 240, 70, 182, 230, 74,
  85, 240, 70, 73, 230, 74,
  170, 248, 117, 181, 243, 132,
  85, 248, 117, 74, 243, 132,
  170, 238, 163, 186, 221, 191,
  85, 238, 163, 69, 221, 191,
  170, 195, 192, 177, 233, 179,
  85, 195, 192, 78, 233, 179,
  195, 180, 178, 225, 207, 147,
  60, 180, 178, 30, 207, 147,
  187, 186, 170, 188, 227, 180,
  68, 186, 170, 67, 227, 180,
  187, 219, 136, 211, 214, 170,
  68, 219, 136, 44, 214, 170,
  202, 200, 146, 223, 195, 178,
  53, 200, 146, 32, 195, 178,
  202, 207, 110, 236, 194, 124,
  53, 207, 110, 19, 194, 124,
  187, 225, 98, 214, 221, 120,
  68, 225, 98, 41, 221, 120,
  187, 216, 61, 210, 196, 58,
  68, 216, 61, 45, 196, 58,
  202, 197, 74, 239, 167, 79,
  53, 197, 74, 16, 167, 79,
  185, 170, 40, 202, 126, 24,
  70, 170, 40, 53, 126, 24,
  173, 131, 46, 197, 64, 41,
  82, 131, 46, 58, 64, 41,
  204, 170, 97, 242, 166, 169,
  204, 170, 97, 242, 166, 169,
  51, 170, 97, 13, 166, 169,
  51, 170, 97, 13, 166, 169,
  51, 170, 97, 13, 166, 169,
  165, 105, 150, 201, 25, 148,
  90, 105, 150, 54, 25, 148,
  168, 102, 96, 202, 25, 109,
  87, 102, 96, 53, 25, 109,
  211, 180, 92, 91, 222, 205,
  211, 180, 92, 91, 222, 205,
  211, 180, 92, 91, 222, 205,
  44, 180, 92, 164, 222, 205,
  44, 180, 92, 164, 222, 205,
  200, 109, 109, 122, 45, 224,
  55, 109, 109, 133, 45, 224,
  224, 114, 78, 188, 28, 180,
  31, 114, 78, 67, 28, 180,
  247, 135, 63, 213, 64, 197,
  8, 135, 63, 42, 64, 197,
  254, 169, 64, 228, 150, 202,
  1, 169, 64, 27, 150, 202,
  243, 193, 64, 173, 237, 173,
  243, 193, 64, 173, 237, 173,
  12, 193, 64, 82, 237, 173,
  12, 193, 64, 82, 237, 173,
  223, 189, 81, 130, 239, 190,
  223, 189, 81, 130, 239, 190,
  32, 189, 81, 125, 239, 190,
  32, 189, 81, 125, 239, 190,
  222, 181, 84, 197, 119, 234,
  33, 181, 84, 58, 119, 234,
  238, 184, 69, 168, 116, 248,
  17, 184, 69, 87, 116, 248,
  246, 165, 67, 112, 116, 254,
  9, 165, 67, 143, 116, 254,
  240, 138, 67, 124, 162, 250,
  15, 138, 67, 131, 162, 250,
  224, 122, 82, 190, 162, 233,
  31, 122, 82, 65, 162, 233,
  205, 118, 108, 171, 172, 239,
  50, 118, 108, 84, 172, 239,
  213, 174, 95, 186, 119, 240,
  42, 174, 95, 69, 119, 240,
  216, 167, 84, 215, 57, 187,
  39, 167, 84, 40, 57, 187,
  210, 124, 96, 157, 240, 181,
  45, 124, 96, 98, 240, 181,
  224, 128, 73, 106, 249, 159,
  31, 128, 73, 149, 249, 159,
  238, 140, 61, 30, 210, 133,
  17, 140, 61, 225, 210, 133,
  243, 160, 61, 2, 116, 149,
  12, 160, 61, 253, 116, 149,
  237, 174, 62, 110, 29, 206,
  18, 174, 62, 145, 29, 206,
  223, 172, 74, 199, 44, 192,
  32, 172, 74, 56, 44, 192,
  206, 165, 96, 222, 94, 206,
  206, 165, 96, 222, 94, 206,
  49, 165, 96, 33, 94, 206,
  49, 165, 96, 33, 94, 206,
  205, 150, 87, 223, 54, 169,
  50, 150, 87, 32, 54, 169,
  198, 140, 87, 237, 132, 193,
  57, 140, 87, 18, 132, 193,
  204, 139, 87, 201, 220, 176,
  51, 139, 87, 54, 220, 176,
  206, 130, 87, 240, 120, 187,
  49, 130, 87, 15, 120, 187,
  203, 125, 87, 203, 200, 200,
  52, 125, 87, 52, 200, 200,
  195, 128, 117, 237, 65, 110,
  60, 128, 117, 18, 65, 110,
  195, 124, 102, 222, 138, 212,
  195, 124, 102, 222, 138, 212,
  60, 124, 102, 33, 138, 212,
  60, 124, 102, 33, 138, 212,
  195, 133, 99, 245, 105, 172,
  195, 133, 99, 245, 105, 172,
  60, 133, 99, 10, 105, 172,
  60, 133, 99, 10, 105, 172,
  202, 154, 96, 239, 73, 159,
  202, 154, 96, 239, 73, 159,
  53, 154, 96, 16, 73, 159,
  53, 154, 96, 16, 73, 159,
  211, 159, 88, 216, 58, 188,
  44, 159, 88, 39, 58, 188,
  211, 158, 80, 213, 72, 205,
  44, 158, 80, 42, 72, 205,
  203, 125, 80, 212, 172, 212,
  52, 125, 80, 43, 172, 212,
  207, 130, 80, 175, 175, 236,
  48, 130, 80, 80, 175, 236,
  205, 138, 80, 184, 175, 231,
  50, 138, 80, 71, 175, 231,
  199, 140, 80, 227, 160, 200,
  56, 140, 80, 28, 160, 200,
  206, 150, 80, 200, 73, 217,
  49, 150, 80, 55, 73, 217,
  224, 170, 66, 189, 84, 230,
  31, 170, 66, 66, 84, 230,
  238, 172, 55, 96, 53, 226,
  17, 172, 55, 159, 53, 226,
  245, 159, 54, 33, 115, 212,
  10, 159, 54, 222, 115, 212,
  240, 139, 55, 59, 185, 218,
  15, 139, 55, 196, 185, 218,
  225, 128, 64, 139, 222, 213,
  30, 128, 64, 116, 222, 213,
  210, 125, 88, 121, 249, 166,
  45, 125, 88, 134, 249, 166,
  216, 165, 76, 209, 75, 211,
  39, 165, 76, 46, 75, 211,
  211, 142, 78, 153, 128, 252,
  44, 142, 78, 102, 128, 252,
  215, 136, 77, 177, 142, 244,
  40, 136, 77, 78, 142, 244,
  221, 144, 73, 183, 123, 242,
  34, 144, 73, 72, 123, 242,
  217, 150, 75, 169, 128, 248,
  38, 150, 75, 86, 128, 248,
  222, 158, 71, 168, 139, 248,
  33, 158, 71, 87, 139, 248,
  226, 152, 70, 171, 118, 247,
  29, 152, 70, 84, 118, 247,
  231, 155, 69, 183, 126, 242,
  24, 155, 69, 72, 126, 242,
  229, 163, 69, 173, 165, 240,
  26, 163, 69, 82, 165, 240,
  223, 184, 55, 74, 199, 36,
  32, 184, 55, 181, 199, 36,
  244, 188, 46, 166, 207, 36,
  11, 188, 46, 89, 207, 36,
  255, 166, 53, 245, 138, 80,
  0, 166, 53, 10, 138, 80,
  250, 135, 48, 206, 65, 49,
  5, 135, 48, 49, 65, 49,
  224, 116, 54, 122, 38, 36,
  31, 116, 54, 133, 38, 36,
  201, 111, 78, 117, 20, 60,
  54, 111, 78, 138, 20, 60,
  208, 177, 70, 44, 200, 65,
  208, 177, 70, 44, 200, 65,
  47, 177, 70, 211, 200, 65,
};

uint16_t monkey_indices[] = {
  46, 0, 2, 46, 2, 44, 3, 1, 47, 3,
  47, 45, 44, 2, 4, 44, 4, 42, 5, 3,
  45, 5, 45, 43, 2, 8, 6, 2, 6, 4,
  7, 9, 3, 7, 3, 5, 0, 10, 8, 0,
  8, 2, 9, 11, 1, 9, 1, 3, 10, 12,
  14, 10, 14, 8, 15, 13, 11, 15, 11, 9,
  8, 14, 16, 8, 16, 6, 17, 15, 9, 17,
  9, 7, 14, 20, 18, 14, 18, 16, 19, 21,
  15, 19, 15, 17, 12, 22, 20, 12, 20, 14,
  21, 23, 13, 21, 13, 15, 22, 24, 26, 22,
  26, 20, 27, 25, 23, 27, 23, 21, 20, 26,
  28, 20, 28, 18, 29, 27, 21, 29, 21, 19,
  26, 32, 30, 26, 30, 28, 31, 33, 27, 31,
  27, 29, 24, 34, 32, 24, 32, 26, 33, 35,
  25, 33, 25, 27, 34, 36, 38, 34, 38, 32,
  39, 37, 35, 39, 35, 33, 32, 38, 40, 32,
  40, 30, 41, 39, 33, 41, 33, 31, 38, 44,
  42, 38, 42, 40, 43, 45, 39, 43, 39, 41,
  36, 46, 44, 36, 44, 38, 45, 47, 37, 45,
  37, 39, 46, 36, 50, 46, 50, 48, 51, 37,
  47, 51, 47, 49, 36, 34, 52, 36, 52, 50,
  53, 35, 37, 53, 37, 51, 34, 24, 54, 34,
  54, 52, 55, 25, 35, 55, 35, 53, 24, 22,
  56, 24, 56, 54, 57, 23, 25, 57, 25, 55,
  22, 12, 58, 22, 58, 56, 59, 13, 23, 59,
  23, 57, 12, 10, 62, 12, 62, 58, 63, 11,
  13, 63, 13, 59, 10, 0, 64, 10, 64, 62,
  65, 1, 11, 65, 11, 63, 0, 46, 48, 0,
  48, 64, 49, 47, 1, 49, 1, 65, 60, 64,
  48, 49, 65, 61, 62, 64, 60, 61, 65, 63,
  60, 58, 62, 63, 59, 61, 60, 56, 58, 59,
  57, 61, 60, 54, 56, 57, 55, 61, 60, 52,
  54, 55, 53, 61, 60, 50, 52, 53, 51, 61,
  60, 48, 50, 51, 49, 61, 95, 180, 182, 95,
  182, 97, 182, 181, 96, 182, 96, 97, 93, 178,
  180, 93, 180, 95, 181, 179, 94, 181, 94, 96,
  91, 176, 178, 91, 178, 93, 179, 177, 92, 179,
  92, 94, 89, 174, 176, 89, 176, 91, 177, 175,
  90, 177, 90, 92, 87, 172, 174, 87, 174, 89,
  175, 173, 88, 175, 88, 90, 85, 98, 152, 85,
  152, 170, 153, 99, 86, 153, 86, 171, 98, 100,
  154, 98, 154, 152, 155, 101, 99, 155, 99, 153,
  100, 102, 156, 100, 156, 154, 157, 103, 101, 157,
  101, 155, 102, 104, 158, 102, 158, 156, 159, 105,
  103, 159, 103, 157, 104, 106, 160, 104, 160, 158,
  161, 107, 105, 161, 105, 159, 106, 108, 162, 106,
  162, 160, 163, 109, 107, 163, 107, 161, 108, 110,
  164, 108, 164, 162, 165, 111, 109, 165, 109, 163,
  110, 112, 166, 110, 166, 164, 167, 113, 111, 167,
  111, 165, 112, 114, 168, 112, 168, 166, 169, 115,
  113, 169, 113, 167, 114, 66, 67, 114, 67, 168,
  67, 66, 115, 67, 115, 169, 116, 134, 166, 116,
  166, 168, 167, 135, 117, 167, 117, 169, 134, 185,
  164, 134, 164, 166, 165, 186, 135, 165, 135, 167,
  132, 162, 164, 132, 164, 185, 165, 163, 133, 165,
  133, 186, 130, 160, 162, 130, 162, 132, 163, 161,
  131, 163, 131, 133, 128, 158, 160, 128, 160, 130,
  161, 159, 129, 161, 129, 131, 126, 156, 158, 126,
  158, 128, 159, 157, 127, 159, 127, 129, 124, 154,
  156, 124, 156, 126, 157, 155, 125, 157, 125, 127,
  122, 152, 154, 122, 154, 124, 155, 153, 123, 155,
  123, 125, 120, 170, 152, 120, 152, 122, 153, 171,
  121, 153, 121, 123, 120, 187, 183, 120, 183, 170,
  183, 188, 121, 183, 121, 171, 116, 168, 67, 116,
  67, 118, 67, 169, 117, 67, 117, 119, 118, 67,
  184, 118, 184, 189, 184, 67, 119, 184, 119, 190,
  183, 187, 189, 183, 189, 184, 190, 188, 183, 190,
  183, 184, 141, 143, 182, 141, 182, 180, 182, 143,
  142, 182, 142, 181, 139, 141, 180, 139, 180, 178,
  181, 142, 140, 181, 140, 179, 137, 139, 178, 137,
  178, 176, 179, 140, 138, 179, 138, 177, 172, 193,
  191, 172, 191, 174, 192, 194, 173, 192, 173, 175,
  137, 176, 174, 137, 174, 191, 175, 177, 138, 175,
  138, 192, 150, 196, 195, 150, 195, 193, 195, 196,
  151, 195, 151, 194, 191, 193, 195, 191, 195, 68,
  195, 194, 192, 195, 192, 68, 136, 137, 191, 136,
  191, 68, 192, 138, 136, 192, 136, 68, 148, 199,
  197, 148, 197, 150, 198, 200, 149, 198, 149, 151,
  146, 201, 199, 146, 199, 148, 200, 202, 147, 200,
  147, 149, 145, 203, 201, 145, 201, 146, 202, 204,
  145, 202, 145, 147, 144, 70, 203, 144, 203, 145,
  204, 70, 144, 204, 144, 145, 196, 150, 197, 196,
  197, 69, 198, 151, 196, 198, 196, 69, 69, 197,
  212, 69, 212, 214, 213, 198, 69, 213, 69, 214,
  70, 205, 206, 70, 206, 203, 207, 205, 70, 207,
  70, 204, 203, 206, 208, 203, 208, 201, 209, 207,
  204, 209, 204, 202, 201, 208, 210, 201, 210, 199,
  211, 209, 202, 211, 202, 200, 199, 210, 212, 199,
  212, 197, 213, 211, 200, 213, 200, 198, 205, 210,
  208, 205, 208, 206, 209, 211, 205, 209, 205, 207,
  205, 214, 212, 205, 212, 210, 213, 214, 205, 213,
  205, 211, 145, 146, 170, 145, 170, 183, 171, 147,
  145, 171, 145, 183, 146, 148, 170, 148, 217, 170,
  218, 149, 171, 149, 147, 171, 148, 150, 219, 148,
  219, 217, 220, 151, 149, 220, 149, 218, 150, 193,
  172, 150, 172, 219, 173, 194, 151, 173, 151, 220,
  87, 215, 219, 87, 219, 172, 220, 216, 88, 220,
  88, 173, 215, 221, 217, 215, 217, 219, 218, 222,
  216, 218, 216, 220, 85, 170, 217, 85, 217, 221,
  218, 171, 86, 218, 86, 222, 137, 136, 71, 137,
  71, 228, 71, 136, 138, 71, 138, 229, 139, 137,
  228, 139, 228, 226, 229, 138, 140, 229, 140, 227,
  141, 139, 226, 141, 226, 224, 227, 140, 142, 227,
  142, 225, 143, 141, 224, 143, 224, 223, 225, 142,
  143, 225, 143, 223, 223, 224, 235, 223, 235, 237,
  236, 225, 223, 236, 223, 237, 224, 226, 233, 224,
  233, 235, 234, 227, 225, 234, 225, 236, 226, 228,
  231, 226, 231, 233, 232, 229, 227, 232, 227, 234,
  228, 71, 230, 228, 230, 231, 230, 71, 229, 230,
  229, 232, 230, 237, 235, 230, 235, 231, 236, 237,
  230, 236, 230, 232, 231, 235, 233, 234, 236, 232,
  189, 187, 240, 189, 240, 238, 241, 188, 190, 241,
  190, 239, 118, 189, 238, 118, 238, 260, 239, 190,
  119, 239, 119, 261, 116, 118, 260, 116, 260, 262,
  261, 119, 117, 261, 117, 263, 187, 120, 258, 187,
  258, 240, 259, 121, 188, 259, 188, 241, 120, 122,
  256, 120, 256, 258, 257, 123, 121, 257, 121, 259,
  122, 124, 254, 122, 254, 256, 255, 125, 123, 255,
  123, 257, 124, 126, 252, 124, 252, 254, 253, 127,
  125, 253, 125, 255, 126, 128, 250, 126, 250, 252,
  251, 129, 127, 251, 127, 253, 128, 130, 248, 128,
  248, 250, 249, 131, 129, 249, 129, 251, 130, 132,
  246, 130, 246, 248, 247, 133, 131, 247, 131, 249,
  132, 185, 242, 132, 242, 246, 243, 186, 133, 243,
  133, 247, 185, 134, 244, 185, 244, 242, 245, 135,
  186, 245, 186, 243, 134, 116, 262, 134, 262, 244,
  263, 117, 135, 263, 135, 245, 244, 262, 264, 244,
  264, 282, 265, 263, 245, 265, 245, 283, 242, 244,
  282, 242, 282, 284, 283, 245, 243, 283, 243, 285,
  246, 242, 284, 246, 284, 280, 285, 243, 247, 285,
  247, 281, 248, 246, 280, 248, 280, 278, 281, 247,
  249, 281, 249, 279, 250, 248, 278, 250, 278, 276,
  279, 249, 251, 279, 251, 277, 252, 250, 276, 252,
  276, 274, 277, 251, 253, 277, 253, 275, 254, 252,
  274, 254, 274, 272, 275, 253, 255, 275, 255, 273,
  256, 254, 272, 256, 272, 270, 273, 255, 257, 273,
  257, 271, 258, 256, 270, 258, 270, 268, 271, 257,
  259, 271, 259, 269, 240, 258, 268, 240, 268, 286,
  269, 259, 241, 269, 241, 287, 262, 260, 266, 262,
  266, 264, 267, 261, 263, 267, 263, 265, 260, 238,
  288, 260, 288, 266, 289, 239, 261, 289, 261, 267,
  238, 240, 286, 238, 286, 288, 287, 241, 239, 287,
  239, 289, 66, 114, 290, 66, 290, 73, 293, 115,
  66, 293, 66, 73, 114, 112, 294, 114, 294, 290,
  297, 113, 115, 297, 115, 293, 112, 110, 298, 112,
  298, 294, 301, 111, 113, 301, 113, 297, 110, 108,
  302, 110, 302, 298, 305, 109, 111, 305, 111, 301,
  108, 106, 306, 108, 306, 302, 309, 107, 109, 309,
  109, 305, 106, 104, 310, 106, 310, 306, 311, 105,
  107, 311, 107, 309, 104, 102, 312, 104, 312, 310,
  313, 103, 105, 313, 105, 311, 102, 100, 314, 102,
  314, 312, 315, 101, 103, 315, 103, 313, 100, 98,
  316, 100, 316, 314, 317, 99, 101, 317, 101, 315,
  330, 332, 357, 330, 357, 367, 358, 331, 329, 358,
  329, 368, 328, 330, 367, 328, 367, 365, 368, 329,
  327, 368, 327, 366, 326, 328, 365, 326, 365, 369,
  366, 327, 326, 366, 326, 370, 95, 97, 326, 95,
  326, 369, 326, 97, 96, 326, 96, 370, 93, 95,
  369, 93, 369, 363, 370, 96, 94, 370, 94, 364,
  91, 93, 363, 91, 363, 359, 364, 94, 92, 364,
  92, 360, 89, 91, 359, 89, 359, 361, 360, 92,
  90, 360, 90, 362, 359, 365, 367, 359, 367, 361,
  368, 366, 360, 368, 360, 362, 359, 363, 369, 359,
  369, 365, 370, 364, 360, 370, 360, 366, 355, 361,
  367, 355, 367, 357, 368, 362, 356, 368, 356, 358,
  87, 89, 361, 87, 361, 355, 362, 90, 88, 362,
  88, 356, 215, 371, 373, 215, 373, 221, 374, 372,
  216, 374, 216, 222, 87, 355, 371, 87, 371, 215,
  372, 356, 88, 372, 88, 216, 85, 221, 373, 85,
  373, 375, 374, 222, 86, 374, 86, 376, 85, 375,
  316, 85, 316, 98, 317, 376, 86, 317, 86, 99,
  82, 353, 381, 82, 381, 323, 382, 354, 81, 382,
  81, 322, 323, 381, 379, 323, 379, 84, 380, 382,
  322, 380, 322, 83, 84, 379, 377, 84, 377, 325,
  378, 380, 83, 378, 83, 324, 325, 377, 357, 325,
  357, 332, 358, 378, 324, 358, 324, 331, 355, 357,
  377, 355, 377, 371, 378, 358, 356, 378, 356, 372,
  312, 314, 343, 312, 343, 333, 344, 315, 313, 344,
  313, 334, 80, 341, 353, 80, 353, 82, 354, 342,
  79, 354, 79, 81, 319, 387, 385, 319, 385, 321,
  386, 388, 318, 386, 318, 320, 321, 385, 383, 321,
  383, 78, 384, 386, 320, 384, 320, 77, 78, 383,
  341, 78, 341, 80, 342, 384, 77, 342, 77, 79,
  307, 310, 391, 307, 391, 393, 392, 311, 308, 392,
  308, 394, 393, 391, 397, 393, 397, 395, 398, 392,
  394, 398, 394, 396, 395, 397, 399, 395, 399, 401,
  400, 398, 396, 400, 396, 402, 401, 399, 405, 401,
  405, 403, 406, 400, 402, 406, 402, 404, 338, 407,
  403, 338, 403, 405, 404, 408, 340, 404, 340, 406,
  341, 383, 403, 341, 403, 407, 404, 384, 342, 404,
  342, 408, 383, 385, 401, 383, 401, 403, 402, 386,
  384, 402, 384, 404, 385, 387, 395, 385, 395, 401,
  396, 388, 386, 396, 386, 402, 387, 389, 393, 387,
  393, 395, 394, 390, 388, 394, 388, 396, 303, 307,
  393, 303, 393, 389, 394, 308, 304, 394, 304, 390,
  76, 389, 387, 76, 387, 319, 388, 390, 75, 388,
  75, 318, 291, 295, 299, 291, 299, 303, 300, 296,
  292, 300, 292, 304, 291, 303, 389, 291, 389, 76,
  390, 304, 292, 390, 292, 75, 74, 291, 76, 75,
  292, 72, 310, 312, 333, 310, 333, 391, 334, 313,
  311, 334, 311, 392, 333, 335, 397, 333, 397, 391,
  398, 336, 334, 398, 334, 392, 335, 412, 399, 335,
  399, 397, 400, 414, 336, 400, 336, 398, 338, 405,
  399, 338, 399, 412, 400, 406, 340, 400, 340, 414,
  377, 379, 418, 377, 418, 416, 419, 380, 378, 419,
  378, 417, 343, 416, 418, 343, 418, 346, 419, 417,
  344, 419, 344, 347, 314, 316, 416, 314, 416, 343,
  417, 317, 315, 417, 315, 344, 316, 373, 371, 316,
  371, 416, 372, 374, 317, 372, 317, 417, 371, 377,
  416, 417, 378, 372, 316, 375, 373, 374, 376, 317,
  338, 350, 409, 338, 409, 407, 410, 351, 340, 410,
  340, 408, 341, 407, 409, 341, 409, 353, 410, 408,
  342, 410, 342, 354, 346, 418, 409, 346, 409, 350,
  410, 419, 347, 410, 347, 351, 379, 381, 409, 379,
  409, 418, 410, 382, 380, 410, 380, 419, 353, 409,
  381, 382, 410, 354, 437, 420, 453, 437, 453, 441,
  454, 424, 440, 454, 440, 442, 437, 441, 443, 437,
  443, 433, 444, 442, 440, 444, 440, 436, 433, 443,
  445, 433, 445, 431, 446, 444, 436, 446, 436, 432,
  431, 445, 447, 431, 447, 429, 448, 446, 432, 448,
  432, 430, 429, 447, 449, 429, 449, 427, 450, 448,
  430, 450, 430, 428, 427, 449, 451, 427, 451, 425,
  452, 450, 428, 452, 428, 426, 449, 459, 457, 449,
  457, 451, 458, 460, 450, 458, 450, 452, 447, 461,
  459, 447, 459, 449, 460, 462, 448, 460, 448, 450,
  445, 463, 461, 445, 461, 447, 462, 464, 446, 462,
  446, 448, 443, 465, 463, 443, 463, 445, 464, 466,
  444, 464, 444, 446, 441, 467, 465, 441, 465, 443,
  466, 468, 442, 466, 442, 444, 441, 453, 455, 441,
  455, 467, 456, 454, 442, 456, 442, 468, 343, 346,
  486, 343, 486, 483, 487, 347, 344, 487, 344, 484,
  345, 425, 451, 345, 451, 485, 452, 426, 348, 452,
  348, 488, 333, 343, 483, 333, 483, 335, 484, 344,
  334, 484, 334, 336, 411, 469, 453, 411, 453, 420,
  454, 472, 415, 454, 415, 424, 451, 457, 481, 451,
  481, 485, 482, 458, 452, 482, 452, 488, 479, 489,
  485, 479, 485, 481, 488, 492, 480, 488, 480, 482,
  475, 489, 479, 475, 479, 477, 480, 492, 476, 480,
  476, 478, 473, 493, 489, 473, 489, 475, 492, 496,
  474, 492, 474, 476, 469, 493, 473, 469, 473, 497,
  474, 496, 472, 474, 472, 498, 453, 469, 497, 453,
  497, 455, 498, 472, 454, 498, 454, 456, 335, 494,
  470, 335, 470, 412, 471, 495, 336, 471, 336, 414,
  335, 483, 490, 335, 490, 494, 491, 484, 336, 491,
  336, 495, 483, 486, 490, 491, 487, 484, 455, 497,
  499, 455, 499, 523, 500, 498, 456, 500, 456, 524,
  497, 473, 509, 497, 509, 499, 510, 474, 498, 510,
  498, 500, 473, 475, 507, 473, 507, 509, 508, 476,
  474, 508, 474, 510, 475, 477, 505, 475, 505, 507,
  506, 478, 476, 506, 476, 508, 477, 479, 503, 477,
  503, 505, 504, 480, 478, 504, 478, 506, 479, 481,
  501, 479, 501, 503, 502, 482, 480, 502, 480, 504,
  481, 457, 521, 481, 521, 501, 522, 458, 482, 522,
  482, 502, 467, 455, 523, 467, 523, 511, 524, 456,
  468, 524, 468, 512, 465, 467, 511, 465, 511, 513,
  512, 468, 466, 512, 466, 514, 463, 465, 513, 463,
  513, 515, 514, 466, 464, 514, 464, 516, 461, 463,
  515, 461, 515, 517, 516, 464, 462, 516, 462, 518,
  459, 461, 517, 459, 517, 519, 518, 462, 460, 518,
  460, 520, 457, 459, 519, 457, 519, 521, 520, 460,
  458, 520, 458, 522, 505, 503, 527, 505, 527, 525,
  528, 504, 506, 528, 506, 526, 525, 527, 529, 525,
  529, 531, 530, 528, 526, 530, 526, 532, 531, 529,
  535, 531, 535, 533, 536, 530, 532, 536, 532, 534,
  533, 535, 537, 533, 537, 539, 538, 536, 534, 538,
  534, 540, 511, 523, 533, 511, 533, 539, 534, 524,
  512, 534, 512, 540, 499, 531, 533, 499, 533, 523,
  534, 532, 500, 534, 500, 524, 499, 509, 525, 499,
  525, 531, 526, 510, 500, 526, 500, 532, 505, 525,
  509, 505, 509, 507, 510, 526, 506, 510, 506, 508,
  501, 521, 503, 521, 527, 503, 528, 522, 504, 522,
  502, 504, 519, 529, 527, 519, 527, 521, 528, 530,
  520, 528, 520, 522, 517, 535, 529, 517, 529, 519,
  530, 536, 518, 530, 518, 520, 515, 537, 535, 515,
  535, 517, 536, 538, 516, 536, 516, 518, 513, 539,
  537, 513, 537, 515, 538, 540, 514, 538, 514, 516,
  511, 539, 513, 514, 540, 512, 427, 425, 551, 427,
  551, 549, 552, 426, 428, 552, 428, 550, 429, 427,
  549, 429, 549, 547, 550, 428, 430, 550, 430, 548,
  431, 429, 547, 431, 547, 545, 548, 430, 432, 548,
  432, 546, 434, 431, 545, 434, 545, 543, 546, 432,
  435, 546, 435, 544, 438, 434, 543, 438, 543, 541,
  544, 435, 439, 544, 439, 542, 421, 438, 541, 421,
  541, 553, 542, 439, 423, 542, 423, 555, 541, 549,
  551, 541, 551, 553, 552, 550, 542, 552, 542, 555,
  541, 543, 547, 541, 547, 549, 548, 544, 542, 548,
  542, 550, 543, 545, 547, 548, 546, 544, 338, 412,
  422, 338, 422, 554, 423, 413, 339, 423, 339, 555,
  337, 553, 551, 337, 551, 349, 552, 555, 339, 552,
  339, 352, 345, 349, 551, 345, 551, 425, 552, 352,
  348, 552, 348, 426,
};
