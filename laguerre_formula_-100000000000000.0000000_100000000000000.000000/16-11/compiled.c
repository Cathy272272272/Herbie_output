#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r8833359 = 1.0;
        float r8833360 = -11.0;
        float r8833361 = x;
        float r8833362 = r8833360 * r8833361;
        float r8833363 = r8833359 + r8833362;
        float r8833364 = 27.5;
        float r8833365 = r8833361 * r8833361;
        float r8833366 = r8833364 * r8833365;
        float r8833367 = r8833363 + r8833366;
        float r8833368 = -27.5;
        float r8833369 = r8833365 * r8833361;
        float r8833370 = r8833368 * r8833369;
        float r8833371 = r8833367 + r8833370;
        float r8833372 = 13.75;
        float r8833373 = r8833369 * r8833361;
        float r8833374 = r8833372 * r8833373;
        float r8833375 = r8833371 + r8833374;
        float r8833376 = -3.85;
        float r8833377 = r8833373 * r8833361;
        float r8833378 = r8833376 * r8833377;
        float r8833379 = r8833375 + r8833378;
        float r8833380 = 0.641667;
        float r8833381 = r8833377 * r8833361;
        float r8833382 = r8833380 * r8833381;
        float r8833383 = r8833379 + r8833382;
        float r8833384 = -0.065476;
        float r8833385 = r8833381 * r8833361;
        float r8833386 = r8833384 * r8833385;
        float r8833387 = r8833383 + r8833386;
        float r8833388 = 0.004092;
        float r8833389 = r8833385 * r8833361;
        float r8833390 = r8833388 * r8833389;
        float r8833391 = r8833387 + r8833390;
        float r8833392 = -0.000152;
        float r8833393 = r8833389 * r8833361;
        float r8833394 = r8833392 * r8833393;
        float r8833395 = r8833391 + r8833394;
        float r8833396 = 3e-06;
        float r8833397 = r8833393 * r8833361;
        float r8833398 = r8833396 * r8833397;
        float r8833399 = r8833395 + r8833398;
        return r8833399;
}

double f_id(double x) {
        double r8833400 = 1.0;
        double r8833401 = -11.0;
        double r8833402 = x;
        double r8833403 = r8833401 * r8833402;
        double r8833404 = r8833400 + r8833403;
        double r8833405 = 27.5;
        double r8833406 = r8833402 * r8833402;
        double r8833407 = r8833405 * r8833406;
        double r8833408 = r8833404 + r8833407;
        double r8833409 = -27.5;
        double r8833410 = r8833406 * r8833402;
        double r8833411 = r8833409 * r8833410;
        double r8833412 = r8833408 + r8833411;
        double r8833413 = 13.75;
        double r8833414 = r8833410 * r8833402;
        double r8833415 = r8833413 * r8833414;
        double r8833416 = r8833412 + r8833415;
        double r8833417 = -3.85;
        double r8833418 = r8833414 * r8833402;
        double r8833419 = r8833417 * r8833418;
        double r8833420 = r8833416 + r8833419;
        double r8833421 = 0.641667;
        double r8833422 = r8833418 * r8833402;
        double r8833423 = r8833421 * r8833422;
        double r8833424 = r8833420 + r8833423;
        double r8833425 = -0.065476;
        double r8833426 = r8833422 * r8833402;
        double r8833427 = r8833425 * r8833426;
        double r8833428 = r8833424 + r8833427;
        double r8833429 = 0.004092;
        double r8833430 = r8833426 * r8833402;
        double r8833431 = r8833429 * r8833430;
        double r8833432 = r8833428 + r8833431;
        double r8833433 = -0.000152;
        double r8833434 = r8833430 * r8833402;
        double r8833435 = r8833433 * r8833434;
        double r8833436 = r8833432 + r8833435;
        double r8833437 = 3e-06;
        double r8833438 = r8833434 * r8833402;
        double r8833439 = r8833437 * r8833438;
        double r8833440 = r8833436 + r8833439;
        return r8833440;
}


double f_of(float x) {
        float r8833441 = x;
        float r8833442 = -11.0;
        float r8833443 = r8833441 * r8833442;
        float r8833444 = 1.0;
        float r8833445 = r8833443 + r8833444;
        float r8833446 = -0.065476;
        float r8833447 = r8833441 * r8833446;
        float r8833448 = 0.641667;
        float r8833449 = r8833447 + r8833448;
        float r8833450 = r8833441 * r8833441;
        float r8833451 = 3;
        float r8833452 = pow(r8833450, r8833451);
        float r8833453 = r8833449 * r8833452;
        float r8833454 = r8833445 + r8833453;
        float r8833455 = -3.85;
        float r8833456 = r8833455 * r8833441;
        float r8833457 = 13.75;
        float r8833458 = r8833456 + r8833457;
        float r8833459 = r8833450 * r8833450;
        float r8833460 = r8833458 * r8833459;
        float r8833461 = 27.5;
        float r8833462 = -27.5;
        float r8833463 = r8833441 * r8833462;
        float r8833464 = r8833461 + r8833463;
        float r8833465 = r8833464 * r8833450;
        float r8833466 = r8833460 + r8833465;
        float r8833467 = r8833454 + r8833466;
        float r8833468 = pow(r8833441, r8833451);
        float r8833469 = 1;
        float r8833470 = r8833451 + r8833469;
        float r8833471 = pow(r8833468, r8833470);
        float r8833472 = cbrt(r8833471);
        float r8833473 = 0.004092;
        float r8833474 = -0.000152;
        float r8833475 = r8833441 * r8833474;
        float r8833476 = r8833473 + r8833475;
        float r8833477 = 4;
        float r8833478 = pow(r8833441, r8833477);
        float r8833479 = r8833476 * r8833478;
        float r8833480 = 3e-06;
        float r8833481 = r8833480 * r8833450;
        float r8833482 = 2;
        float r8833483 = r8833482 + r8833482;
        float r8833484 = pow(r8833441, r8833483);
        float r8833485 = r8833481 * r8833484;
        float r8833486 = r8833479 + r8833485;
        float r8833487 = r8833472 * r8833486;
        float r8833488 = r8833467 + r8833487;
        return r8833488;
}

double f_od(double x) {
        double r8833489 = x;
        double r8833490 = -11.0;
        double r8833491 = r8833489 * r8833490;
        double r8833492 = 1.0;
        double r8833493 = r8833491 + r8833492;
        double r8833494 = -0.065476;
        double r8833495 = r8833489 * r8833494;
        double r8833496 = 0.641667;
        double r8833497 = r8833495 + r8833496;
        double r8833498 = r8833489 * r8833489;
        double r8833499 = 3;
        double r8833500 = pow(r8833498, r8833499);
        double r8833501 = r8833497 * r8833500;
        double r8833502 = r8833493 + r8833501;
        double r8833503 = -3.85;
        double r8833504 = r8833503 * r8833489;
        double r8833505 = 13.75;
        double r8833506 = r8833504 + r8833505;
        double r8833507 = r8833498 * r8833498;
        double r8833508 = r8833506 * r8833507;
        double r8833509 = 27.5;
        double r8833510 = -27.5;
        double r8833511 = r8833489 * r8833510;
        double r8833512 = r8833509 + r8833511;
        double r8833513 = r8833512 * r8833498;
        double r8833514 = r8833508 + r8833513;
        double r8833515 = r8833502 + r8833514;
        double r8833516 = pow(r8833489, r8833499);
        double r8833517 = 1;
        double r8833518 = r8833499 + r8833517;
        double r8833519 = pow(r8833516, r8833518);
        double r8833520 = cbrt(r8833519);
        double r8833521 = 0.004092;
        double r8833522 = -0.000152;
        double r8833523 = r8833489 * r8833522;
        double r8833524 = r8833521 + r8833523;
        double r8833525 = 4;
        double r8833526 = pow(r8833489, r8833525);
        double r8833527 = r8833524 * r8833526;
        double r8833528 = 3e-06;
        double r8833529 = r8833528 * r8833498;
        double r8833530 = 2;
        double r8833531 = r8833530 + r8833530;
        double r8833532 = pow(r8833489, r8833531);
        double r8833533 = r8833529 * r8833532;
        double r8833534 = r8833527 + r8833533;
        double r8833535 = r8833520 * r8833534;
        double r8833536 = r8833515 + r8833535;
        return r8833536;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8833537, r8833538, r8833539, r8833540, r8833541, r8833542, r8833543, r8833544, r8833545, r8833546, r8833547, r8833548, r8833549, r8833550, r8833551, r8833552, r8833553, r8833554, r8833555, r8833556, r8833557, r8833558, r8833559, r8833560, r8833561, r8833562, r8833563, r8833564, r8833565, r8833566, r8833567, r8833568, r8833569, r8833570, r8833571, r8833572, r8833573, r8833574, r8833575, r8833576, r8833577;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8833537, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833538, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r8833539);
        mpfr_init(r8833540);
        mpfr_init(r8833541);
        mpfr_init_set_str(r8833542, "27.5", 10, MPFR_RNDN);
        mpfr_init(r8833543);
        mpfr_init(r8833544);
        mpfr_init(r8833545);
        mpfr_init_set_str(r8833546, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r8833547);
        mpfr_init(r8833548);
        mpfr_init(r8833549);
        mpfr_init_set_str(r8833550, "13.75", 10, MPFR_RNDN);
        mpfr_init(r8833551);
        mpfr_init(r8833552);
        mpfr_init(r8833553);
        mpfr_init_set_str(r8833554, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r8833555);
        mpfr_init(r8833556);
        mpfr_init(r8833557);
        mpfr_init_set_str(r8833558, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r8833559);
        mpfr_init(r8833560);
        mpfr_init(r8833561);
        mpfr_init_set_str(r8833562, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r8833563);
        mpfr_init(r8833564);
        mpfr_init(r8833565);
        mpfr_init_set_str(r8833566, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r8833567);
        mpfr_init(r8833568);
        mpfr_init(r8833569);
        mpfr_init_set_str(r8833570, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r8833571);
        mpfr_init(r8833572);
        mpfr_init(r8833573);
        mpfr_init_set_str(r8833574, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r8833575);
        mpfr_init(r8833576);
        mpfr_init(r8833577);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8833539, x, MPFR_RNDN);
        mpfr_mul(r8833540, r8833538, r8833539, MPFR_RNDN);
        mpfr_add(r8833541, r8833537, r8833540, MPFR_RNDN);
        ;
        mpfr_mul(r8833543, r8833539, r8833539, MPFR_RNDN);
        mpfr_mul(r8833544, r8833542, r8833543, MPFR_RNDN);
        mpfr_add(r8833545, r8833541, r8833544, MPFR_RNDN);
        ;
        mpfr_mul(r8833547, r8833543, r8833539, MPFR_RNDN);
        mpfr_mul(r8833548, r8833546, r8833547, MPFR_RNDN);
        mpfr_add(r8833549, r8833545, r8833548, MPFR_RNDN);
        ;
        mpfr_mul(r8833551, r8833547, r8833539, MPFR_RNDN);
        mpfr_mul(r8833552, r8833550, r8833551, MPFR_RNDN);
        mpfr_add(r8833553, r8833549, r8833552, MPFR_RNDN);
        ;
        mpfr_mul(r8833555, r8833551, r8833539, MPFR_RNDN);
        mpfr_mul(r8833556, r8833554, r8833555, MPFR_RNDN);
        mpfr_add(r8833557, r8833553, r8833556, MPFR_RNDN);
        ;
        mpfr_mul(r8833559, r8833555, r8833539, MPFR_RNDN);
        mpfr_mul(r8833560, r8833558, r8833559, MPFR_RNDN);
        mpfr_add(r8833561, r8833557, r8833560, MPFR_RNDN);
        ;
        mpfr_mul(r8833563, r8833559, r8833539, MPFR_RNDN);
        mpfr_mul(r8833564, r8833562, r8833563, MPFR_RNDN);
        mpfr_add(r8833565, r8833561, r8833564, MPFR_RNDN);
        ;
        mpfr_mul(r8833567, r8833563, r8833539, MPFR_RNDN);
        mpfr_mul(r8833568, r8833566, r8833567, MPFR_RNDN);
        mpfr_add(r8833569, r8833565, r8833568, MPFR_RNDN);
        ;
        mpfr_mul(r8833571, r8833567, r8833539, MPFR_RNDN);
        mpfr_mul(r8833572, r8833570, r8833571, MPFR_RNDN);
        mpfr_add(r8833573, r8833569, r8833572, MPFR_RNDN);
        ;
        mpfr_mul(r8833575, r8833571, r8833539, MPFR_RNDN);
        mpfr_mul(r8833576, r8833574, r8833575, MPFR_RNDN);
        mpfr_add(r8833577, r8833573, r8833576, MPFR_RNDN);
        return mpfr_get_d(r8833577, MPFR_RNDN);
}

static mpfr_t r8833578, r8833579, r8833580, r8833581, r8833582, r8833583, r8833584, r8833585, r8833586, r8833587, r8833588, r8833589, r8833590, r8833591, r8833592, r8833593, r8833594, r8833595, r8833596, r8833597, r8833598, r8833599, r8833600, r8833601, r8833602, r8833603, r8833604, r8833605, r8833606, r8833607, r8833608, r8833609, r8833610, r8833611, r8833612, r8833613, r8833614, r8833615, r8833616, r8833617, r8833618, r8833619, r8833620, r8833621, r8833622, r8833623, r8833624, r8833625;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8833578);
        mpfr_init_set_str(r8833579, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r8833580);
        mpfr_init_set_str(r8833581, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8833582);
        mpfr_init_set_str(r8833583, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r8833584);
        mpfr_init_set_str(r8833585, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r8833586);
        mpfr_init(r8833587);
        mpfr_init_set_str(r8833588, "3", 10, MPFR_RNDN);
        mpfr_init(r8833589);
        mpfr_init(r8833590);
        mpfr_init(r8833591);
        mpfr_init_set_str(r8833592, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r8833593);
        mpfr_init_set_str(r8833594, "13.75", 10, MPFR_RNDN);
        mpfr_init(r8833595);
        mpfr_init(r8833596);
        mpfr_init(r8833597);
        mpfr_init_set_str(r8833598, "27.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833599, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r8833600);
        mpfr_init(r8833601);
        mpfr_init(r8833602);
        mpfr_init(r8833603);
        mpfr_init(r8833604);
        mpfr_init(r8833605);
        mpfr_init_set_str(r8833606, "1", 10, MPFR_RNDN);
        mpfr_init(r8833607);
        mpfr_init(r8833608);
        mpfr_init(r8833609);
        mpfr_init_set_str(r8833610, "0.004092", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833611, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r8833612);
        mpfr_init(r8833613);
        mpfr_init_set_str(r8833614, "4", 10, MPFR_RNDN);
        mpfr_init(r8833615);
        mpfr_init(r8833616);
        mpfr_init_set_str(r8833617, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r8833618);
        mpfr_init_set_str(r8833619, "2", 10, MPFR_RNDN);
        mpfr_init(r8833620);
        mpfr_init(r8833621);
        mpfr_init(r8833622);
        mpfr_init(r8833623);
        mpfr_init(r8833624);
        mpfr_init(r8833625);
}

double f_fm(double x) {
        mpfr_set_d(r8833578, x, MPFR_RNDN);
        ;
        mpfr_mul(r8833580, r8833578, r8833579, MPFR_RNDN);
        ;
        mpfr_add(r8833582, r8833580, r8833581, MPFR_RNDN);
        ;
        mpfr_mul(r8833584, r8833578, r8833583, MPFR_RNDN);
        ;
        mpfr_add(r8833586, r8833584, r8833585, MPFR_RNDN);
        mpfr_mul(r8833587, r8833578, r8833578, MPFR_RNDN);
        ;
        mpfr_pow(r8833589, r8833587, r8833588, MPFR_RNDN);
        mpfr_mul(r8833590, r8833586, r8833589, MPFR_RNDN);
        mpfr_add(r8833591, r8833582, r8833590, MPFR_RNDN);
        ;
        mpfr_mul(r8833593, r8833592, r8833578, MPFR_RNDN);
        ;
        mpfr_add(r8833595, r8833593, r8833594, MPFR_RNDN);
        mpfr_mul(r8833596, r8833587, r8833587, MPFR_RNDN);
        mpfr_mul(r8833597, r8833595, r8833596, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8833600, r8833578, r8833599, MPFR_RNDN);
        mpfr_add(r8833601, r8833598, r8833600, MPFR_RNDN);
        mpfr_mul(r8833602, r8833601, r8833587, MPFR_RNDN);
        mpfr_add(r8833603, r8833597, r8833602, MPFR_RNDN);
        mpfr_add(r8833604, r8833591, r8833603, MPFR_RNDN);
        mpfr_pow(r8833605, r8833578, r8833588, MPFR_RNDN);
        ;
        mpfr_add(r8833607, r8833588, r8833606, MPFR_RNDN);
        mpfr_pow(r8833608, r8833605, r8833607, MPFR_RNDN);
        mpfr_cbrt(r8833609, r8833608, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8833612, r8833578, r8833611, MPFR_RNDN);
        mpfr_add(r8833613, r8833610, r8833612, MPFR_RNDN);
        ;
        mpfr_pow(r8833615, r8833578, r8833614, MPFR_RNDN);
        mpfr_mul(r8833616, r8833613, r8833615, MPFR_RNDN);
        ;
        mpfr_mul(r8833618, r8833617, r8833587, MPFR_RNDN);
        ;
        mpfr_add(r8833620, r8833619, r8833619, MPFR_RNDN);
        mpfr_pow(r8833621, r8833578, r8833620, MPFR_RNDN);
        mpfr_mul(r8833622, r8833618, r8833621, MPFR_RNDN);
        mpfr_add(r8833623, r8833616, r8833622, MPFR_RNDN);
        mpfr_mul(r8833624, r8833609, r8833623, MPFR_RNDN);
        mpfr_add(r8833625, r8833604, r8833624, MPFR_RNDN);
        return mpfr_get_d(r8833625, MPFR_RNDN);
}

static mpfr_t r8833626, r8833627, r8833628, r8833629, r8833630, r8833631, r8833632, r8833633, r8833634, r8833635, r8833636, r8833637, r8833638, r8833639, r8833640, r8833641, r8833642, r8833643, r8833644, r8833645, r8833646, r8833647, r8833648, r8833649, r8833650, r8833651, r8833652, r8833653, r8833654, r8833655, r8833656, r8833657, r8833658, r8833659, r8833660, r8833661, r8833662, r8833663, r8833664, r8833665, r8833666, r8833667, r8833668, r8833669, r8833670, r8833671, r8833672, r8833673;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8833626);
        mpfr_init_set_str(r8833627, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r8833628);
        mpfr_init_set_str(r8833629, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8833630);
        mpfr_init_set_str(r8833631, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r8833632);
        mpfr_init_set_str(r8833633, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r8833634);
        mpfr_init(r8833635);
        mpfr_init_set_str(r8833636, "3", 10, MPFR_RNDN);
        mpfr_init(r8833637);
        mpfr_init(r8833638);
        mpfr_init(r8833639);
        mpfr_init_set_str(r8833640, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r8833641);
        mpfr_init_set_str(r8833642, "13.75", 10, MPFR_RNDN);
        mpfr_init(r8833643);
        mpfr_init(r8833644);
        mpfr_init(r8833645);
        mpfr_init_set_str(r8833646, "27.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833647, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r8833648);
        mpfr_init(r8833649);
        mpfr_init(r8833650);
        mpfr_init(r8833651);
        mpfr_init(r8833652);
        mpfr_init(r8833653);
        mpfr_init_set_str(r8833654, "1", 10, MPFR_RNDN);
        mpfr_init(r8833655);
        mpfr_init(r8833656);
        mpfr_init(r8833657);
        mpfr_init_set_str(r8833658, "0.004092", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833659, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r8833660);
        mpfr_init(r8833661);
        mpfr_init_set_str(r8833662, "4", 10, MPFR_RNDN);
        mpfr_init(r8833663);
        mpfr_init(r8833664);
        mpfr_init_set_str(r8833665, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r8833666);
        mpfr_init_set_str(r8833667, "2", 10, MPFR_RNDN);
        mpfr_init(r8833668);
        mpfr_init(r8833669);
        mpfr_init(r8833670);
        mpfr_init(r8833671);
        mpfr_init(r8833672);
        mpfr_init(r8833673);
}

double f_dm(double x) {
        mpfr_set_d(r8833626, x, MPFR_RNDN);
        ;
        mpfr_mul(r8833628, r8833626, r8833627, MPFR_RNDN);
        ;
        mpfr_add(r8833630, r8833628, r8833629, MPFR_RNDN);
        ;
        mpfr_mul(r8833632, r8833626, r8833631, MPFR_RNDN);
        ;
        mpfr_add(r8833634, r8833632, r8833633, MPFR_RNDN);
        mpfr_mul(r8833635, r8833626, r8833626, MPFR_RNDN);
        ;
        mpfr_pow(r8833637, r8833635, r8833636, MPFR_RNDN);
        mpfr_mul(r8833638, r8833634, r8833637, MPFR_RNDN);
        mpfr_add(r8833639, r8833630, r8833638, MPFR_RNDN);
        ;
        mpfr_mul(r8833641, r8833640, r8833626, MPFR_RNDN);
        ;
        mpfr_add(r8833643, r8833641, r8833642, MPFR_RNDN);
        mpfr_mul(r8833644, r8833635, r8833635, MPFR_RNDN);
        mpfr_mul(r8833645, r8833643, r8833644, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8833648, r8833626, r8833647, MPFR_RNDN);
        mpfr_add(r8833649, r8833646, r8833648, MPFR_RNDN);
        mpfr_mul(r8833650, r8833649, r8833635, MPFR_RNDN);
        mpfr_add(r8833651, r8833645, r8833650, MPFR_RNDN);
        mpfr_add(r8833652, r8833639, r8833651, MPFR_RNDN);
        mpfr_pow(r8833653, r8833626, r8833636, MPFR_RNDN);
        ;
        mpfr_add(r8833655, r8833636, r8833654, MPFR_RNDN);
        mpfr_pow(r8833656, r8833653, r8833655, MPFR_RNDN);
        mpfr_cbrt(r8833657, r8833656, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8833660, r8833626, r8833659, MPFR_RNDN);
        mpfr_add(r8833661, r8833658, r8833660, MPFR_RNDN);
        ;
        mpfr_pow(r8833663, r8833626, r8833662, MPFR_RNDN);
        mpfr_mul(r8833664, r8833661, r8833663, MPFR_RNDN);
        ;
        mpfr_mul(r8833666, r8833665, r8833635, MPFR_RNDN);
        ;
        mpfr_add(r8833668, r8833667, r8833667, MPFR_RNDN);
        mpfr_pow(r8833669, r8833626, r8833668, MPFR_RNDN);
        mpfr_mul(r8833670, r8833666, r8833669, MPFR_RNDN);
        mpfr_add(r8833671, r8833664, r8833670, MPFR_RNDN);
        mpfr_mul(r8833672, r8833657, r8833671, MPFR_RNDN);
        mpfr_add(r8833673, r8833652, r8833672, MPFR_RNDN);
        return mpfr_get_d(r8833673, MPFR_RNDN);
}

