#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r9584365 = 1.0;
        float r9584366 = -14.0;
        float r9584367 = x;
        float r9584368 = r9584366 * r9584367;
        float r9584369 = r9584365 + r9584368;
        float r9584370 = 45.5;
        float r9584371 = r9584367 * r9584367;
        float r9584372 = r9584370 * r9584371;
        float r9584373 = r9584369 + r9584372;
        float r9584374 = -60.666667;
        float r9584375 = r9584371 * r9584367;
        float r9584376 = r9584374 * r9584375;
        float r9584377 = r9584373 + r9584376;
        float r9584378 = 41.708333;
        float r9584379 = r9584375 * r9584367;
        float r9584380 = r9584378 * r9584379;
        float r9584381 = r9584377 + r9584380;
        float r9584382 = -16.683333;
        float r9584383 = r9584379 * r9584367;
        float r9584384 = r9584382 * r9584383;
        float r9584385 = r9584381 + r9584384;
        float r9584386 = 4.170833;
        float r9584387 = r9584383 * r9584367;
        float r9584388 = r9584386 * r9584387;
        float r9584389 = r9584385 + r9584388;
        float r9584390 = -0.680952;
        float r9584391 = r9584387 * r9584367;
        float r9584392 = r9584390 * r9584391;
        float r9584393 = r9584389 + r9584392;
        float r9584394 = 0.074479;
        float r9584395 = r9584391 * r9584367;
        float r9584396 = r9584394 * r9584395;
        float r9584397 = r9584393 + r9584396;
        float r9584398 = -0.005517;
        float r9584399 = r9584395 * r9584367;
        float r9584400 = r9584398 * r9584399;
        float r9584401 = r9584397 + r9584400;
        float r9584402 = 0.000276;
        float r9584403 = r9584399 * r9584367;
        float r9584404 = r9584402 * r9584403;
        float r9584405 = r9584401 + r9584404;
        float r9584406 = -9e-06;
        float r9584407 = r9584403 * r9584367;
        float r9584408 = r9584406 * r9584407;
        float r9584409 = r9584405 + r9584408;
        return r9584409;
}

double f_id(double x) {
        double r9584410 = 1.0;
        double r9584411 = -14.0;
        double r9584412 = x;
        double r9584413 = r9584411 * r9584412;
        double r9584414 = r9584410 + r9584413;
        double r9584415 = 45.5;
        double r9584416 = r9584412 * r9584412;
        double r9584417 = r9584415 * r9584416;
        double r9584418 = r9584414 + r9584417;
        double r9584419 = -60.666667;
        double r9584420 = r9584416 * r9584412;
        double r9584421 = r9584419 * r9584420;
        double r9584422 = r9584418 + r9584421;
        double r9584423 = 41.708333;
        double r9584424 = r9584420 * r9584412;
        double r9584425 = r9584423 * r9584424;
        double r9584426 = r9584422 + r9584425;
        double r9584427 = -16.683333;
        double r9584428 = r9584424 * r9584412;
        double r9584429 = r9584427 * r9584428;
        double r9584430 = r9584426 + r9584429;
        double r9584431 = 4.170833;
        double r9584432 = r9584428 * r9584412;
        double r9584433 = r9584431 * r9584432;
        double r9584434 = r9584430 + r9584433;
        double r9584435 = -0.680952;
        double r9584436 = r9584432 * r9584412;
        double r9584437 = r9584435 * r9584436;
        double r9584438 = r9584434 + r9584437;
        double r9584439 = 0.074479;
        double r9584440 = r9584436 * r9584412;
        double r9584441 = r9584439 * r9584440;
        double r9584442 = r9584438 + r9584441;
        double r9584443 = -0.005517;
        double r9584444 = r9584440 * r9584412;
        double r9584445 = r9584443 * r9584444;
        double r9584446 = r9584442 + r9584445;
        double r9584447 = 0.000276;
        double r9584448 = r9584444 * r9584412;
        double r9584449 = r9584447 * r9584448;
        double r9584450 = r9584446 + r9584449;
        double r9584451 = -9e-06;
        double r9584452 = r9584448 * r9584412;
        double r9584453 = r9584451 * r9584452;
        double r9584454 = r9584450 + r9584453;
        return r9584454;
}


double f_of(float x) {
        float r9584455 = 1.0;
        float r9584456 = -14.0;
        float r9584457 = x;
        float r9584458 = r9584456 * r9584457;
        float r9584459 = r9584455 + r9584458;
        float r9584460 = 45.5;
        float r9584461 = r9584457 * r9584457;
        float r9584462 = r9584460 * r9584461;
        float r9584463 = r9584459 + r9584462;
        float r9584464 = -60.666667;
        float r9584465 = r9584461 * r9584457;
        float r9584466 = r9584464 * r9584465;
        float r9584467 = r9584463 + r9584466;
        float r9584468 = 41.708333;
        float r9584469 = r9584465 * r9584457;
        float r9584470 = r9584468 * r9584469;
        float r9584471 = r9584467 + r9584470;
        float r9584472 = -16.683333;
        float r9584473 = r9584469 * r9584457;
        float r9584474 = r9584472 * r9584473;
        float r9584475 = r9584471 + r9584474;
        float r9584476 = 4.170833;
        float r9584477 = r9584473 * r9584457;
        float r9584478 = r9584476 * r9584477;
        float r9584479 = r9584475 + r9584478;
        float r9584480 = -0.680952;
        float r9584481 = r9584477 * r9584457;
        float r9584482 = r9584480 * r9584481;
        float r9584483 = r9584479 + r9584482;
        float r9584484 = 0.074479;
        float r9584485 = r9584481 * r9584457;
        float r9584486 = r9584484 * r9584485;
        float r9584487 = r9584483 + r9584486;
        float r9584488 = -0.005517;
        float r9584489 = r9584485 * r9584457;
        float r9584490 = r9584488 * r9584489;
        float r9584491 = r9584487 + r9584490;
        float r9584492 = 0.000276;
        float r9584493 = r9584489 * r9584457;
        float r9584494 = r9584492 * r9584493;
        float r9584495 = r9584491 + r9584494;
        float r9584496 = -9e-06;
        float r9584497 = r9584493 * r9584457;
        float r9584498 = r9584496 * r9584497;
        float r9584499 = r9584495 + r9584498;
        return r9584499;
}

double f_od(double x) {
        double r9584500 = 1.0;
        double r9584501 = -14.0;
        double r9584502 = x;
        double r9584503 = r9584501 * r9584502;
        double r9584504 = r9584500 + r9584503;
        double r9584505 = 45.5;
        double r9584506 = r9584502 * r9584502;
        double r9584507 = r9584505 * r9584506;
        double r9584508 = r9584504 + r9584507;
        double r9584509 = -60.666667;
        double r9584510 = r9584506 * r9584502;
        double r9584511 = r9584509 * r9584510;
        double r9584512 = r9584508 + r9584511;
        double r9584513 = 41.708333;
        double r9584514 = r9584510 * r9584502;
        double r9584515 = r9584513 * r9584514;
        double r9584516 = r9584512 + r9584515;
        double r9584517 = -16.683333;
        double r9584518 = r9584514 * r9584502;
        double r9584519 = r9584517 * r9584518;
        double r9584520 = r9584516 + r9584519;
        double r9584521 = 4.170833;
        double r9584522 = r9584518 * r9584502;
        double r9584523 = r9584521 * r9584522;
        double r9584524 = r9584520 + r9584523;
        double r9584525 = -0.680952;
        double r9584526 = r9584522 * r9584502;
        double r9584527 = r9584525 * r9584526;
        double r9584528 = r9584524 + r9584527;
        double r9584529 = 0.074479;
        double r9584530 = r9584526 * r9584502;
        double r9584531 = r9584529 * r9584530;
        double r9584532 = r9584528 + r9584531;
        double r9584533 = -0.005517;
        double r9584534 = r9584530 * r9584502;
        double r9584535 = r9584533 * r9584534;
        double r9584536 = r9584532 + r9584535;
        double r9584537 = 0.000276;
        double r9584538 = r9584534 * r9584502;
        double r9584539 = r9584537 * r9584538;
        double r9584540 = r9584536 + r9584539;
        double r9584541 = -9e-06;
        double r9584542 = r9584538 * r9584502;
        double r9584543 = r9584541 * r9584542;
        double r9584544 = r9584540 + r9584543;
        return r9584544;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9584545, r9584546, r9584547, r9584548, r9584549, r9584550, r9584551, r9584552, r9584553, r9584554, r9584555, r9584556, r9584557, r9584558, r9584559, r9584560, r9584561, r9584562, r9584563, r9584564, r9584565, r9584566, r9584567, r9584568, r9584569, r9584570, r9584571, r9584572, r9584573, r9584574, r9584575, r9584576, r9584577, r9584578, r9584579, r9584580, r9584581, r9584582, r9584583, r9584584, r9584585, r9584586, r9584587, r9584588, r9584589;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9584545, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9584546, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9584547);
        mpfr_init(r9584548);
        mpfr_init(r9584549);
        mpfr_init_set_str(r9584550, "45.5", 10, MPFR_RNDN);
        mpfr_init(r9584551);
        mpfr_init(r9584552);
        mpfr_init(r9584553);
        mpfr_init_set_str(r9584554, "-60.666667", 10, MPFR_RNDN);
        mpfr_init(r9584555);
        mpfr_init(r9584556);
        mpfr_init(r9584557);
        mpfr_init_set_str(r9584558, "41.708333", 10, MPFR_RNDN);
        mpfr_init(r9584559);
        mpfr_init(r9584560);
        mpfr_init(r9584561);
        mpfr_init_set_str(r9584562, "-16.683333", 10, MPFR_RNDN);
        mpfr_init(r9584563);
        mpfr_init(r9584564);
        mpfr_init(r9584565);
        mpfr_init_set_str(r9584566, "4.170833", 10, MPFR_RNDN);
        mpfr_init(r9584567);
        mpfr_init(r9584568);
        mpfr_init(r9584569);
        mpfr_init_set_str(r9584570, "-0.680952", 10, MPFR_RNDN);
        mpfr_init(r9584571);
        mpfr_init(r9584572);
        mpfr_init(r9584573);
        mpfr_init_set_str(r9584574, "0.074479", 10, MPFR_RNDN);
        mpfr_init(r9584575);
        mpfr_init(r9584576);
        mpfr_init(r9584577);
        mpfr_init_set_str(r9584578, "-0.005517", 10, MPFR_RNDN);
        mpfr_init(r9584579);
        mpfr_init(r9584580);
        mpfr_init(r9584581);
        mpfr_init_set_str(r9584582, "0.000276", 10, MPFR_RNDN);
        mpfr_init(r9584583);
        mpfr_init(r9584584);
        mpfr_init(r9584585);
        mpfr_init_set_str(r9584586, "-9e-06", 10, MPFR_RNDN);
        mpfr_init(r9584587);
        mpfr_init(r9584588);
        mpfr_init(r9584589);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9584547, x, MPFR_RNDN);
        mpfr_mul(r9584548, r9584546, r9584547, MPFR_RNDN);
        mpfr_add(r9584549, r9584545, r9584548, MPFR_RNDN);
        ;
        mpfr_mul(r9584551, r9584547, r9584547, MPFR_RNDN);
        mpfr_mul(r9584552, r9584550, r9584551, MPFR_RNDN);
        mpfr_add(r9584553, r9584549, r9584552, MPFR_RNDN);
        ;
        mpfr_mul(r9584555, r9584551, r9584547, MPFR_RNDN);
        mpfr_mul(r9584556, r9584554, r9584555, MPFR_RNDN);
        mpfr_add(r9584557, r9584553, r9584556, MPFR_RNDN);
        ;
        mpfr_mul(r9584559, r9584555, r9584547, MPFR_RNDN);
        mpfr_mul(r9584560, r9584558, r9584559, MPFR_RNDN);
        mpfr_add(r9584561, r9584557, r9584560, MPFR_RNDN);
        ;
        mpfr_mul(r9584563, r9584559, r9584547, MPFR_RNDN);
        mpfr_mul(r9584564, r9584562, r9584563, MPFR_RNDN);
        mpfr_add(r9584565, r9584561, r9584564, MPFR_RNDN);
        ;
        mpfr_mul(r9584567, r9584563, r9584547, MPFR_RNDN);
        mpfr_mul(r9584568, r9584566, r9584567, MPFR_RNDN);
        mpfr_add(r9584569, r9584565, r9584568, MPFR_RNDN);
        ;
        mpfr_mul(r9584571, r9584567, r9584547, MPFR_RNDN);
        mpfr_mul(r9584572, r9584570, r9584571, MPFR_RNDN);
        mpfr_add(r9584573, r9584569, r9584572, MPFR_RNDN);
        ;
        mpfr_mul(r9584575, r9584571, r9584547, MPFR_RNDN);
        mpfr_mul(r9584576, r9584574, r9584575, MPFR_RNDN);
        mpfr_add(r9584577, r9584573, r9584576, MPFR_RNDN);
        ;
        mpfr_mul(r9584579, r9584575, r9584547, MPFR_RNDN);
        mpfr_mul(r9584580, r9584578, r9584579, MPFR_RNDN);
        mpfr_add(r9584581, r9584577, r9584580, MPFR_RNDN);
        ;
        mpfr_mul(r9584583, r9584579, r9584547, MPFR_RNDN);
        mpfr_mul(r9584584, r9584582, r9584583, MPFR_RNDN);
        mpfr_add(r9584585, r9584581, r9584584, MPFR_RNDN);
        ;
        mpfr_mul(r9584587, r9584583, r9584547, MPFR_RNDN);
        mpfr_mul(r9584588, r9584586, r9584587, MPFR_RNDN);
        mpfr_add(r9584589, r9584585, r9584588, MPFR_RNDN);
        return mpfr_get_d(r9584589, MPFR_RNDN);
}

static mpfr_t r9584590, r9584591, r9584592, r9584593, r9584594, r9584595, r9584596, r9584597, r9584598, r9584599, r9584600, r9584601, r9584602, r9584603, r9584604, r9584605, r9584606, r9584607, r9584608, r9584609, r9584610, r9584611, r9584612, r9584613, r9584614, r9584615, r9584616, r9584617, r9584618, r9584619, r9584620, r9584621, r9584622, r9584623, r9584624, r9584625, r9584626, r9584627, r9584628, r9584629, r9584630, r9584631, r9584632, r9584633, r9584634;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9584590, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9584591, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9584592);
        mpfr_init(r9584593);
        mpfr_init(r9584594);
        mpfr_init_set_str(r9584595, "45.5", 10, MPFR_RNDN);
        mpfr_init(r9584596);
        mpfr_init(r9584597);
        mpfr_init(r9584598);
        mpfr_init_set_str(r9584599, "-60.666667", 10, MPFR_RNDN);
        mpfr_init(r9584600);
        mpfr_init(r9584601);
        mpfr_init(r9584602);
        mpfr_init_set_str(r9584603, "41.708333", 10, MPFR_RNDN);
        mpfr_init(r9584604);
        mpfr_init(r9584605);
        mpfr_init(r9584606);
        mpfr_init_set_str(r9584607, "-16.683333", 10, MPFR_RNDN);
        mpfr_init(r9584608);
        mpfr_init(r9584609);
        mpfr_init(r9584610);
        mpfr_init_set_str(r9584611, "4.170833", 10, MPFR_RNDN);
        mpfr_init(r9584612);
        mpfr_init(r9584613);
        mpfr_init(r9584614);
        mpfr_init_set_str(r9584615, "-0.680952", 10, MPFR_RNDN);
        mpfr_init(r9584616);
        mpfr_init(r9584617);
        mpfr_init(r9584618);
        mpfr_init_set_str(r9584619, "0.074479", 10, MPFR_RNDN);
        mpfr_init(r9584620);
        mpfr_init(r9584621);
        mpfr_init(r9584622);
        mpfr_init_set_str(r9584623, "-0.005517", 10, MPFR_RNDN);
        mpfr_init(r9584624);
        mpfr_init(r9584625);
        mpfr_init(r9584626);
        mpfr_init_set_str(r9584627, "0.000276", 10, MPFR_RNDN);
        mpfr_init(r9584628);
        mpfr_init(r9584629);
        mpfr_init(r9584630);
        mpfr_init_set_str(r9584631, "-9e-06", 10, MPFR_RNDN);
        mpfr_init(r9584632);
        mpfr_init(r9584633);
        mpfr_init(r9584634);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9584592, x, MPFR_RNDN);
        mpfr_mul(r9584593, r9584591, r9584592, MPFR_RNDN);
        mpfr_add(r9584594, r9584590, r9584593, MPFR_RNDN);
        ;
        mpfr_mul(r9584596, r9584592, r9584592, MPFR_RNDN);
        mpfr_mul(r9584597, r9584595, r9584596, MPFR_RNDN);
        mpfr_add(r9584598, r9584594, r9584597, MPFR_RNDN);
        ;
        mpfr_mul(r9584600, r9584596, r9584592, MPFR_RNDN);
        mpfr_mul(r9584601, r9584599, r9584600, MPFR_RNDN);
        mpfr_add(r9584602, r9584598, r9584601, MPFR_RNDN);
        ;
        mpfr_mul(r9584604, r9584600, r9584592, MPFR_RNDN);
        mpfr_mul(r9584605, r9584603, r9584604, MPFR_RNDN);
        mpfr_add(r9584606, r9584602, r9584605, MPFR_RNDN);
        ;
        mpfr_mul(r9584608, r9584604, r9584592, MPFR_RNDN);
        mpfr_mul(r9584609, r9584607, r9584608, MPFR_RNDN);
        mpfr_add(r9584610, r9584606, r9584609, MPFR_RNDN);
        ;
        mpfr_mul(r9584612, r9584608, r9584592, MPFR_RNDN);
        mpfr_mul(r9584613, r9584611, r9584612, MPFR_RNDN);
        mpfr_add(r9584614, r9584610, r9584613, MPFR_RNDN);
        ;
        mpfr_mul(r9584616, r9584612, r9584592, MPFR_RNDN);
        mpfr_mul(r9584617, r9584615, r9584616, MPFR_RNDN);
        mpfr_add(r9584618, r9584614, r9584617, MPFR_RNDN);
        ;
        mpfr_mul(r9584620, r9584616, r9584592, MPFR_RNDN);
        mpfr_mul(r9584621, r9584619, r9584620, MPFR_RNDN);
        mpfr_add(r9584622, r9584618, r9584621, MPFR_RNDN);
        ;
        mpfr_mul(r9584624, r9584620, r9584592, MPFR_RNDN);
        mpfr_mul(r9584625, r9584623, r9584624, MPFR_RNDN);
        mpfr_add(r9584626, r9584622, r9584625, MPFR_RNDN);
        ;
        mpfr_mul(r9584628, r9584624, r9584592, MPFR_RNDN);
        mpfr_mul(r9584629, r9584627, r9584628, MPFR_RNDN);
        mpfr_add(r9584630, r9584626, r9584629, MPFR_RNDN);
        ;
        mpfr_mul(r9584632, r9584628, r9584592, MPFR_RNDN);
        mpfr_mul(r9584633, r9584631, r9584632, MPFR_RNDN);
        mpfr_add(r9584634, r9584630, r9584633, MPFR_RNDN);
        return mpfr_get_d(r9584634, MPFR_RNDN);
}

static mpfr_t r9584635, r9584636, r9584637, r9584638, r9584639, r9584640, r9584641, r9584642, r9584643, r9584644, r9584645, r9584646, r9584647, r9584648, r9584649, r9584650, r9584651, r9584652, r9584653, r9584654, r9584655, r9584656, r9584657, r9584658, r9584659, r9584660, r9584661, r9584662, r9584663, r9584664, r9584665, r9584666, r9584667, r9584668, r9584669, r9584670, r9584671, r9584672, r9584673, r9584674, r9584675, r9584676, r9584677, r9584678, r9584679;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9584635, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9584636, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9584637);
        mpfr_init(r9584638);
        mpfr_init(r9584639);
        mpfr_init_set_str(r9584640, "45.5", 10, MPFR_RNDN);
        mpfr_init(r9584641);
        mpfr_init(r9584642);
        mpfr_init(r9584643);
        mpfr_init_set_str(r9584644, "-60.666667", 10, MPFR_RNDN);
        mpfr_init(r9584645);
        mpfr_init(r9584646);
        mpfr_init(r9584647);
        mpfr_init_set_str(r9584648, "41.708333", 10, MPFR_RNDN);
        mpfr_init(r9584649);
        mpfr_init(r9584650);
        mpfr_init(r9584651);
        mpfr_init_set_str(r9584652, "-16.683333", 10, MPFR_RNDN);
        mpfr_init(r9584653);
        mpfr_init(r9584654);
        mpfr_init(r9584655);
        mpfr_init_set_str(r9584656, "4.170833", 10, MPFR_RNDN);
        mpfr_init(r9584657);
        mpfr_init(r9584658);
        mpfr_init(r9584659);
        mpfr_init_set_str(r9584660, "-0.680952", 10, MPFR_RNDN);
        mpfr_init(r9584661);
        mpfr_init(r9584662);
        mpfr_init(r9584663);
        mpfr_init_set_str(r9584664, "0.074479", 10, MPFR_RNDN);
        mpfr_init(r9584665);
        mpfr_init(r9584666);
        mpfr_init(r9584667);
        mpfr_init_set_str(r9584668, "-0.005517", 10, MPFR_RNDN);
        mpfr_init(r9584669);
        mpfr_init(r9584670);
        mpfr_init(r9584671);
        mpfr_init_set_str(r9584672, "0.000276", 10, MPFR_RNDN);
        mpfr_init(r9584673);
        mpfr_init(r9584674);
        mpfr_init(r9584675);
        mpfr_init_set_str(r9584676, "-9e-06", 10, MPFR_RNDN);
        mpfr_init(r9584677);
        mpfr_init(r9584678);
        mpfr_init(r9584679);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9584637, x, MPFR_RNDN);
        mpfr_mul(r9584638, r9584636, r9584637, MPFR_RNDN);
        mpfr_add(r9584639, r9584635, r9584638, MPFR_RNDN);
        ;
        mpfr_mul(r9584641, r9584637, r9584637, MPFR_RNDN);
        mpfr_mul(r9584642, r9584640, r9584641, MPFR_RNDN);
        mpfr_add(r9584643, r9584639, r9584642, MPFR_RNDN);
        ;
        mpfr_mul(r9584645, r9584641, r9584637, MPFR_RNDN);
        mpfr_mul(r9584646, r9584644, r9584645, MPFR_RNDN);
        mpfr_add(r9584647, r9584643, r9584646, MPFR_RNDN);
        ;
        mpfr_mul(r9584649, r9584645, r9584637, MPFR_RNDN);
        mpfr_mul(r9584650, r9584648, r9584649, MPFR_RNDN);
        mpfr_add(r9584651, r9584647, r9584650, MPFR_RNDN);
        ;
        mpfr_mul(r9584653, r9584649, r9584637, MPFR_RNDN);
        mpfr_mul(r9584654, r9584652, r9584653, MPFR_RNDN);
        mpfr_add(r9584655, r9584651, r9584654, MPFR_RNDN);
        ;
        mpfr_mul(r9584657, r9584653, r9584637, MPFR_RNDN);
        mpfr_mul(r9584658, r9584656, r9584657, MPFR_RNDN);
        mpfr_add(r9584659, r9584655, r9584658, MPFR_RNDN);
        ;
        mpfr_mul(r9584661, r9584657, r9584637, MPFR_RNDN);
        mpfr_mul(r9584662, r9584660, r9584661, MPFR_RNDN);
        mpfr_add(r9584663, r9584659, r9584662, MPFR_RNDN);
        ;
        mpfr_mul(r9584665, r9584661, r9584637, MPFR_RNDN);
        mpfr_mul(r9584666, r9584664, r9584665, MPFR_RNDN);
        mpfr_add(r9584667, r9584663, r9584666, MPFR_RNDN);
        ;
        mpfr_mul(r9584669, r9584665, r9584637, MPFR_RNDN);
        mpfr_mul(r9584670, r9584668, r9584669, MPFR_RNDN);
        mpfr_add(r9584671, r9584667, r9584670, MPFR_RNDN);
        ;
        mpfr_mul(r9584673, r9584669, r9584637, MPFR_RNDN);
        mpfr_mul(r9584674, r9584672, r9584673, MPFR_RNDN);
        mpfr_add(r9584675, r9584671, r9584674, MPFR_RNDN);
        ;
        mpfr_mul(r9584677, r9584673, r9584637, MPFR_RNDN);
        mpfr_mul(r9584678, r9584676, r9584677, MPFR_RNDN);
        mpfr_add(r9584679, r9584675, r9584678, MPFR_RNDN);
        return mpfr_get_d(r9584679, MPFR_RNDN);
}

