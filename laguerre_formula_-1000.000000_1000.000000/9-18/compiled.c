#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r6514079 = 1.0;
        float r6514080 = -18.0;
        float r6514081 = x;
        float r6514082 = r6514080 * r6514081;
        float r6514083 = r6514079 + r6514082;
        float r6514084 = 76.5;
        float r6514085 = r6514081 * r6514081;
        float r6514086 = r6514084 * r6514085;
        float r6514087 = r6514083 + r6514086;
        float r6514088 = -136.0;
        float r6514089 = r6514085 * r6514081;
        float r6514090 = r6514088 * r6514089;
        float r6514091 = r6514087 + r6514090;
        float r6514092 = 127.5;
        float r6514093 = r6514089 * r6514081;
        float r6514094 = r6514092 * r6514093;
        float r6514095 = r6514091 + r6514094;
        float r6514096 = -71.4;
        float r6514097 = r6514093 * r6514081;
        float r6514098 = r6514096 * r6514097;
        float r6514099 = r6514095 + r6514098;
        float r6514100 = 25.783333;
        float r6514101 = r6514097 * r6514081;
        float r6514102 = r6514100 * r6514101;
        float r6514103 = r6514099 + r6514102;
        float r6514104 = -6.314286;
        float r6514105 = r6514101 * r6514081;
        float r6514106 = r6514104 * r6514105;
        float r6514107 = r6514103 + r6514106;
        float r6514108 = 1.085268;
        float r6514109 = r6514105 * r6514081;
        float r6514110 = r6514108 * r6514109;
        float r6514111 = r6514107 + r6514110;
        float r6514112 = -0.133984;
        float r6514113 = r6514109 * r6514081;
        float r6514114 = r6514112 * r6514113;
        float r6514115 = r6514111 + r6514114;
        float r6514116 = 0.012059;
        float r6514117 = r6514113 * r6514081;
        float r6514118 = r6514116 * r6514117;
        float r6514119 = r6514115 + r6514118;
        float r6514120 = -0.000797;
        float r6514121 = r6514117 * r6514081;
        float r6514122 = r6514120 * r6514121;
        float r6514123 = r6514119 + r6514122;
        float r6514124 = 3.9e-05;
        float r6514125 = r6514121 * r6514081;
        float r6514126 = r6514124 * r6514125;
        float r6514127 = r6514123 + r6514126;
        float r6514128 = -1e-06;
        float r6514129 = r6514125 * r6514081;
        float r6514130 = r6514128 * r6514129;
        float r6514131 = r6514127 + r6514130;
        return r6514131;
}

double f_id(double x) {
        double r6514132 = 1.0;
        double r6514133 = -18.0;
        double r6514134 = x;
        double r6514135 = r6514133 * r6514134;
        double r6514136 = r6514132 + r6514135;
        double r6514137 = 76.5;
        double r6514138 = r6514134 * r6514134;
        double r6514139 = r6514137 * r6514138;
        double r6514140 = r6514136 + r6514139;
        double r6514141 = -136.0;
        double r6514142 = r6514138 * r6514134;
        double r6514143 = r6514141 * r6514142;
        double r6514144 = r6514140 + r6514143;
        double r6514145 = 127.5;
        double r6514146 = r6514142 * r6514134;
        double r6514147 = r6514145 * r6514146;
        double r6514148 = r6514144 + r6514147;
        double r6514149 = -71.4;
        double r6514150 = r6514146 * r6514134;
        double r6514151 = r6514149 * r6514150;
        double r6514152 = r6514148 + r6514151;
        double r6514153 = 25.783333;
        double r6514154 = r6514150 * r6514134;
        double r6514155 = r6514153 * r6514154;
        double r6514156 = r6514152 + r6514155;
        double r6514157 = -6.314286;
        double r6514158 = r6514154 * r6514134;
        double r6514159 = r6514157 * r6514158;
        double r6514160 = r6514156 + r6514159;
        double r6514161 = 1.085268;
        double r6514162 = r6514158 * r6514134;
        double r6514163 = r6514161 * r6514162;
        double r6514164 = r6514160 + r6514163;
        double r6514165 = -0.133984;
        double r6514166 = r6514162 * r6514134;
        double r6514167 = r6514165 * r6514166;
        double r6514168 = r6514164 + r6514167;
        double r6514169 = 0.012059;
        double r6514170 = r6514166 * r6514134;
        double r6514171 = r6514169 * r6514170;
        double r6514172 = r6514168 + r6514171;
        double r6514173 = -0.000797;
        double r6514174 = r6514170 * r6514134;
        double r6514175 = r6514173 * r6514174;
        double r6514176 = r6514172 + r6514175;
        double r6514177 = 3.9e-05;
        double r6514178 = r6514174 * r6514134;
        double r6514179 = r6514177 * r6514178;
        double r6514180 = r6514176 + r6514179;
        double r6514181 = -1e-06;
        double r6514182 = r6514178 * r6514134;
        double r6514183 = r6514181 * r6514182;
        double r6514184 = r6514180 + r6514183;
        return r6514184;
}


double f_of(float x) {
        float r6514185 = -1e-06;
        float r6514186 = x;
        float r6514187 = r6514185 * r6514186;
        float r6514188 = r6514186 * r6514186;
        float r6514189 = r6514188 * r6514188;
        float r6514190 = r6514189 * r6514189;
        float r6514191 = r6514190 * r6514189;
        float r6514192 = r6514187 * r6514191;
        float r6514193 = -71.4;
        float r6514194 = r6514193 * r6514186;
        float r6514195 = r6514194 * r6514189;
        float r6514196 = 25.783333;
        float r6514197 = r6514188 * r6514196;
        float r6514198 = r6514189 * r6514197;
        float r6514199 = r6514195 + r6514198;
        float r6514200 = 127.5;
        float r6514201 = r6514200 * r6514186;
        float r6514202 = 3;
        float r6514203 = pow(r6514186, r6514202);
        float r6514204 = r6514201 * r6514203;
        float r6514205 = -18.0;
        float r6514206 = r6514186 * r6514205;
        float r6514207 = 1.0;
        float r6514208 = r6514206 + r6514207;
        float r6514209 = r6514204 + r6514208;
        float r6514210 = -136.0;
        float r6514211 = r6514210 * r6514186;
        float r6514212 = r6514211 * r6514188;
        float r6514213 = 76.5;
        float r6514214 = r6514186 * r6514213;
        float r6514215 = r6514186 * r6514214;
        float r6514216 = r6514212 + r6514215;
        float r6514217 = r6514209 + r6514216;
        float r6514218 = r6514199 + r6514217;
        float r6514219 = -6.314286;
        float r6514220 = r6514219 * r6514186;
        float r6514221 = r6514203 * r6514203;
        float r6514222 = r6514220 * r6514221;
        float r6514223 = 1.085268;
        float r6514224 = r6514188 * r6514223;
        float r6514225 = r6514221 * r6514224;
        float r6514226 = r6514222 + r6514225;
        float r6514227 = -0.133984;
        float r6514228 = r6514186 * r6514227;
        float r6514229 = r6514190 * r6514228;
        float r6514230 = r6514226 + r6514229;
        float r6514231 = r6514218 + r6514230;
        float r6514232 = r6514221 * r6514203;
        float r6514233 = -0.000797;
        float r6514234 = r6514188 * r6514233;
        float r6514235 = r6514232 * r6514234;
        float r6514236 = 0.012059;
        float r6514237 = r6514188 * r6514236;
        float r6514238 = r6514190 * r6514237;
        float r6514239 = r6514235 + r6514238;
        float r6514240 = r6514221 * r6514189;
        float r6514241 = 3.9e-05;
        float r6514242 = r6514188 * r6514241;
        float r6514243 = r6514240 * r6514242;
        float r6514244 = r6514239 + r6514243;
        float r6514245 = r6514231 + r6514244;
        float r6514246 = r6514192 + r6514245;
        return r6514246;
}

double f_od(double x) {
        double r6514247 = -1e-06;
        double r6514248 = x;
        double r6514249 = r6514247 * r6514248;
        double r6514250 = r6514248 * r6514248;
        double r6514251 = r6514250 * r6514250;
        double r6514252 = r6514251 * r6514251;
        double r6514253 = r6514252 * r6514251;
        double r6514254 = r6514249 * r6514253;
        double r6514255 = -71.4;
        double r6514256 = r6514255 * r6514248;
        double r6514257 = r6514256 * r6514251;
        double r6514258 = 25.783333;
        double r6514259 = r6514250 * r6514258;
        double r6514260 = r6514251 * r6514259;
        double r6514261 = r6514257 + r6514260;
        double r6514262 = 127.5;
        double r6514263 = r6514262 * r6514248;
        double r6514264 = 3;
        double r6514265 = pow(r6514248, r6514264);
        double r6514266 = r6514263 * r6514265;
        double r6514267 = -18.0;
        double r6514268 = r6514248 * r6514267;
        double r6514269 = 1.0;
        double r6514270 = r6514268 + r6514269;
        double r6514271 = r6514266 + r6514270;
        double r6514272 = -136.0;
        double r6514273 = r6514272 * r6514248;
        double r6514274 = r6514273 * r6514250;
        double r6514275 = 76.5;
        double r6514276 = r6514248 * r6514275;
        double r6514277 = r6514248 * r6514276;
        double r6514278 = r6514274 + r6514277;
        double r6514279 = r6514271 + r6514278;
        double r6514280 = r6514261 + r6514279;
        double r6514281 = -6.314286;
        double r6514282 = r6514281 * r6514248;
        double r6514283 = r6514265 * r6514265;
        double r6514284 = r6514282 * r6514283;
        double r6514285 = 1.085268;
        double r6514286 = r6514250 * r6514285;
        double r6514287 = r6514283 * r6514286;
        double r6514288 = r6514284 + r6514287;
        double r6514289 = -0.133984;
        double r6514290 = r6514248 * r6514289;
        double r6514291 = r6514252 * r6514290;
        double r6514292 = r6514288 + r6514291;
        double r6514293 = r6514280 + r6514292;
        double r6514294 = r6514283 * r6514265;
        double r6514295 = -0.000797;
        double r6514296 = r6514250 * r6514295;
        double r6514297 = r6514294 * r6514296;
        double r6514298 = 0.012059;
        double r6514299 = r6514250 * r6514298;
        double r6514300 = r6514252 * r6514299;
        double r6514301 = r6514297 + r6514300;
        double r6514302 = r6514283 * r6514251;
        double r6514303 = 3.9e-05;
        double r6514304 = r6514250 * r6514303;
        double r6514305 = r6514302 * r6514304;
        double r6514306 = r6514301 + r6514305;
        double r6514307 = r6514293 + r6514306;
        double r6514308 = r6514254 + r6514307;
        return r6514308;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6514309, r6514310, r6514311, r6514312, r6514313, r6514314, r6514315, r6514316, r6514317, r6514318, r6514319, r6514320, r6514321, r6514322, r6514323, r6514324, r6514325, r6514326, r6514327, r6514328, r6514329, r6514330, r6514331, r6514332, r6514333, r6514334, r6514335, r6514336, r6514337, r6514338, r6514339, r6514340, r6514341, r6514342, r6514343, r6514344, r6514345, r6514346, r6514347, r6514348, r6514349, r6514350, r6514351, r6514352, r6514353, r6514354, r6514355, r6514356, r6514357, r6514358, r6514359, r6514360, r6514361;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6514309, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6514310, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r6514311);
        mpfr_init(r6514312);
        mpfr_init(r6514313);
        mpfr_init_set_str(r6514314, "76.5", 10, MPFR_RNDN);
        mpfr_init(r6514315);
        mpfr_init(r6514316);
        mpfr_init(r6514317);
        mpfr_init_set_str(r6514318, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r6514319);
        mpfr_init(r6514320);
        mpfr_init(r6514321);
        mpfr_init_set_str(r6514322, "127.5", 10, MPFR_RNDN);
        mpfr_init(r6514323);
        mpfr_init(r6514324);
        mpfr_init(r6514325);
        mpfr_init_set_str(r6514326, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r6514327);
        mpfr_init(r6514328);
        mpfr_init(r6514329);
        mpfr_init_set_str(r6514330, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r6514331);
        mpfr_init(r6514332);
        mpfr_init(r6514333);
        mpfr_init_set_str(r6514334, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r6514335);
        mpfr_init(r6514336);
        mpfr_init(r6514337);
        mpfr_init_set_str(r6514338, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r6514339);
        mpfr_init(r6514340);
        mpfr_init(r6514341);
        mpfr_init_set_str(r6514342, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r6514343);
        mpfr_init(r6514344);
        mpfr_init(r6514345);
        mpfr_init_set_str(r6514346, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r6514347);
        mpfr_init(r6514348);
        mpfr_init(r6514349);
        mpfr_init_set_str(r6514350, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r6514351);
        mpfr_init(r6514352);
        mpfr_init(r6514353);
        mpfr_init_set_str(r6514354, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r6514355);
        mpfr_init(r6514356);
        mpfr_init(r6514357);
        mpfr_init_set_str(r6514358, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r6514359);
        mpfr_init(r6514360);
        mpfr_init(r6514361);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6514311, x, MPFR_RNDN);
        mpfr_mul(r6514312, r6514310, r6514311, MPFR_RNDN);
        mpfr_add(r6514313, r6514309, r6514312, MPFR_RNDN);
        ;
        mpfr_mul(r6514315, r6514311, r6514311, MPFR_RNDN);
        mpfr_mul(r6514316, r6514314, r6514315, MPFR_RNDN);
        mpfr_add(r6514317, r6514313, r6514316, MPFR_RNDN);
        ;
        mpfr_mul(r6514319, r6514315, r6514311, MPFR_RNDN);
        mpfr_mul(r6514320, r6514318, r6514319, MPFR_RNDN);
        mpfr_add(r6514321, r6514317, r6514320, MPFR_RNDN);
        ;
        mpfr_mul(r6514323, r6514319, r6514311, MPFR_RNDN);
        mpfr_mul(r6514324, r6514322, r6514323, MPFR_RNDN);
        mpfr_add(r6514325, r6514321, r6514324, MPFR_RNDN);
        ;
        mpfr_mul(r6514327, r6514323, r6514311, MPFR_RNDN);
        mpfr_mul(r6514328, r6514326, r6514327, MPFR_RNDN);
        mpfr_add(r6514329, r6514325, r6514328, MPFR_RNDN);
        ;
        mpfr_mul(r6514331, r6514327, r6514311, MPFR_RNDN);
        mpfr_mul(r6514332, r6514330, r6514331, MPFR_RNDN);
        mpfr_add(r6514333, r6514329, r6514332, MPFR_RNDN);
        ;
        mpfr_mul(r6514335, r6514331, r6514311, MPFR_RNDN);
        mpfr_mul(r6514336, r6514334, r6514335, MPFR_RNDN);
        mpfr_add(r6514337, r6514333, r6514336, MPFR_RNDN);
        ;
        mpfr_mul(r6514339, r6514335, r6514311, MPFR_RNDN);
        mpfr_mul(r6514340, r6514338, r6514339, MPFR_RNDN);
        mpfr_add(r6514341, r6514337, r6514340, MPFR_RNDN);
        ;
        mpfr_mul(r6514343, r6514339, r6514311, MPFR_RNDN);
        mpfr_mul(r6514344, r6514342, r6514343, MPFR_RNDN);
        mpfr_add(r6514345, r6514341, r6514344, MPFR_RNDN);
        ;
        mpfr_mul(r6514347, r6514343, r6514311, MPFR_RNDN);
        mpfr_mul(r6514348, r6514346, r6514347, MPFR_RNDN);
        mpfr_add(r6514349, r6514345, r6514348, MPFR_RNDN);
        ;
        mpfr_mul(r6514351, r6514347, r6514311, MPFR_RNDN);
        mpfr_mul(r6514352, r6514350, r6514351, MPFR_RNDN);
        mpfr_add(r6514353, r6514349, r6514352, MPFR_RNDN);
        ;
        mpfr_mul(r6514355, r6514351, r6514311, MPFR_RNDN);
        mpfr_mul(r6514356, r6514354, r6514355, MPFR_RNDN);
        mpfr_add(r6514357, r6514353, r6514356, MPFR_RNDN);
        ;
        mpfr_mul(r6514359, r6514355, r6514311, MPFR_RNDN);
        mpfr_mul(r6514360, r6514358, r6514359, MPFR_RNDN);
        mpfr_add(r6514361, r6514357, r6514360, MPFR_RNDN);
        return mpfr_get_d(r6514361, MPFR_RNDN);
}

static mpfr_t r6514362, r6514363, r6514364, r6514365, r6514366, r6514367, r6514368, r6514369, r6514370, r6514371, r6514372, r6514373, r6514374, r6514375, r6514376, r6514377, r6514378, r6514379, r6514380, r6514381, r6514382, r6514383, r6514384, r6514385, r6514386, r6514387, r6514388, r6514389, r6514390, r6514391, r6514392, r6514393, r6514394, r6514395, r6514396, r6514397, r6514398, r6514399, r6514400, r6514401, r6514402, r6514403, r6514404, r6514405, r6514406, r6514407, r6514408, r6514409, r6514410, r6514411, r6514412, r6514413, r6514414, r6514415, r6514416, r6514417, r6514418, r6514419, r6514420, r6514421, r6514422, r6514423;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6514362, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r6514363);
        mpfr_init(r6514364);
        mpfr_init(r6514365);
        mpfr_init(r6514366);
        mpfr_init(r6514367);
        mpfr_init(r6514368);
        mpfr_init(r6514369);
        mpfr_init_set_str(r6514370, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r6514371);
        mpfr_init(r6514372);
        mpfr_init_set_str(r6514373, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r6514374);
        mpfr_init(r6514375);
        mpfr_init(r6514376);
        mpfr_init_set_str(r6514377, "127.5", 10, MPFR_RNDN);
        mpfr_init(r6514378);
        mpfr_init_set_str(r6514379, "3", 10, MPFR_RNDN);
        mpfr_init(r6514380);
        mpfr_init(r6514381);
        mpfr_init_set_str(r6514382, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r6514383);
        mpfr_init_set_str(r6514384, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6514385);
        mpfr_init(r6514386);
        mpfr_init_set_str(r6514387, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r6514388);
        mpfr_init(r6514389);
        mpfr_init_set_str(r6514390, "76.5", 10, MPFR_RNDN);
        mpfr_init(r6514391);
        mpfr_init(r6514392);
        mpfr_init(r6514393);
        mpfr_init(r6514394);
        mpfr_init(r6514395);
        mpfr_init_set_str(r6514396, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r6514397);
        mpfr_init(r6514398);
        mpfr_init(r6514399);
        mpfr_init_set_str(r6514400, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r6514401);
        mpfr_init(r6514402);
        mpfr_init(r6514403);
        mpfr_init_set_str(r6514404, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r6514405);
        mpfr_init(r6514406);
        mpfr_init(r6514407);
        mpfr_init(r6514408);
        mpfr_init(r6514409);
        mpfr_init_set_str(r6514410, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r6514411);
        mpfr_init(r6514412);
        mpfr_init_set_str(r6514413, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r6514414);
        mpfr_init(r6514415);
        mpfr_init(r6514416);
        mpfr_init(r6514417);
        mpfr_init_set_str(r6514418, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r6514419);
        mpfr_init(r6514420);
        mpfr_init(r6514421);
        mpfr_init(r6514422);
        mpfr_init(r6514423);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6514363, x, MPFR_RNDN);
        mpfr_mul(r6514364, r6514362, r6514363, MPFR_RNDN);
        mpfr_mul(r6514365, r6514363, r6514363, MPFR_RNDN);
        mpfr_mul(r6514366, r6514365, r6514365, MPFR_RNDN);
        mpfr_mul(r6514367, r6514366, r6514366, MPFR_RNDN);
        mpfr_mul(r6514368, r6514367, r6514366, MPFR_RNDN);
        mpfr_mul(r6514369, r6514364, r6514368, MPFR_RNDN);
        ;
        mpfr_mul(r6514371, r6514370, r6514363, MPFR_RNDN);
        mpfr_mul(r6514372, r6514371, r6514366, MPFR_RNDN);
        ;
        mpfr_mul(r6514374, r6514365, r6514373, MPFR_RNDN);
        mpfr_mul(r6514375, r6514366, r6514374, MPFR_RNDN);
        mpfr_add(r6514376, r6514372, r6514375, MPFR_RNDN);
        ;
        mpfr_mul(r6514378, r6514377, r6514363, MPFR_RNDN);
        ;
        mpfr_pow(r6514380, r6514363, r6514379, MPFR_RNDN);
        mpfr_mul(r6514381, r6514378, r6514380, MPFR_RNDN);
        ;
        mpfr_mul(r6514383, r6514363, r6514382, MPFR_RNDN);
        ;
        mpfr_add(r6514385, r6514383, r6514384, MPFR_RNDN);
        mpfr_add(r6514386, r6514381, r6514385, MPFR_RNDN);
        ;
        mpfr_mul(r6514388, r6514387, r6514363, MPFR_RNDN);
        mpfr_mul(r6514389, r6514388, r6514365, MPFR_RNDN);
        ;
        mpfr_mul(r6514391, r6514363, r6514390, MPFR_RNDN);
        mpfr_mul(r6514392, r6514363, r6514391, MPFR_RNDN);
        mpfr_add(r6514393, r6514389, r6514392, MPFR_RNDN);
        mpfr_add(r6514394, r6514386, r6514393, MPFR_RNDN);
        mpfr_add(r6514395, r6514376, r6514394, MPFR_RNDN);
        ;
        mpfr_mul(r6514397, r6514396, r6514363, MPFR_RNDN);
        mpfr_mul(r6514398, r6514380, r6514380, MPFR_RNDN);
        mpfr_mul(r6514399, r6514397, r6514398, MPFR_RNDN);
        ;
        mpfr_mul(r6514401, r6514365, r6514400, MPFR_RNDN);
        mpfr_mul(r6514402, r6514398, r6514401, MPFR_RNDN);
        mpfr_add(r6514403, r6514399, r6514402, MPFR_RNDN);
        ;
        mpfr_mul(r6514405, r6514363, r6514404, MPFR_RNDN);
        mpfr_mul(r6514406, r6514367, r6514405, MPFR_RNDN);
        mpfr_add(r6514407, r6514403, r6514406, MPFR_RNDN);
        mpfr_add(r6514408, r6514395, r6514407, MPFR_RNDN);
        mpfr_mul(r6514409, r6514398, r6514380, MPFR_RNDN);
        ;
        mpfr_mul(r6514411, r6514365, r6514410, MPFR_RNDN);
        mpfr_mul(r6514412, r6514409, r6514411, MPFR_RNDN);
        ;
        mpfr_mul(r6514414, r6514365, r6514413, MPFR_RNDN);
        mpfr_mul(r6514415, r6514367, r6514414, MPFR_RNDN);
        mpfr_add(r6514416, r6514412, r6514415, MPFR_RNDN);
        mpfr_mul(r6514417, r6514398, r6514366, MPFR_RNDN);
        ;
        mpfr_mul(r6514419, r6514365, r6514418, MPFR_RNDN);
        mpfr_mul(r6514420, r6514417, r6514419, MPFR_RNDN);
        mpfr_add(r6514421, r6514416, r6514420, MPFR_RNDN);
        mpfr_add(r6514422, r6514408, r6514421, MPFR_RNDN);
        mpfr_add(r6514423, r6514369, r6514422, MPFR_RNDN);
        return mpfr_get_d(r6514423, MPFR_RNDN);
}

static mpfr_t r6514424, r6514425, r6514426, r6514427, r6514428, r6514429, r6514430, r6514431, r6514432, r6514433, r6514434, r6514435, r6514436, r6514437, r6514438, r6514439, r6514440, r6514441, r6514442, r6514443, r6514444, r6514445, r6514446, r6514447, r6514448, r6514449, r6514450, r6514451, r6514452, r6514453, r6514454, r6514455, r6514456, r6514457, r6514458, r6514459, r6514460, r6514461, r6514462, r6514463, r6514464, r6514465, r6514466, r6514467, r6514468, r6514469, r6514470, r6514471, r6514472, r6514473, r6514474, r6514475, r6514476, r6514477, r6514478, r6514479, r6514480, r6514481, r6514482, r6514483, r6514484, r6514485;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6514424, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r6514425);
        mpfr_init(r6514426);
        mpfr_init(r6514427);
        mpfr_init(r6514428);
        mpfr_init(r6514429);
        mpfr_init(r6514430);
        mpfr_init(r6514431);
        mpfr_init_set_str(r6514432, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r6514433);
        mpfr_init(r6514434);
        mpfr_init_set_str(r6514435, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r6514436);
        mpfr_init(r6514437);
        mpfr_init(r6514438);
        mpfr_init_set_str(r6514439, "127.5", 10, MPFR_RNDN);
        mpfr_init(r6514440);
        mpfr_init_set_str(r6514441, "3", 10, MPFR_RNDN);
        mpfr_init(r6514442);
        mpfr_init(r6514443);
        mpfr_init_set_str(r6514444, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r6514445);
        mpfr_init_set_str(r6514446, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6514447);
        mpfr_init(r6514448);
        mpfr_init_set_str(r6514449, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r6514450);
        mpfr_init(r6514451);
        mpfr_init_set_str(r6514452, "76.5", 10, MPFR_RNDN);
        mpfr_init(r6514453);
        mpfr_init(r6514454);
        mpfr_init(r6514455);
        mpfr_init(r6514456);
        mpfr_init(r6514457);
        mpfr_init_set_str(r6514458, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r6514459);
        mpfr_init(r6514460);
        mpfr_init(r6514461);
        mpfr_init_set_str(r6514462, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r6514463);
        mpfr_init(r6514464);
        mpfr_init(r6514465);
        mpfr_init_set_str(r6514466, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r6514467);
        mpfr_init(r6514468);
        mpfr_init(r6514469);
        mpfr_init(r6514470);
        mpfr_init(r6514471);
        mpfr_init_set_str(r6514472, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r6514473);
        mpfr_init(r6514474);
        mpfr_init_set_str(r6514475, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r6514476);
        mpfr_init(r6514477);
        mpfr_init(r6514478);
        mpfr_init(r6514479);
        mpfr_init_set_str(r6514480, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r6514481);
        mpfr_init(r6514482);
        mpfr_init(r6514483);
        mpfr_init(r6514484);
        mpfr_init(r6514485);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6514425, x, MPFR_RNDN);
        mpfr_mul(r6514426, r6514424, r6514425, MPFR_RNDN);
        mpfr_mul(r6514427, r6514425, r6514425, MPFR_RNDN);
        mpfr_mul(r6514428, r6514427, r6514427, MPFR_RNDN);
        mpfr_mul(r6514429, r6514428, r6514428, MPFR_RNDN);
        mpfr_mul(r6514430, r6514429, r6514428, MPFR_RNDN);
        mpfr_mul(r6514431, r6514426, r6514430, MPFR_RNDN);
        ;
        mpfr_mul(r6514433, r6514432, r6514425, MPFR_RNDN);
        mpfr_mul(r6514434, r6514433, r6514428, MPFR_RNDN);
        ;
        mpfr_mul(r6514436, r6514427, r6514435, MPFR_RNDN);
        mpfr_mul(r6514437, r6514428, r6514436, MPFR_RNDN);
        mpfr_add(r6514438, r6514434, r6514437, MPFR_RNDN);
        ;
        mpfr_mul(r6514440, r6514439, r6514425, MPFR_RNDN);
        ;
        mpfr_pow(r6514442, r6514425, r6514441, MPFR_RNDN);
        mpfr_mul(r6514443, r6514440, r6514442, MPFR_RNDN);
        ;
        mpfr_mul(r6514445, r6514425, r6514444, MPFR_RNDN);
        ;
        mpfr_add(r6514447, r6514445, r6514446, MPFR_RNDN);
        mpfr_add(r6514448, r6514443, r6514447, MPFR_RNDN);
        ;
        mpfr_mul(r6514450, r6514449, r6514425, MPFR_RNDN);
        mpfr_mul(r6514451, r6514450, r6514427, MPFR_RNDN);
        ;
        mpfr_mul(r6514453, r6514425, r6514452, MPFR_RNDN);
        mpfr_mul(r6514454, r6514425, r6514453, MPFR_RNDN);
        mpfr_add(r6514455, r6514451, r6514454, MPFR_RNDN);
        mpfr_add(r6514456, r6514448, r6514455, MPFR_RNDN);
        mpfr_add(r6514457, r6514438, r6514456, MPFR_RNDN);
        ;
        mpfr_mul(r6514459, r6514458, r6514425, MPFR_RNDN);
        mpfr_mul(r6514460, r6514442, r6514442, MPFR_RNDN);
        mpfr_mul(r6514461, r6514459, r6514460, MPFR_RNDN);
        ;
        mpfr_mul(r6514463, r6514427, r6514462, MPFR_RNDN);
        mpfr_mul(r6514464, r6514460, r6514463, MPFR_RNDN);
        mpfr_add(r6514465, r6514461, r6514464, MPFR_RNDN);
        ;
        mpfr_mul(r6514467, r6514425, r6514466, MPFR_RNDN);
        mpfr_mul(r6514468, r6514429, r6514467, MPFR_RNDN);
        mpfr_add(r6514469, r6514465, r6514468, MPFR_RNDN);
        mpfr_add(r6514470, r6514457, r6514469, MPFR_RNDN);
        mpfr_mul(r6514471, r6514460, r6514442, MPFR_RNDN);
        ;
        mpfr_mul(r6514473, r6514427, r6514472, MPFR_RNDN);
        mpfr_mul(r6514474, r6514471, r6514473, MPFR_RNDN);
        ;
        mpfr_mul(r6514476, r6514427, r6514475, MPFR_RNDN);
        mpfr_mul(r6514477, r6514429, r6514476, MPFR_RNDN);
        mpfr_add(r6514478, r6514474, r6514477, MPFR_RNDN);
        mpfr_mul(r6514479, r6514460, r6514428, MPFR_RNDN);
        ;
        mpfr_mul(r6514481, r6514427, r6514480, MPFR_RNDN);
        mpfr_mul(r6514482, r6514479, r6514481, MPFR_RNDN);
        mpfr_add(r6514483, r6514478, r6514482, MPFR_RNDN);
        mpfr_add(r6514484, r6514470, r6514483, MPFR_RNDN);
        mpfr_add(r6514485, r6514431, r6514484, MPFR_RNDN);
        return mpfr_get_d(r6514485, MPFR_RNDN);
}

