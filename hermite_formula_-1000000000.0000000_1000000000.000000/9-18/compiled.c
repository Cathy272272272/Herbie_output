#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r7031102 = -17643225600.0;
        float r7031103 = 317578060800.0;
        float r7031104 = x;
        float r7031105 = r7031104 * r7031104;
        float r7031106 = r7031103 * r7031105;
        float r7031107 = r7031102 + r7031106;
        float r7031108 = -846874828800.0;
        float r7031109 = r7031105 * r7031104;
        float r7031110 = r7031109 * r7031104;
        float r7031111 = r7031108 * r7031110;
        float r7031112 = r7031107 + r7031111;
        float r7031113 = 790416506880.0;
        float r7031114 = r7031110 * r7031104;
        float r7031115 = r7031114 * r7031104;
        float r7031116 = r7031113 * r7031115;
        float r7031117 = r7031112 + r7031116;
        float r7031118 = -338749931520.0;
        float r7031119 = r7031115 * r7031104;
        float r7031120 = r7031119 * r7031104;
        float r7031121 = r7031118 * r7031120;
        float r7031122 = r7031117 + r7031121;
        float r7031123 = 75277762560.0;
        float r7031124 = r7031120 * r7031104;
        float r7031125 = r7031124 * r7031104;
        float r7031126 = r7031123 * r7031125;
        float r7031127 = r7031122 + r7031126;
        float r7031128 = -9124577280.0;
        float r7031129 = r7031125 * r7031104;
        float r7031130 = r7031129 * r7031104;
        float r7031131 = r7031128 * r7031130;
        float r7031132 = r7031127 + r7031131;
        float r7031133 = 601620480.0;
        float r7031134 = r7031130 * r7031104;
        float r7031135 = r7031134 * r7031104;
        float r7031136 = r7031133 * r7031135;
        float r7031137 = r7031132 + r7031136;
        float r7031138 = -20054016.0;
        float r7031139 = r7031135 * r7031104;
        float r7031140 = r7031139 * r7031104;
        float r7031141 = r7031138 * r7031140;
        float r7031142 = r7031137 + r7031141;
        float r7031143 = 262144.0;
        float r7031144 = r7031140 * r7031104;
        float r7031145 = r7031144 * r7031104;
        float r7031146 = r7031143 * r7031145;
        float r7031147 = r7031142 + r7031146;
        return r7031147;
}

double f_id(double x) {
        double r7031148 = -17643225600.0;
        double r7031149 = 317578060800.0;
        double r7031150 = x;
        double r7031151 = r7031150 * r7031150;
        double r7031152 = r7031149 * r7031151;
        double r7031153 = r7031148 + r7031152;
        double r7031154 = -846874828800.0;
        double r7031155 = r7031151 * r7031150;
        double r7031156 = r7031155 * r7031150;
        double r7031157 = r7031154 * r7031156;
        double r7031158 = r7031153 + r7031157;
        double r7031159 = 790416506880.0;
        double r7031160 = r7031156 * r7031150;
        double r7031161 = r7031160 * r7031150;
        double r7031162 = r7031159 * r7031161;
        double r7031163 = r7031158 + r7031162;
        double r7031164 = -338749931520.0;
        double r7031165 = r7031161 * r7031150;
        double r7031166 = r7031165 * r7031150;
        double r7031167 = r7031164 * r7031166;
        double r7031168 = r7031163 + r7031167;
        double r7031169 = 75277762560.0;
        double r7031170 = r7031166 * r7031150;
        double r7031171 = r7031170 * r7031150;
        double r7031172 = r7031169 * r7031171;
        double r7031173 = r7031168 + r7031172;
        double r7031174 = -9124577280.0;
        double r7031175 = r7031171 * r7031150;
        double r7031176 = r7031175 * r7031150;
        double r7031177 = r7031174 * r7031176;
        double r7031178 = r7031173 + r7031177;
        double r7031179 = 601620480.0;
        double r7031180 = r7031176 * r7031150;
        double r7031181 = r7031180 * r7031150;
        double r7031182 = r7031179 * r7031181;
        double r7031183 = r7031178 + r7031182;
        double r7031184 = -20054016.0;
        double r7031185 = r7031181 * r7031150;
        double r7031186 = r7031185 * r7031150;
        double r7031187 = r7031184 * r7031186;
        double r7031188 = r7031183 + r7031187;
        double r7031189 = 262144.0;
        double r7031190 = r7031186 * r7031150;
        double r7031191 = r7031190 * r7031150;
        double r7031192 = r7031189 * r7031191;
        double r7031193 = r7031188 + r7031192;
        return r7031193;
}


double f_of(float x) {
        float r7031194 = -17643225600.0;
        float r7031195 = 317578060800.0;
        float r7031196 = x;
        float r7031197 = r7031195 * r7031196;
        float r7031198 = r7031197 * r7031196;
        float r7031199 = r7031194 + r7031198;
        float r7031200 = -846874828800.0;
        float r7031201 = r7031200 * r7031196;
        float r7031202 = 3;
        float r7031203 = pow(r7031196, r7031202);
        float r7031204 = r7031201 * r7031203;
        float r7031205 = cbrt(r7031204);
        float r7031206 = r7031205 * r7031205;
        float r7031207 = r7031203 * r7031201;
        float r7031208 = cbrt(r7031207);
        float r7031209 = r7031206 * r7031208;
        float r7031210 = r7031199 + r7031209;
        float r7031211 = 790416506880.0;
        float r7031212 = r7031196 * r7031196;
        float r7031213 = r7031212 * r7031196;
        float r7031214 = r7031213 * r7031196;
        float r7031215 = r7031214 * r7031196;
        float r7031216 = r7031215 * r7031196;
        float r7031217 = r7031211 * r7031216;
        float r7031218 = r7031210 + r7031217;
        float r7031219 = -338749931520.0;
        float r7031220 = r7031216 * r7031196;
        float r7031221 = r7031220 * r7031196;
        float r7031222 = r7031219 * r7031221;
        float r7031223 = r7031218 + r7031222;
        float r7031224 = 75277762560.0;
        float r7031225 = r7031221 * r7031196;
        float r7031226 = r7031225 * r7031196;
        float r7031227 = r7031224 * r7031226;
        float r7031228 = r7031223 + r7031227;
        float r7031229 = -9124577280.0;
        float r7031230 = r7031226 * r7031196;
        float r7031231 = r7031230 * r7031196;
        float r7031232 = r7031229 * r7031231;
        float r7031233 = r7031228 + r7031232;
        float r7031234 = 601620480.0;
        float r7031235 = r7031231 * r7031196;
        float r7031236 = r7031235 * r7031196;
        float r7031237 = r7031234 * r7031236;
        float r7031238 = r7031233 + r7031237;
        float r7031239 = -20054016.0;
        float r7031240 = r7031236 * r7031196;
        float r7031241 = r7031240 * r7031196;
        float r7031242 = r7031239 * r7031241;
        float r7031243 = r7031238 + r7031242;
        float r7031244 = 262144.0;
        float r7031245 = r7031241 * r7031196;
        float r7031246 = r7031245 * r7031196;
        float r7031247 = r7031244 * r7031246;
        float r7031248 = r7031243 + r7031247;
        return r7031248;
}

double f_od(double x) {
        double r7031249 = -17643225600.0;
        double r7031250 = 317578060800.0;
        double r7031251 = x;
        double r7031252 = r7031250 * r7031251;
        double r7031253 = r7031252 * r7031251;
        double r7031254 = r7031249 + r7031253;
        double r7031255 = -846874828800.0;
        double r7031256 = r7031255 * r7031251;
        double r7031257 = 3;
        double r7031258 = pow(r7031251, r7031257);
        double r7031259 = r7031256 * r7031258;
        double r7031260 = cbrt(r7031259);
        double r7031261 = r7031260 * r7031260;
        double r7031262 = r7031258 * r7031256;
        double r7031263 = cbrt(r7031262);
        double r7031264 = r7031261 * r7031263;
        double r7031265 = r7031254 + r7031264;
        double r7031266 = 790416506880.0;
        double r7031267 = r7031251 * r7031251;
        double r7031268 = r7031267 * r7031251;
        double r7031269 = r7031268 * r7031251;
        double r7031270 = r7031269 * r7031251;
        double r7031271 = r7031270 * r7031251;
        double r7031272 = r7031266 * r7031271;
        double r7031273 = r7031265 + r7031272;
        double r7031274 = -338749931520.0;
        double r7031275 = r7031271 * r7031251;
        double r7031276 = r7031275 * r7031251;
        double r7031277 = r7031274 * r7031276;
        double r7031278 = r7031273 + r7031277;
        double r7031279 = 75277762560.0;
        double r7031280 = r7031276 * r7031251;
        double r7031281 = r7031280 * r7031251;
        double r7031282 = r7031279 * r7031281;
        double r7031283 = r7031278 + r7031282;
        double r7031284 = -9124577280.0;
        double r7031285 = r7031281 * r7031251;
        double r7031286 = r7031285 * r7031251;
        double r7031287 = r7031284 * r7031286;
        double r7031288 = r7031283 + r7031287;
        double r7031289 = 601620480.0;
        double r7031290 = r7031286 * r7031251;
        double r7031291 = r7031290 * r7031251;
        double r7031292 = r7031289 * r7031291;
        double r7031293 = r7031288 + r7031292;
        double r7031294 = -20054016.0;
        double r7031295 = r7031291 * r7031251;
        double r7031296 = r7031295 * r7031251;
        double r7031297 = r7031294 * r7031296;
        double r7031298 = r7031293 + r7031297;
        double r7031299 = 262144.0;
        double r7031300 = r7031296 * r7031251;
        double r7031301 = r7031300 * r7031251;
        double r7031302 = r7031299 * r7031301;
        double r7031303 = r7031298 + r7031302;
        return r7031303;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7031304, r7031305, r7031306, r7031307, r7031308, r7031309, r7031310, r7031311, r7031312, r7031313, r7031314, r7031315, r7031316, r7031317, r7031318, r7031319, r7031320, r7031321, r7031322, r7031323, r7031324, r7031325, r7031326, r7031327, r7031328, r7031329, r7031330, r7031331, r7031332, r7031333, r7031334, r7031335, r7031336, r7031337, r7031338, r7031339, r7031340, r7031341, r7031342, r7031343, r7031344, r7031345, r7031346, r7031347, r7031348, r7031349;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7031304, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7031305, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r7031306);
        mpfr_init(r7031307);
        mpfr_init(r7031308);
        mpfr_init(r7031309);
        mpfr_init_set_str(r7031310, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r7031311);
        mpfr_init(r7031312);
        mpfr_init(r7031313);
        mpfr_init(r7031314);
        mpfr_init_set_str(r7031315, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r7031316);
        mpfr_init(r7031317);
        mpfr_init(r7031318);
        mpfr_init(r7031319);
        mpfr_init_set_str(r7031320, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r7031321);
        mpfr_init(r7031322);
        mpfr_init(r7031323);
        mpfr_init(r7031324);
        mpfr_init_set_str(r7031325, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r7031326);
        mpfr_init(r7031327);
        mpfr_init(r7031328);
        mpfr_init(r7031329);
        mpfr_init_set_str(r7031330, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init(r7031331);
        mpfr_init(r7031332);
        mpfr_init(r7031333);
        mpfr_init(r7031334);
        mpfr_init_set_str(r7031335, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r7031336);
        mpfr_init(r7031337);
        mpfr_init(r7031338);
        mpfr_init(r7031339);
        mpfr_init_set_str(r7031340, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r7031341);
        mpfr_init(r7031342);
        mpfr_init(r7031343);
        mpfr_init(r7031344);
        mpfr_init_set_str(r7031345, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r7031346);
        mpfr_init(r7031347);
        mpfr_init(r7031348);
        mpfr_init(r7031349);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7031306, x, MPFR_RNDN);
        mpfr_mul(r7031307, r7031306, r7031306, MPFR_RNDN);
        mpfr_mul(r7031308, r7031305, r7031307, MPFR_RNDN);
        mpfr_add(r7031309, r7031304, r7031308, MPFR_RNDN);
        ;
        mpfr_mul(r7031311, r7031307, r7031306, MPFR_RNDN);
        mpfr_mul(r7031312, r7031311, r7031306, MPFR_RNDN);
        mpfr_mul(r7031313, r7031310, r7031312, MPFR_RNDN);
        mpfr_add(r7031314, r7031309, r7031313, MPFR_RNDN);
        ;
        mpfr_mul(r7031316, r7031312, r7031306, MPFR_RNDN);
        mpfr_mul(r7031317, r7031316, r7031306, MPFR_RNDN);
        mpfr_mul(r7031318, r7031315, r7031317, MPFR_RNDN);
        mpfr_add(r7031319, r7031314, r7031318, MPFR_RNDN);
        ;
        mpfr_mul(r7031321, r7031317, r7031306, MPFR_RNDN);
        mpfr_mul(r7031322, r7031321, r7031306, MPFR_RNDN);
        mpfr_mul(r7031323, r7031320, r7031322, MPFR_RNDN);
        mpfr_add(r7031324, r7031319, r7031323, MPFR_RNDN);
        ;
        mpfr_mul(r7031326, r7031322, r7031306, MPFR_RNDN);
        mpfr_mul(r7031327, r7031326, r7031306, MPFR_RNDN);
        mpfr_mul(r7031328, r7031325, r7031327, MPFR_RNDN);
        mpfr_add(r7031329, r7031324, r7031328, MPFR_RNDN);
        ;
        mpfr_mul(r7031331, r7031327, r7031306, MPFR_RNDN);
        mpfr_mul(r7031332, r7031331, r7031306, MPFR_RNDN);
        mpfr_mul(r7031333, r7031330, r7031332, MPFR_RNDN);
        mpfr_add(r7031334, r7031329, r7031333, MPFR_RNDN);
        ;
        mpfr_mul(r7031336, r7031332, r7031306, MPFR_RNDN);
        mpfr_mul(r7031337, r7031336, r7031306, MPFR_RNDN);
        mpfr_mul(r7031338, r7031335, r7031337, MPFR_RNDN);
        mpfr_add(r7031339, r7031334, r7031338, MPFR_RNDN);
        ;
        mpfr_mul(r7031341, r7031337, r7031306, MPFR_RNDN);
        mpfr_mul(r7031342, r7031341, r7031306, MPFR_RNDN);
        mpfr_mul(r7031343, r7031340, r7031342, MPFR_RNDN);
        mpfr_add(r7031344, r7031339, r7031343, MPFR_RNDN);
        ;
        mpfr_mul(r7031346, r7031342, r7031306, MPFR_RNDN);
        mpfr_mul(r7031347, r7031346, r7031306, MPFR_RNDN);
        mpfr_mul(r7031348, r7031345, r7031347, MPFR_RNDN);
        mpfr_add(r7031349, r7031344, r7031348, MPFR_RNDN);
        return mpfr_get_d(r7031349, MPFR_RNDN);
}

static mpfr_t r7031350, r7031351, r7031352, r7031353, r7031354, r7031355, r7031356, r7031357, r7031358, r7031359, r7031360, r7031361, r7031362, r7031363, r7031364, r7031365, r7031366, r7031367, r7031368, r7031369, r7031370, r7031371, r7031372, r7031373, r7031374, r7031375, r7031376, r7031377, r7031378, r7031379, r7031380, r7031381, r7031382, r7031383, r7031384, r7031385, r7031386, r7031387, r7031388, r7031389, r7031390, r7031391, r7031392, r7031393, r7031394, r7031395, r7031396, r7031397, r7031398, r7031399, r7031400, r7031401, r7031402, r7031403, r7031404;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7031350, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7031351, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r7031352);
        mpfr_init(r7031353);
        mpfr_init(r7031354);
        mpfr_init(r7031355);
        mpfr_init_set_str(r7031356, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r7031357);
        mpfr_init_set_str(r7031358, "3", 10, MPFR_RNDN);
        mpfr_init(r7031359);
        mpfr_init(r7031360);
        mpfr_init(r7031361);
        mpfr_init(r7031362);
        mpfr_init(r7031363);
        mpfr_init(r7031364);
        mpfr_init(r7031365);
        mpfr_init(r7031366);
        mpfr_init_set_str(r7031367, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r7031368);
        mpfr_init(r7031369);
        mpfr_init(r7031370);
        mpfr_init(r7031371);
        mpfr_init(r7031372);
        mpfr_init(r7031373);
        mpfr_init(r7031374);
        mpfr_init_set_str(r7031375, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r7031376);
        mpfr_init(r7031377);
        mpfr_init(r7031378);
        mpfr_init(r7031379);
        mpfr_init_set_str(r7031380, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r7031381);
        mpfr_init(r7031382);
        mpfr_init(r7031383);
        mpfr_init(r7031384);
        mpfr_init_set_str(r7031385, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init(r7031386);
        mpfr_init(r7031387);
        mpfr_init(r7031388);
        mpfr_init(r7031389);
        mpfr_init_set_str(r7031390, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r7031391);
        mpfr_init(r7031392);
        mpfr_init(r7031393);
        mpfr_init(r7031394);
        mpfr_init_set_str(r7031395, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r7031396);
        mpfr_init(r7031397);
        mpfr_init(r7031398);
        mpfr_init(r7031399);
        mpfr_init_set_str(r7031400, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r7031401);
        mpfr_init(r7031402);
        mpfr_init(r7031403);
        mpfr_init(r7031404);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7031352, x, MPFR_RNDN);
        mpfr_mul(r7031353, r7031351, r7031352, MPFR_RNDN);
        mpfr_mul(r7031354, r7031353, r7031352, MPFR_RNDN);
        mpfr_add(r7031355, r7031350, r7031354, MPFR_RNDN);
        ;
        mpfr_mul(r7031357, r7031356, r7031352, MPFR_RNDN);
        ;
        mpfr_pow(r7031359, r7031352, r7031358, MPFR_RNDN);
        mpfr_mul(r7031360, r7031357, r7031359, MPFR_RNDN);
        mpfr_cbrt(r7031361, r7031360, MPFR_RNDN);
        mpfr_mul(r7031362, r7031361, r7031361, MPFR_RNDN);
        mpfr_mul(r7031363, r7031359, r7031357, MPFR_RNDN);
        mpfr_cbrt(r7031364, r7031363, MPFR_RNDN);
        mpfr_mul(r7031365, r7031362, r7031364, MPFR_RNDN);
        mpfr_add(r7031366, r7031355, r7031365, MPFR_RNDN);
        ;
        mpfr_mul(r7031368, r7031352, r7031352, MPFR_RNDN);
        mpfr_mul(r7031369, r7031368, r7031352, MPFR_RNDN);
        mpfr_mul(r7031370, r7031369, r7031352, MPFR_RNDN);
        mpfr_mul(r7031371, r7031370, r7031352, MPFR_RNDN);
        mpfr_mul(r7031372, r7031371, r7031352, MPFR_RNDN);
        mpfr_mul(r7031373, r7031367, r7031372, MPFR_RNDN);
        mpfr_add(r7031374, r7031366, r7031373, MPFR_RNDN);
        ;
        mpfr_mul(r7031376, r7031372, r7031352, MPFR_RNDN);
        mpfr_mul(r7031377, r7031376, r7031352, MPFR_RNDN);
        mpfr_mul(r7031378, r7031375, r7031377, MPFR_RNDN);
        mpfr_add(r7031379, r7031374, r7031378, MPFR_RNDN);
        ;
        mpfr_mul(r7031381, r7031377, r7031352, MPFR_RNDN);
        mpfr_mul(r7031382, r7031381, r7031352, MPFR_RNDN);
        mpfr_mul(r7031383, r7031380, r7031382, MPFR_RNDN);
        mpfr_add(r7031384, r7031379, r7031383, MPFR_RNDN);
        ;
        mpfr_mul(r7031386, r7031382, r7031352, MPFR_RNDN);
        mpfr_mul(r7031387, r7031386, r7031352, MPFR_RNDN);
        mpfr_mul(r7031388, r7031385, r7031387, MPFR_RNDN);
        mpfr_add(r7031389, r7031384, r7031388, MPFR_RNDN);
        ;
        mpfr_mul(r7031391, r7031387, r7031352, MPFR_RNDN);
        mpfr_mul(r7031392, r7031391, r7031352, MPFR_RNDN);
        mpfr_mul(r7031393, r7031390, r7031392, MPFR_RNDN);
        mpfr_add(r7031394, r7031389, r7031393, MPFR_RNDN);
        ;
        mpfr_mul(r7031396, r7031392, r7031352, MPFR_RNDN);
        mpfr_mul(r7031397, r7031396, r7031352, MPFR_RNDN);
        mpfr_mul(r7031398, r7031395, r7031397, MPFR_RNDN);
        mpfr_add(r7031399, r7031394, r7031398, MPFR_RNDN);
        ;
        mpfr_mul(r7031401, r7031397, r7031352, MPFR_RNDN);
        mpfr_mul(r7031402, r7031401, r7031352, MPFR_RNDN);
        mpfr_mul(r7031403, r7031400, r7031402, MPFR_RNDN);
        mpfr_add(r7031404, r7031399, r7031403, MPFR_RNDN);
        return mpfr_get_d(r7031404, MPFR_RNDN);
}

static mpfr_t r7031405, r7031406, r7031407, r7031408, r7031409, r7031410, r7031411, r7031412, r7031413, r7031414, r7031415, r7031416, r7031417, r7031418, r7031419, r7031420, r7031421, r7031422, r7031423, r7031424, r7031425, r7031426, r7031427, r7031428, r7031429, r7031430, r7031431, r7031432, r7031433, r7031434, r7031435, r7031436, r7031437, r7031438, r7031439, r7031440, r7031441, r7031442, r7031443, r7031444, r7031445, r7031446, r7031447, r7031448, r7031449, r7031450, r7031451, r7031452, r7031453, r7031454, r7031455, r7031456, r7031457, r7031458, r7031459;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7031405, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7031406, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r7031407);
        mpfr_init(r7031408);
        mpfr_init(r7031409);
        mpfr_init(r7031410);
        mpfr_init_set_str(r7031411, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r7031412);
        mpfr_init_set_str(r7031413, "3", 10, MPFR_RNDN);
        mpfr_init(r7031414);
        mpfr_init(r7031415);
        mpfr_init(r7031416);
        mpfr_init(r7031417);
        mpfr_init(r7031418);
        mpfr_init(r7031419);
        mpfr_init(r7031420);
        mpfr_init(r7031421);
        mpfr_init_set_str(r7031422, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r7031423);
        mpfr_init(r7031424);
        mpfr_init(r7031425);
        mpfr_init(r7031426);
        mpfr_init(r7031427);
        mpfr_init(r7031428);
        mpfr_init(r7031429);
        mpfr_init_set_str(r7031430, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r7031431);
        mpfr_init(r7031432);
        mpfr_init(r7031433);
        mpfr_init(r7031434);
        mpfr_init_set_str(r7031435, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r7031436);
        mpfr_init(r7031437);
        mpfr_init(r7031438);
        mpfr_init(r7031439);
        mpfr_init_set_str(r7031440, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init(r7031441);
        mpfr_init(r7031442);
        mpfr_init(r7031443);
        mpfr_init(r7031444);
        mpfr_init_set_str(r7031445, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r7031446);
        mpfr_init(r7031447);
        mpfr_init(r7031448);
        mpfr_init(r7031449);
        mpfr_init_set_str(r7031450, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r7031451);
        mpfr_init(r7031452);
        mpfr_init(r7031453);
        mpfr_init(r7031454);
        mpfr_init_set_str(r7031455, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r7031456);
        mpfr_init(r7031457);
        mpfr_init(r7031458);
        mpfr_init(r7031459);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7031407, x, MPFR_RNDN);
        mpfr_mul(r7031408, r7031406, r7031407, MPFR_RNDN);
        mpfr_mul(r7031409, r7031408, r7031407, MPFR_RNDN);
        mpfr_add(r7031410, r7031405, r7031409, MPFR_RNDN);
        ;
        mpfr_mul(r7031412, r7031411, r7031407, MPFR_RNDN);
        ;
        mpfr_pow(r7031414, r7031407, r7031413, MPFR_RNDN);
        mpfr_mul(r7031415, r7031412, r7031414, MPFR_RNDN);
        mpfr_cbrt(r7031416, r7031415, MPFR_RNDN);
        mpfr_mul(r7031417, r7031416, r7031416, MPFR_RNDN);
        mpfr_mul(r7031418, r7031414, r7031412, MPFR_RNDN);
        mpfr_cbrt(r7031419, r7031418, MPFR_RNDN);
        mpfr_mul(r7031420, r7031417, r7031419, MPFR_RNDN);
        mpfr_add(r7031421, r7031410, r7031420, MPFR_RNDN);
        ;
        mpfr_mul(r7031423, r7031407, r7031407, MPFR_RNDN);
        mpfr_mul(r7031424, r7031423, r7031407, MPFR_RNDN);
        mpfr_mul(r7031425, r7031424, r7031407, MPFR_RNDN);
        mpfr_mul(r7031426, r7031425, r7031407, MPFR_RNDN);
        mpfr_mul(r7031427, r7031426, r7031407, MPFR_RNDN);
        mpfr_mul(r7031428, r7031422, r7031427, MPFR_RNDN);
        mpfr_add(r7031429, r7031421, r7031428, MPFR_RNDN);
        ;
        mpfr_mul(r7031431, r7031427, r7031407, MPFR_RNDN);
        mpfr_mul(r7031432, r7031431, r7031407, MPFR_RNDN);
        mpfr_mul(r7031433, r7031430, r7031432, MPFR_RNDN);
        mpfr_add(r7031434, r7031429, r7031433, MPFR_RNDN);
        ;
        mpfr_mul(r7031436, r7031432, r7031407, MPFR_RNDN);
        mpfr_mul(r7031437, r7031436, r7031407, MPFR_RNDN);
        mpfr_mul(r7031438, r7031435, r7031437, MPFR_RNDN);
        mpfr_add(r7031439, r7031434, r7031438, MPFR_RNDN);
        ;
        mpfr_mul(r7031441, r7031437, r7031407, MPFR_RNDN);
        mpfr_mul(r7031442, r7031441, r7031407, MPFR_RNDN);
        mpfr_mul(r7031443, r7031440, r7031442, MPFR_RNDN);
        mpfr_add(r7031444, r7031439, r7031443, MPFR_RNDN);
        ;
        mpfr_mul(r7031446, r7031442, r7031407, MPFR_RNDN);
        mpfr_mul(r7031447, r7031446, r7031407, MPFR_RNDN);
        mpfr_mul(r7031448, r7031445, r7031447, MPFR_RNDN);
        mpfr_add(r7031449, r7031444, r7031448, MPFR_RNDN);
        ;
        mpfr_mul(r7031451, r7031447, r7031407, MPFR_RNDN);
        mpfr_mul(r7031452, r7031451, r7031407, MPFR_RNDN);
        mpfr_mul(r7031453, r7031450, r7031452, MPFR_RNDN);
        mpfr_add(r7031454, r7031449, r7031453, MPFR_RNDN);
        ;
        mpfr_mul(r7031456, r7031452, r7031407, MPFR_RNDN);
        mpfr_mul(r7031457, r7031456, r7031407, MPFR_RNDN);
        mpfr_mul(r7031458, r7031455, r7031457, MPFR_RNDN);
        mpfr_add(r7031459, r7031454, r7031458, MPFR_RNDN);
        return mpfr_get_d(r7031459, MPFR_RNDN);
}

