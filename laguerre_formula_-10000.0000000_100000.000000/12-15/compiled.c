#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r10923023 = 1.0;
        float r10923024 = -15.0;
        float r10923025 = x;
        float r10923026 = r10923024 * r10923025;
        float r10923027 = r10923023 + r10923026;
        float r10923028 = 52.5;
        float r10923029 = r10923025 * r10923025;
        float r10923030 = r10923028 * r10923029;
        float r10923031 = r10923027 + r10923030;
        float r10923032 = -75.833333;
        float r10923033 = r10923029 * r10923025;
        float r10923034 = r10923032 * r10923033;
        float r10923035 = r10923031 + r10923034;
        float r10923036 = 56.875;
        float r10923037 = r10923033 * r10923025;
        float r10923038 = r10923036 * r10923037;
        float r10923039 = r10923035 + r10923038;
        float r10923040 = -25.025;
        float r10923041 = r10923037 * r10923025;
        float r10923042 = r10923040 * r10923041;
        float r10923043 = r10923039 + r10923042;
        float r10923044 = 6.951389;
        float r10923045 = r10923041 * r10923025;
        float r10923046 = r10923044 * r10923045;
        float r10923047 = r10923043 + r10923046;
        float r10923048 = -1.276786;
        float r10923049 = r10923045 * r10923025;
        float r10923050 = r10923048 * r10923049;
        float r10923051 = r10923047 + r10923050;
        float r10923052 = 0.159598;
        float r10923053 = r10923049 * r10923025;
        float r10923054 = r10923052 * r10923053;
        float r10923055 = r10923051 + r10923054;
        float r10923056 = -0.013792;
        float r10923057 = r10923053 * r10923025;
        float r10923058 = r10923056 * r10923057;
        float r10923059 = r10923055 + r10923058;
        float r10923060 = 0.000828;
        float r10923061 = r10923057 * r10923025;
        float r10923062 = r10923060 * r10923061;
        float r10923063 = r10923059 + r10923062;
        float r10923064 = -3.4e-05;
        float r10923065 = r10923061 * r10923025;
        float r10923066 = r10923064 * r10923065;
        float r10923067 = r10923063 + r10923066;
        float r10923068 = 1e-06;
        float r10923069 = r10923065 * r10923025;
        float r10923070 = r10923068 * r10923069;
        float r10923071 = r10923067 + r10923070;
        return r10923071;
}

double f_id(double x) {
        double r10923072 = 1.0;
        double r10923073 = -15.0;
        double r10923074 = x;
        double r10923075 = r10923073 * r10923074;
        double r10923076 = r10923072 + r10923075;
        double r10923077 = 52.5;
        double r10923078 = r10923074 * r10923074;
        double r10923079 = r10923077 * r10923078;
        double r10923080 = r10923076 + r10923079;
        double r10923081 = -75.833333;
        double r10923082 = r10923078 * r10923074;
        double r10923083 = r10923081 * r10923082;
        double r10923084 = r10923080 + r10923083;
        double r10923085 = 56.875;
        double r10923086 = r10923082 * r10923074;
        double r10923087 = r10923085 * r10923086;
        double r10923088 = r10923084 + r10923087;
        double r10923089 = -25.025;
        double r10923090 = r10923086 * r10923074;
        double r10923091 = r10923089 * r10923090;
        double r10923092 = r10923088 + r10923091;
        double r10923093 = 6.951389;
        double r10923094 = r10923090 * r10923074;
        double r10923095 = r10923093 * r10923094;
        double r10923096 = r10923092 + r10923095;
        double r10923097 = -1.276786;
        double r10923098 = r10923094 * r10923074;
        double r10923099 = r10923097 * r10923098;
        double r10923100 = r10923096 + r10923099;
        double r10923101 = 0.159598;
        double r10923102 = r10923098 * r10923074;
        double r10923103 = r10923101 * r10923102;
        double r10923104 = r10923100 + r10923103;
        double r10923105 = -0.013792;
        double r10923106 = r10923102 * r10923074;
        double r10923107 = r10923105 * r10923106;
        double r10923108 = r10923104 + r10923107;
        double r10923109 = 0.000828;
        double r10923110 = r10923106 * r10923074;
        double r10923111 = r10923109 * r10923110;
        double r10923112 = r10923108 + r10923111;
        double r10923113 = -3.4e-05;
        double r10923114 = r10923110 * r10923074;
        double r10923115 = r10923113 * r10923114;
        double r10923116 = r10923112 + r10923115;
        double r10923117 = 1e-06;
        double r10923118 = r10923114 * r10923074;
        double r10923119 = r10923117 * r10923118;
        double r10923120 = r10923116 + r10923119;
        return r10923120;
}


double f_of(float x) {
        float r10923121 = x;
        float r10923122 = r10923121 * r10923121;
        float r10923123 = r10923122 * r10923122;
        float r10923124 = r10923123 * r10923123;
        float r10923125 = 0.000828;
        float r10923126 = r10923122 * r10923125;
        float r10923127 = r10923124 * r10923126;
        float r10923128 = -15.0;
        float r10923129 = r10923128 * r10923121;
        float r10923130 = 1.0;
        float r10923131 = r10923129 + r10923130;
        float r10923132 = r10923127 + r10923131;
        float r10923133 = 52.5;
        float r10923134 = -75.833333;
        float r10923135 = r10923121 * r10923134;
        float r10923136 = r10923133 + r10923135;
        float r10923137 = r10923136 * r10923122;
        float r10923138 = -25.025;
        float r10923139 = r10923138 * r10923121;
        float r10923140 = 56.875;
        float r10923141 = r10923139 + r10923140;
        float r10923142 = r10923141 * r10923123;
        float r10923143 = r10923137 + r10923142;
        float r10923144 = 6.951389;
        float r10923145 = -1.276786;
        float r10923146 = r10923145 * r10923121;
        float r10923147 = r10923144 + r10923146;
        float r10923148 = 6;
        float r10923149 = pow(r10923121, r10923148);
        float r10923150 = r10923147 * r10923149;
        float r10923151 = r10923143 + r10923150;
        float r10923152 = r10923132 + r10923151;
        float r10923153 = 3;
        float r10923154 = pow(r10923122, r10923153);
        float r10923155 = r10923123 * r10923154;
        float r10923156 = 1e-06;
        float r10923157 = r10923121 * r10923156;
        float r10923158 = -3.4e-05;
        float r10923159 = r10923157 + r10923158;
        float r10923160 = r10923121 * r10923159;
        float r10923161 = r10923155 * r10923160;
        float r10923162 = 0.159598;
        float r10923163 = -0.013792;
        float r10923164 = r10923121 * r10923163;
        float r10923165 = r10923162 + r10923164;
        float r10923166 = r10923124 * r10923165;
        float r10923167 = r10923161 + r10923166;
        float r10923168 = r10923152 + r10923167;
        return r10923168;
}

double f_od(double x) {
        double r10923169 = x;
        double r10923170 = r10923169 * r10923169;
        double r10923171 = r10923170 * r10923170;
        double r10923172 = r10923171 * r10923171;
        double r10923173 = 0.000828;
        double r10923174 = r10923170 * r10923173;
        double r10923175 = r10923172 * r10923174;
        double r10923176 = -15.0;
        double r10923177 = r10923176 * r10923169;
        double r10923178 = 1.0;
        double r10923179 = r10923177 + r10923178;
        double r10923180 = r10923175 + r10923179;
        double r10923181 = 52.5;
        double r10923182 = -75.833333;
        double r10923183 = r10923169 * r10923182;
        double r10923184 = r10923181 + r10923183;
        double r10923185 = r10923184 * r10923170;
        double r10923186 = -25.025;
        double r10923187 = r10923186 * r10923169;
        double r10923188 = 56.875;
        double r10923189 = r10923187 + r10923188;
        double r10923190 = r10923189 * r10923171;
        double r10923191 = r10923185 + r10923190;
        double r10923192 = 6.951389;
        double r10923193 = -1.276786;
        double r10923194 = r10923193 * r10923169;
        double r10923195 = r10923192 + r10923194;
        double r10923196 = 6;
        double r10923197 = pow(r10923169, r10923196);
        double r10923198 = r10923195 * r10923197;
        double r10923199 = r10923191 + r10923198;
        double r10923200 = r10923180 + r10923199;
        double r10923201 = 3;
        double r10923202 = pow(r10923170, r10923201);
        double r10923203 = r10923171 * r10923202;
        double r10923204 = 1e-06;
        double r10923205 = r10923169 * r10923204;
        double r10923206 = -3.4e-05;
        double r10923207 = r10923205 + r10923206;
        double r10923208 = r10923169 * r10923207;
        double r10923209 = r10923203 * r10923208;
        double r10923210 = 0.159598;
        double r10923211 = -0.013792;
        double r10923212 = r10923169 * r10923211;
        double r10923213 = r10923210 + r10923212;
        double r10923214 = r10923172 * r10923213;
        double r10923215 = r10923209 + r10923214;
        double r10923216 = r10923200 + r10923215;
        return r10923216;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10923217, r10923218, r10923219, r10923220, r10923221, r10923222, r10923223, r10923224, r10923225, r10923226, r10923227, r10923228, r10923229, r10923230, r10923231, r10923232, r10923233, r10923234, r10923235, r10923236, r10923237, r10923238, r10923239, r10923240, r10923241, r10923242, r10923243, r10923244, r10923245, r10923246, r10923247, r10923248, r10923249, r10923250, r10923251, r10923252, r10923253, r10923254, r10923255, r10923256, r10923257, r10923258, r10923259, r10923260, r10923261, r10923262, r10923263, r10923264, r10923265;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10923217, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10923218, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r10923219);
        mpfr_init(r10923220);
        mpfr_init(r10923221);
        mpfr_init_set_str(r10923222, "52.5", 10, MPFR_RNDN);
        mpfr_init(r10923223);
        mpfr_init(r10923224);
        mpfr_init(r10923225);
        mpfr_init_set_str(r10923226, "-75.833333", 10, MPFR_RNDN);
        mpfr_init(r10923227);
        mpfr_init(r10923228);
        mpfr_init(r10923229);
        mpfr_init_set_str(r10923230, "56.875", 10, MPFR_RNDN);
        mpfr_init(r10923231);
        mpfr_init(r10923232);
        mpfr_init(r10923233);
        mpfr_init_set_str(r10923234, "-25.025", 10, MPFR_RNDN);
        mpfr_init(r10923235);
        mpfr_init(r10923236);
        mpfr_init(r10923237);
        mpfr_init_set_str(r10923238, "6.951389", 10, MPFR_RNDN);
        mpfr_init(r10923239);
        mpfr_init(r10923240);
        mpfr_init(r10923241);
        mpfr_init_set_str(r10923242, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r10923243);
        mpfr_init(r10923244);
        mpfr_init(r10923245);
        mpfr_init_set_str(r10923246, "0.159598", 10, MPFR_RNDN);
        mpfr_init(r10923247);
        mpfr_init(r10923248);
        mpfr_init(r10923249);
        mpfr_init_set_str(r10923250, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r10923251);
        mpfr_init(r10923252);
        mpfr_init(r10923253);
        mpfr_init_set_str(r10923254, "0.000828", 10, MPFR_RNDN);
        mpfr_init(r10923255);
        mpfr_init(r10923256);
        mpfr_init(r10923257);
        mpfr_init_set_str(r10923258, "-3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r10923259);
        mpfr_init(r10923260);
        mpfr_init(r10923261);
        mpfr_init_set_str(r10923262, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r10923263);
        mpfr_init(r10923264);
        mpfr_init(r10923265);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10923219, x, MPFR_RNDN);
        mpfr_mul(r10923220, r10923218, r10923219, MPFR_RNDN);
        mpfr_add(r10923221, r10923217, r10923220, MPFR_RNDN);
        ;
        mpfr_mul(r10923223, r10923219, r10923219, MPFR_RNDN);
        mpfr_mul(r10923224, r10923222, r10923223, MPFR_RNDN);
        mpfr_add(r10923225, r10923221, r10923224, MPFR_RNDN);
        ;
        mpfr_mul(r10923227, r10923223, r10923219, MPFR_RNDN);
        mpfr_mul(r10923228, r10923226, r10923227, MPFR_RNDN);
        mpfr_add(r10923229, r10923225, r10923228, MPFR_RNDN);
        ;
        mpfr_mul(r10923231, r10923227, r10923219, MPFR_RNDN);
        mpfr_mul(r10923232, r10923230, r10923231, MPFR_RNDN);
        mpfr_add(r10923233, r10923229, r10923232, MPFR_RNDN);
        ;
        mpfr_mul(r10923235, r10923231, r10923219, MPFR_RNDN);
        mpfr_mul(r10923236, r10923234, r10923235, MPFR_RNDN);
        mpfr_add(r10923237, r10923233, r10923236, MPFR_RNDN);
        ;
        mpfr_mul(r10923239, r10923235, r10923219, MPFR_RNDN);
        mpfr_mul(r10923240, r10923238, r10923239, MPFR_RNDN);
        mpfr_add(r10923241, r10923237, r10923240, MPFR_RNDN);
        ;
        mpfr_mul(r10923243, r10923239, r10923219, MPFR_RNDN);
        mpfr_mul(r10923244, r10923242, r10923243, MPFR_RNDN);
        mpfr_add(r10923245, r10923241, r10923244, MPFR_RNDN);
        ;
        mpfr_mul(r10923247, r10923243, r10923219, MPFR_RNDN);
        mpfr_mul(r10923248, r10923246, r10923247, MPFR_RNDN);
        mpfr_add(r10923249, r10923245, r10923248, MPFR_RNDN);
        ;
        mpfr_mul(r10923251, r10923247, r10923219, MPFR_RNDN);
        mpfr_mul(r10923252, r10923250, r10923251, MPFR_RNDN);
        mpfr_add(r10923253, r10923249, r10923252, MPFR_RNDN);
        ;
        mpfr_mul(r10923255, r10923251, r10923219, MPFR_RNDN);
        mpfr_mul(r10923256, r10923254, r10923255, MPFR_RNDN);
        mpfr_add(r10923257, r10923253, r10923256, MPFR_RNDN);
        ;
        mpfr_mul(r10923259, r10923255, r10923219, MPFR_RNDN);
        mpfr_mul(r10923260, r10923258, r10923259, MPFR_RNDN);
        mpfr_add(r10923261, r10923257, r10923260, MPFR_RNDN);
        ;
        mpfr_mul(r10923263, r10923259, r10923219, MPFR_RNDN);
        mpfr_mul(r10923264, r10923262, r10923263, MPFR_RNDN);
        mpfr_add(r10923265, r10923261, r10923264, MPFR_RNDN);
        return mpfr_get_d(r10923265, MPFR_RNDN);
}

static mpfr_t r10923266, r10923267, r10923268, r10923269, r10923270, r10923271, r10923272, r10923273, r10923274, r10923275, r10923276, r10923277, r10923278, r10923279, r10923280, r10923281, r10923282, r10923283, r10923284, r10923285, r10923286, r10923287, r10923288, r10923289, r10923290, r10923291, r10923292, r10923293, r10923294, r10923295, r10923296, r10923297, r10923298, r10923299, r10923300, r10923301, r10923302, r10923303, r10923304, r10923305, r10923306, r10923307, r10923308, r10923309, r10923310, r10923311, r10923312, r10923313;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10923266);
        mpfr_init(r10923267);
        mpfr_init(r10923268);
        mpfr_init(r10923269);
        mpfr_init_set_str(r10923270, "0.000828", 10, MPFR_RNDN);
        mpfr_init(r10923271);
        mpfr_init(r10923272);
        mpfr_init_set_str(r10923273, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r10923274);
        mpfr_init_set_str(r10923275, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10923276);
        mpfr_init(r10923277);
        mpfr_init_set_str(r10923278, "52.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10923279, "-75.833333", 10, MPFR_RNDN);
        mpfr_init(r10923280);
        mpfr_init(r10923281);
        mpfr_init(r10923282);
        mpfr_init_set_str(r10923283, "-25.025", 10, MPFR_RNDN);
        mpfr_init(r10923284);
        mpfr_init_set_str(r10923285, "56.875", 10, MPFR_RNDN);
        mpfr_init(r10923286);
        mpfr_init(r10923287);
        mpfr_init(r10923288);
        mpfr_init_set_str(r10923289, "6.951389", 10, MPFR_RNDN);
        mpfr_init_set_str(r10923290, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r10923291);
        mpfr_init(r10923292);
        mpfr_init_set_str(r10923293, "6", 10, MPFR_RNDN);
        mpfr_init(r10923294);
        mpfr_init(r10923295);
        mpfr_init(r10923296);
        mpfr_init(r10923297);
        mpfr_init_set_str(r10923298, "3", 10, MPFR_RNDN);
        mpfr_init(r10923299);
        mpfr_init(r10923300);
        mpfr_init_set_str(r10923301, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r10923302);
        mpfr_init_set_str(r10923303, "-3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r10923304);
        mpfr_init(r10923305);
        mpfr_init(r10923306);
        mpfr_init_set_str(r10923307, "0.159598", 10, MPFR_RNDN);
        mpfr_init_set_str(r10923308, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r10923309);
        mpfr_init(r10923310);
        mpfr_init(r10923311);
        mpfr_init(r10923312);
        mpfr_init(r10923313);
}

double f_fm(double x) {
        mpfr_set_d(r10923266, x, MPFR_RNDN);
        mpfr_mul(r10923267, r10923266, r10923266, MPFR_RNDN);
        mpfr_mul(r10923268, r10923267, r10923267, MPFR_RNDN);
        mpfr_mul(r10923269, r10923268, r10923268, MPFR_RNDN);
        ;
        mpfr_mul(r10923271, r10923267, r10923270, MPFR_RNDN);
        mpfr_mul(r10923272, r10923269, r10923271, MPFR_RNDN);
        ;
        mpfr_mul(r10923274, r10923273, r10923266, MPFR_RNDN);
        ;
        mpfr_add(r10923276, r10923274, r10923275, MPFR_RNDN);
        mpfr_add(r10923277, r10923272, r10923276, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10923280, r10923266, r10923279, MPFR_RNDN);
        mpfr_add(r10923281, r10923278, r10923280, MPFR_RNDN);
        mpfr_mul(r10923282, r10923281, r10923267, MPFR_RNDN);
        ;
        mpfr_mul(r10923284, r10923283, r10923266, MPFR_RNDN);
        ;
        mpfr_add(r10923286, r10923284, r10923285, MPFR_RNDN);
        mpfr_mul(r10923287, r10923286, r10923268, MPFR_RNDN);
        mpfr_add(r10923288, r10923282, r10923287, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10923291, r10923290, r10923266, MPFR_RNDN);
        mpfr_add(r10923292, r10923289, r10923291, MPFR_RNDN);
        ;
        mpfr_pow(r10923294, r10923266, r10923293, MPFR_RNDN);
        mpfr_mul(r10923295, r10923292, r10923294, MPFR_RNDN);
        mpfr_add(r10923296, r10923288, r10923295, MPFR_RNDN);
        mpfr_add(r10923297, r10923277, r10923296, MPFR_RNDN);
        ;
        mpfr_pow(r10923299, r10923267, r10923298, MPFR_RNDN);
        mpfr_mul(r10923300, r10923268, r10923299, MPFR_RNDN);
        ;
        mpfr_mul(r10923302, r10923266, r10923301, MPFR_RNDN);
        ;
        mpfr_add(r10923304, r10923302, r10923303, MPFR_RNDN);
        mpfr_mul(r10923305, r10923266, r10923304, MPFR_RNDN);
        mpfr_mul(r10923306, r10923300, r10923305, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10923309, r10923266, r10923308, MPFR_RNDN);
        mpfr_add(r10923310, r10923307, r10923309, MPFR_RNDN);
        mpfr_mul(r10923311, r10923269, r10923310, MPFR_RNDN);
        mpfr_add(r10923312, r10923306, r10923311, MPFR_RNDN);
        mpfr_add(r10923313, r10923297, r10923312, MPFR_RNDN);
        return mpfr_get_d(r10923313, MPFR_RNDN);
}

static mpfr_t r10923314, r10923315, r10923316, r10923317, r10923318, r10923319, r10923320, r10923321, r10923322, r10923323, r10923324, r10923325, r10923326, r10923327, r10923328, r10923329, r10923330, r10923331, r10923332, r10923333, r10923334, r10923335, r10923336, r10923337, r10923338, r10923339, r10923340, r10923341, r10923342, r10923343, r10923344, r10923345, r10923346, r10923347, r10923348, r10923349, r10923350, r10923351, r10923352, r10923353, r10923354, r10923355, r10923356, r10923357, r10923358, r10923359, r10923360, r10923361;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10923314);
        mpfr_init(r10923315);
        mpfr_init(r10923316);
        mpfr_init(r10923317);
        mpfr_init_set_str(r10923318, "0.000828", 10, MPFR_RNDN);
        mpfr_init(r10923319);
        mpfr_init(r10923320);
        mpfr_init_set_str(r10923321, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r10923322);
        mpfr_init_set_str(r10923323, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10923324);
        mpfr_init(r10923325);
        mpfr_init_set_str(r10923326, "52.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10923327, "-75.833333", 10, MPFR_RNDN);
        mpfr_init(r10923328);
        mpfr_init(r10923329);
        mpfr_init(r10923330);
        mpfr_init_set_str(r10923331, "-25.025", 10, MPFR_RNDN);
        mpfr_init(r10923332);
        mpfr_init_set_str(r10923333, "56.875", 10, MPFR_RNDN);
        mpfr_init(r10923334);
        mpfr_init(r10923335);
        mpfr_init(r10923336);
        mpfr_init_set_str(r10923337, "6.951389", 10, MPFR_RNDN);
        mpfr_init_set_str(r10923338, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r10923339);
        mpfr_init(r10923340);
        mpfr_init_set_str(r10923341, "6", 10, MPFR_RNDN);
        mpfr_init(r10923342);
        mpfr_init(r10923343);
        mpfr_init(r10923344);
        mpfr_init(r10923345);
        mpfr_init_set_str(r10923346, "3", 10, MPFR_RNDN);
        mpfr_init(r10923347);
        mpfr_init(r10923348);
        mpfr_init_set_str(r10923349, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r10923350);
        mpfr_init_set_str(r10923351, "-3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r10923352);
        mpfr_init(r10923353);
        mpfr_init(r10923354);
        mpfr_init_set_str(r10923355, "0.159598", 10, MPFR_RNDN);
        mpfr_init_set_str(r10923356, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r10923357);
        mpfr_init(r10923358);
        mpfr_init(r10923359);
        mpfr_init(r10923360);
        mpfr_init(r10923361);
}

double f_dm(double x) {
        mpfr_set_d(r10923314, x, MPFR_RNDN);
        mpfr_mul(r10923315, r10923314, r10923314, MPFR_RNDN);
        mpfr_mul(r10923316, r10923315, r10923315, MPFR_RNDN);
        mpfr_mul(r10923317, r10923316, r10923316, MPFR_RNDN);
        ;
        mpfr_mul(r10923319, r10923315, r10923318, MPFR_RNDN);
        mpfr_mul(r10923320, r10923317, r10923319, MPFR_RNDN);
        ;
        mpfr_mul(r10923322, r10923321, r10923314, MPFR_RNDN);
        ;
        mpfr_add(r10923324, r10923322, r10923323, MPFR_RNDN);
        mpfr_add(r10923325, r10923320, r10923324, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10923328, r10923314, r10923327, MPFR_RNDN);
        mpfr_add(r10923329, r10923326, r10923328, MPFR_RNDN);
        mpfr_mul(r10923330, r10923329, r10923315, MPFR_RNDN);
        ;
        mpfr_mul(r10923332, r10923331, r10923314, MPFR_RNDN);
        ;
        mpfr_add(r10923334, r10923332, r10923333, MPFR_RNDN);
        mpfr_mul(r10923335, r10923334, r10923316, MPFR_RNDN);
        mpfr_add(r10923336, r10923330, r10923335, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10923339, r10923338, r10923314, MPFR_RNDN);
        mpfr_add(r10923340, r10923337, r10923339, MPFR_RNDN);
        ;
        mpfr_pow(r10923342, r10923314, r10923341, MPFR_RNDN);
        mpfr_mul(r10923343, r10923340, r10923342, MPFR_RNDN);
        mpfr_add(r10923344, r10923336, r10923343, MPFR_RNDN);
        mpfr_add(r10923345, r10923325, r10923344, MPFR_RNDN);
        ;
        mpfr_pow(r10923347, r10923315, r10923346, MPFR_RNDN);
        mpfr_mul(r10923348, r10923316, r10923347, MPFR_RNDN);
        ;
        mpfr_mul(r10923350, r10923314, r10923349, MPFR_RNDN);
        ;
        mpfr_add(r10923352, r10923350, r10923351, MPFR_RNDN);
        mpfr_mul(r10923353, r10923314, r10923352, MPFR_RNDN);
        mpfr_mul(r10923354, r10923348, r10923353, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10923357, r10923314, r10923356, MPFR_RNDN);
        mpfr_add(r10923358, r10923355, r10923357, MPFR_RNDN);
        mpfr_mul(r10923359, r10923317, r10923358, MPFR_RNDN);
        mpfr_add(r10923360, r10923354, r10923359, MPFR_RNDN);
        mpfr_add(r10923361, r10923345, r10923360, MPFR_RNDN);
        return mpfr_get_d(r10923361, MPFR_RNDN);
}

