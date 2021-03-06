#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r20880235 = 1.0;
        float r20880236 = -11.0;
        float r20880237 = x;
        float r20880238 = r20880236 * r20880237;
        float r20880239 = r20880235 + r20880238;
        float r20880240 = 27.5;
        float r20880241 = r20880237 * r20880237;
        float r20880242 = r20880240 * r20880241;
        float r20880243 = r20880239 + r20880242;
        float r20880244 = -27.5;
        float r20880245 = r20880241 * r20880237;
        float r20880246 = r20880244 * r20880245;
        float r20880247 = r20880243 + r20880246;
        float r20880248 = 13.75;
        float r20880249 = r20880245 * r20880237;
        float r20880250 = r20880248 * r20880249;
        float r20880251 = r20880247 + r20880250;
        float r20880252 = -3.85;
        float r20880253 = r20880249 * r20880237;
        float r20880254 = r20880252 * r20880253;
        float r20880255 = r20880251 + r20880254;
        float r20880256 = 0.641667;
        float r20880257 = r20880253 * r20880237;
        float r20880258 = r20880256 * r20880257;
        float r20880259 = r20880255 + r20880258;
        float r20880260 = -0.065476;
        float r20880261 = r20880257 * r20880237;
        float r20880262 = r20880260 * r20880261;
        float r20880263 = r20880259 + r20880262;
        float r20880264 = 0.004092;
        float r20880265 = r20880261 * r20880237;
        float r20880266 = r20880264 * r20880265;
        float r20880267 = r20880263 + r20880266;
        float r20880268 = -0.000152;
        float r20880269 = r20880265 * r20880237;
        float r20880270 = r20880268 * r20880269;
        float r20880271 = r20880267 + r20880270;
        float r20880272 = 3e-06;
        float r20880273 = r20880269 * r20880237;
        float r20880274 = r20880272 * r20880273;
        float r20880275 = r20880271 + r20880274;
        return r20880275;
}

double f_id(double x) {
        double r20880276 = 1.0;
        double r20880277 = -11.0;
        double r20880278 = x;
        double r20880279 = r20880277 * r20880278;
        double r20880280 = r20880276 + r20880279;
        double r20880281 = 27.5;
        double r20880282 = r20880278 * r20880278;
        double r20880283 = r20880281 * r20880282;
        double r20880284 = r20880280 + r20880283;
        double r20880285 = -27.5;
        double r20880286 = r20880282 * r20880278;
        double r20880287 = r20880285 * r20880286;
        double r20880288 = r20880284 + r20880287;
        double r20880289 = 13.75;
        double r20880290 = r20880286 * r20880278;
        double r20880291 = r20880289 * r20880290;
        double r20880292 = r20880288 + r20880291;
        double r20880293 = -3.85;
        double r20880294 = r20880290 * r20880278;
        double r20880295 = r20880293 * r20880294;
        double r20880296 = r20880292 + r20880295;
        double r20880297 = 0.641667;
        double r20880298 = r20880294 * r20880278;
        double r20880299 = r20880297 * r20880298;
        double r20880300 = r20880296 + r20880299;
        double r20880301 = -0.065476;
        double r20880302 = r20880298 * r20880278;
        double r20880303 = r20880301 * r20880302;
        double r20880304 = r20880300 + r20880303;
        double r20880305 = 0.004092;
        double r20880306 = r20880302 * r20880278;
        double r20880307 = r20880305 * r20880306;
        double r20880308 = r20880304 + r20880307;
        double r20880309 = -0.000152;
        double r20880310 = r20880306 * r20880278;
        double r20880311 = r20880309 * r20880310;
        double r20880312 = r20880308 + r20880311;
        double r20880313 = 3e-06;
        double r20880314 = r20880310 * r20880278;
        double r20880315 = r20880313 * r20880314;
        double r20880316 = r20880312 + r20880315;
        return r20880316;
}


double f_of(float x) {
        float r20880317 = x;
        float r20880318 = r20880317 * r20880317;
        float r20880319 = log(r20880318);
        float r20880320 = r20880319 + r20880319;
        float r20880321 = exp(r20880320);
        float r20880322 = -3.85;
        float r20880323 = r20880317 * r20880322;
        float r20880324 = 13.75;
        float r20880325 = r20880323 + r20880324;
        float r20880326 = r20880321 * r20880325;
        float r20880327 = 3e-06;
        float r20880328 = r20880327 * r20880318;
        float r20880329 = 0.004092;
        float r20880330 = -0.000152;
        float r20880331 = r20880317 * r20880330;
        float r20880332 = r20880329 + r20880331;
        float r20880333 = r20880328 + r20880332;
        float r20880334 = 3;
        float r20880335 = 1;
        float r20880336 = r20880334 + r20880335;
        float r20880337 = pow(r20880318, r20880336);
        float r20880338 = r20880333 * r20880337;
        float r20880339 = r20880326 + r20880338;
        float r20880340 = r20880318 * r20880318;
        float r20880341 = 0.641667;
        float r20880342 = r20880318 * r20880341;
        float r20880343 = r20880340 * r20880342;
        float r20880344 = 1.0;
        float r20880345 = -11.0;
        float r20880346 = r20880345 * r20880317;
        float r20880347 = r20880344 + r20880346;
        float r20880348 = r20880343 + r20880347;
        float r20880349 = -0.065476;
        float r20880350 = r20880349 * r20880317;
        float r20880351 = r20880350 * r20880318;
        float r20880352 = r20880351 * r20880340;
        float r20880353 = 27.5;
        float r20880354 = r20880317 * r20880353;
        float r20880355 = r20880317 - r20880318;
        float r20880356 = r20880354 * r20880355;
        float r20880357 = r20880352 + r20880356;
        float r20880358 = r20880348 + r20880357;
        float r20880359 = r20880339 + r20880358;
        return r20880359;
}

double f_od(double x) {
        double r20880360 = x;
        double r20880361 = r20880360 * r20880360;
        double r20880362 = log(r20880361);
        double r20880363 = r20880362 + r20880362;
        double r20880364 = exp(r20880363);
        double r20880365 = -3.85;
        double r20880366 = r20880360 * r20880365;
        double r20880367 = 13.75;
        double r20880368 = r20880366 + r20880367;
        double r20880369 = r20880364 * r20880368;
        double r20880370 = 3e-06;
        double r20880371 = r20880370 * r20880361;
        double r20880372 = 0.004092;
        double r20880373 = -0.000152;
        double r20880374 = r20880360 * r20880373;
        double r20880375 = r20880372 + r20880374;
        double r20880376 = r20880371 + r20880375;
        double r20880377 = 3;
        double r20880378 = 1;
        double r20880379 = r20880377 + r20880378;
        double r20880380 = pow(r20880361, r20880379);
        double r20880381 = r20880376 * r20880380;
        double r20880382 = r20880369 + r20880381;
        double r20880383 = r20880361 * r20880361;
        double r20880384 = 0.641667;
        double r20880385 = r20880361 * r20880384;
        double r20880386 = r20880383 * r20880385;
        double r20880387 = 1.0;
        double r20880388 = -11.0;
        double r20880389 = r20880388 * r20880360;
        double r20880390 = r20880387 + r20880389;
        double r20880391 = r20880386 + r20880390;
        double r20880392 = -0.065476;
        double r20880393 = r20880392 * r20880360;
        double r20880394 = r20880393 * r20880361;
        double r20880395 = r20880394 * r20880383;
        double r20880396 = 27.5;
        double r20880397 = r20880360 * r20880396;
        double r20880398 = r20880360 - r20880361;
        double r20880399 = r20880397 * r20880398;
        double r20880400 = r20880395 + r20880399;
        double r20880401 = r20880391 + r20880400;
        double r20880402 = r20880382 + r20880401;
        return r20880402;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20880403, r20880404, r20880405, r20880406, r20880407, r20880408, r20880409, r20880410, r20880411, r20880412, r20880413, r20880414, r20880415, r20880416, r20880417, r20880418, r20880419, r20880420, r20880421, r20880422, r20880423, r20880424, r20880425, r20880426, r20880427, r20880428, r20880429, r20880430, r20880431, r20880432, r20880433, r20880434, r20880435, r20880436, r20880437, r20880438, r20880439, r20880440, r20880441, r20880442, r20880443;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880403, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880404, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r20880405);
        mpfr_init(r20880406);
        mpfr_init(r20880407);
        mpfr_init_set_str(r20880408, "27.5", 10, MPFR_RNDN);
        mpfr_init(r20880409);
        mpfr_init(r20880410);
        mpfr_init(r20880411);
        mpfr_init_set_str(r20880412, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r20880413);
        mpfr_init(r20880414);
        mpfr_init(r20880415);
        mpfr_init_set_str(r20880416, "13.75", 10, MPFR_RNDN);
        mpfr_init(r20880417);
        mpfr_init(r20880418);
        mpfr_init(r20880419);
        mpfr_init_set_str(r20880420, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r20880421);
        mpfr_init(r20880422);
        mpfr_init(r20880423);
        mpfr_init_set_str(r20880424, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r20880425);
        mpfr_init(r20880426);
        mpfr_init(r20880427);
        mpfr_init_set_str(r20880428, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r20880429);
        mpfr_init(r20880430);
        mpfr_init(r20880431);
        mpfr_init_set_str(r20880432, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r20880433);
        mpfr_init(r20880434);
        mpfr_init(r20880435);
        mpfr_init_set_str(r20880436, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r20880437);
        mpfr_init(r20880438);
        mpfr_init(r20880439);
        mpfr_init_set_str(r20880440, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r20880441);
        mpfr_init(r20880442);
        mpfr_init(r20880443);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20880405, x, MPFR_RNDN);
        mpfr_mul(r20880406, r20880404, r20880405, MPFR_RNDN);
        mpfr_add(r20880407, r20880403, r20880406, MPFR_RNDN);
        ;
        mpfr_mul(r20880409, r20880405, r20880405, MPFR_RNDN);
        mpfr_mul(r20880410, r20880408, r20880409, MPFR_RNDN);
        mpfr_add(r20880411, r20880407, r20880410, MPFR_RNDN);
        ;
        mpfr_mul(r20880413, r20880409, r20880405, MPFR_RNDN);
        mpfr_mul(r20880414, r20880412, r20880413, MPFR_RNDN);
        mpfr_add(r20880415, r20880411, r20880414, MPFR_RNDN);
        ;
        mpfr_mul(r20880417, r20880413, r20880405, MPFR_RNDN);
        mpfr_mul(r20880418, r20880416, r20880417, MPFR_RNDN);
        mpfr_add(r20880419, r20880415, r20880418, MPFR_RNDN);
        ;
        mpfr_mul(r20880421, r20880417, r20880405, MPFR_RNDN);
        mpfr_mul(r20880422, r20880420, r20880421, MPFR_RNDN);
        mpfr_add(r20880423, r20880419, r20880422, MPFR_RNDN);
        ;
        mpfr_mul(r20880425, r20880421, r20880405, MPFR_RNDN);
        mpfr_mul(r20880426, r20880424, r20880425, MPFR_RNDN);
        mpfr_add(r20880427, r20880423, r20880426, MPFR_RNDN);
        ;
        mpfr_mul(r20880429, r20880425, r20880405, MPFR_RNDN);
        mpfr_mul(r20880430, r20880428, r20880429, MPFR_RNDN);
        mpfr_add(r20880431, r20880427, r20880430, MPFR_RNDN);
        ;
        mpfr_mul(r20880433, r20880429, r20880405, MPFR_RNDN);
        mpfr_mul(r20880434, r20880432, r20880433, MPFR_RNDN);
        mpfr_add(r20880435, r20880431, r20880434, MPFR_RNDN);
        ;
        mpfr_mul(r20880437, r20880433, r20880405, MPFR_RNDN);
        mpfr_mul(r20880438, r20880436, r20880437, MPFR_RNDN);
        mpfr_add(r20880439, r20880435, r20880438, MPFR_RNDN);
        ;
        mpfr_mul(r20880441, r20880437, r20880405, MPFR_RNDN);
        mpfr_mul(r20880442, r20880440, r20880441, MPFR_RNDN);
        mpfr_add(r20880443, r20880439, r20880442, MPFR_RNDN);
        return mpfr_get_d(r20880443, MPFR_RNDN);
}

static mpfr_t r20880444, r20880445, r20880446, r20880447, r20880448, r20880449, r20880450, r20880451, r20880452, r20880453, r20880454, r20880455, r20880456, r20880457, r20880458, r20880459, r20880460, r20880461, r20880462, r20880463, r20880464, r20880465, r20880466, r20880467, r20880468, r20880469, r20880470, r20880471, r20880472, r20880473, r20880474, r20880475, r20880476, r20880477, r20880478, r20880479, r20880480, r20880481, r20880482, r20880483, r20880484, r20880485, r20880486;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20880444);
        mpfr_init(r20880445);
        mpfr_init(r20880446);
        mpfr_init(r20880447);
        mpfr_init(r20880448);
        mpfr_init_set_str(r20880449, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r20880450);
        mpfr_init_set_str(r20880451, "13.75", 10, MPFR_RNDN);
        mpfr_init(r20880452);
        mpfr_init(r20880453);
        mpfr_init_set_str(r20880454, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r20880455);
        mpfr_init_set_str(r20880456, "0.004092", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880457, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r20880458);
        mpfr_init(r20880459);
        mpfr_init(r20880460);
        mpfr_init_set_str(r20880461, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880462, "1", 10, MPFR_RNDN);
        mpfr_init(r20880463);
        mpfr_init(r20880464);
        mpfr_init(r20880465);
        mpfr_init(r20880466);
        mpfr_init(r20880467);
        mpfr_init_set_str(r20880468, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r20880469);
        mpfr_init(r20880470);
        mpfr_init_set_str(r20880471, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880472, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r20880473);
        mpfr_init(r20880474);
        mpfr_init(r20880475);
        mpfr_init_set_str(r20880476, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r20880477);
        mpfr_init(r20880478);
        mpfr_init(r20880479);
        mpfr_init_set_str(r20880480, "27.5", 10, MPFR_RNDN);
        mpfr_init(r20880481);
        mpfr_init(r20880482);
        mpfr_init(r20880483);
        mpfr_init(r20880484);
        mpfr_init(r20880485);
        mpfr_init(r20880486);
}

double f_fm(double x) {
        mpfr_set_d(r20880444, x, MPFR_RNDN);
        mpfr_mul(r20880445, r20880444, r20880444, MPFR_RNDN);
        mpfr_log(r20880446, r20880445, MPFR_RNDN);
        mpfr_add(r20880447, r20880446, r20880446, MPFR_RNDN);
        mpfr_exp(r20880448, r20880447, MPFR_RNDN);
        ;
        mpfr_mul(r20880450, r20880444, r20880449, MPFR_RNDN);
        ;
        mpfr_add(r20880452, r20880450, r20880451, MPFR_RNDN);
        mpfr_mul(r20880453, r20880448, r20880452, MPFR_RNDN);
        ;
        mpfr_mul(r20880455, r20880454, r20880445, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20880458, r20880444, r20880457, MPFR_RNDN);
        mpfr_add(r20880459, r20880456, r20880458, MPFR_RNDN);
        mpfr_add(r20880460, r20880455, r20880459, MPFR_RNDN);
        ;
        ;
        mpfr_add(r20880463, r20880461, r20880462, MPFR_RNDN);
        mpfr_pow(r20880464, r20880445, r20880463, MPFR_RNDN);
        mpfr_mul(r20880465, r20880460, r20880464, MPFR_RNDN);
        mpfr_add(r20880466, r20880453, r20880465, MPFR_RNDN);
        mpfr_mul(r20880467, r20880445, r20880445, MPFR_RNDN);
        ;
        mpfr_mul(r20880469, r20880445, r20880468, MPFR_RNDN);
        mpfr_mul(r20880470, r20880467, r20880469, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20880473, r20880472, r20880444, MPFR_RNDN);
        mpfr_add(r20880474, r20880471, r20880473, MPFR_RNDN);
        mpfr_add(r20880475, r20880470, r20880474, MPFR_RNDN);
        ;
        mpfr_mul(r20880477, r20880476, r20880444, MPFR_RNDN);
        mpfr_mul(r20880478, r20880477, r20880445, MPFR_RNDN);
        mpfr_mul(r20880479, r20880478, r20880467, MPFR_RNDN);
        ;
        mpfr_mul(r20880481, r20880444, r20880480, MPFR_RNDN);
        mpfr_sub(r20880482, r20880444, r20880445, MPFR_RNDN);
        mpfr_mul(r20880483, r20880481, r20880482, MPFR_RNDN);
        mpfr_add(r20880484, r20880479, r20880483, MPFR_RNDN);
        mpfr_add(r20880485, r20880475, r20880484, MPFR_RNDN);
        mpfr_add(r20880486, r20880466, r20880485, MPFR_RNDN);
        return mpfr_get_d(r20880486, MPFR_RNDN);
}

static mpfr_t r20880487, r20880488, r20880489, r20880490, r20880491, r20880492, r20880493, r20880494, r20880495, r20880496, r20880497, r20880498, r20880499, r20880500, r20880501, r20880502, r20880503, r20880504, r20880505, r20880506, r20880507, r20880508, r20880509, r20880510, r20880511, r20880512, r20880513, r20880514, r20880515, r20880516, r20880517, r20880518, r20880519, r20880520, r20880521, r20880522, r20880523, r20880524, r20880525, r20880526, r20880527, r20880528, r20880529;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r20880487);
        mpfr_init(r20880488);
        mpfr_init(r20880489);
        mpfr_init(r20880490);
        mpfr_init(r20880491);
        mpfr_init_set_str(r20880492, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r20880493);
        mpfr_init_set_str(r20880494, "13.75", 10, MPFR_RNDN);
        mpfr_init(r20880495);
        mpfr_init(r20880496);
        mpfr_init_set_str(r20880497, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r20880498);
        mpfr_init_set_str(r20880499, "0.004092", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880500, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r20880501);
        mpfr_init(r20880502);
        mpfr_init(r20880503);
        mpfr_init_set_str(r20880504, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880505, "1", 10, MPFR_RNDN);
        mpfr_init(r20880506);
        mpfr_init(r20880507);
        mpfr_init(r20880508);
        mpfr_init(r20880509);
        mpfr_init(r20880510);
        mpfr_init_set_str(r20880511, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r20880512);
        mpfr_init(r20880513);
        mpfr_init_set_str(r20880514, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880515, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r20880516);
        mpfr_init(r20880517);
        mpfr_init(r20880518);
        mpfr_init_set_str(r20880519, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r20880520);
        mpfr_init(r20880521);
        mpfr_init(r20880522);
        mpfr_init_set_str(r20880523, "27.5", 10, MPFR_RNDN);
        mpfr_init(r20880524);
        mpfr_init(r20880525);
        mpfr_init(r20880526);
        mpfr_init(r20880527);
        mpfr_init(r20880528);
        mpfr_init(r20880529);
}

double f_dm(double x) {
        mpfr_set_d(r20880487, x, MPFR_RNDN);
        mpfr_mul(r20880488, r20880487, r20880487, MPFR_RNDN);
        mpfr_log(r20880489, r20880488, MPFR_RNDN);
        mpfr_add(r20880490, r20880489, r20880489, MPFR_RNDN);
        mpfr_exp(r20880491, r20880490, MPFR_RNDN);
        ;
        mpfr_mul(r20880493, r20880487, r20880492, MPFR_RNDN);
        ;
        mpfr_add(r20880495, r20880493, r20880494, MPFR_RNDN);
        mpfr_mul(r20880496, r20880491, r20880495, MPFR_RNDN);
        ;
        mpfr_mul(r20880498, r20880497, r20880488, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20880501, r20880487, r20880500, MPFR_RNDN);
        mpfr_add(r20880502, r20880499, r20880501, MPFR_RNDN);
        mpfr_add(r20880503, r20880498, r20880502, MPFR_RNDN);
        ;
        ;
        mpfr_add(r20880506, r20880504, r20880505, MPFR_RNDN);
        mpfr_pow(r20880507, r20880488, r20880506, MPFR_RNDN);
        mpfr_mul(r20880508, r20880503, r20880507, MPFR_RNDN);
        mpfr_add(r20880509, r20880496, r20880508, MPFR_RNDN);
        mpfr_mul(r20880510, r20880488, r20880488, MPFR_RNDN);
        ;
        mpfr_mul(r20880512, r20880488, r20880511, MPFR_RNDN);
        mpfr_mul(r20880513, r20880510, r20880512, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20880516, r20880515, r20880487, MPFR_RNDN);
        mpfr_add(r20880517, r20880514, r20880516, MPFR_RNDN);
        mpfr_add(r20880518, r20880513, r20880517, MPFR_RNDN);
        ;
        mpfr_mul(r20880520, r20880519, r20880487, MPFR_RNDN);
        mpfr_mul(r20880521, r20880520, r20880488, MPFR_RNDN);
        mpfr_mul(r20880522, r20880521, r20880510, MPFR_RNDN);
        ;
        mpfr_mul(r20880524, r20880487, r20880523, MPFR_RNDN);
        mpfr_sub(r20880525, r20880487, r20880488, MPFR_RNDN);
        mpfr_mul(r20880526, r20880524, r20880525, MPFR_RNDN);
        mpfr_add(r20880527, r20880522, r20880526, MPFR_RNDN);
        mpfr_add(r20880528, r20880518, r20880527, MPFR_RNDN);
        mpfr_add(r20880529, r20880509, r20880528, MPFR_RNDN);
        return mpfr_get_d(r20880529, MPFR_RNDN);
}

