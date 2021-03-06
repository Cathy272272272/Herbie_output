#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "17";

double f_if(float x) {
        float r8831369 = 1.0;
        float r8831370 = -17.0;
        float r8831371 = x;
        float r8831372 = r8831370 * r8831371;
        float r8831373 = r8831369 + r8831372;
        float r8831374 = 68.0;
        float r8831375 = r8831371 * r8831371;
        float r8831376 = r8831374 * r8831375;
        float r8831377 = r8831373 + r8831376;
        float r8831378 = -113.333333;
        float r8831379 = r8831375 * r8831371;
        float r8831380 = r8831378 * r8831379;
        float r8831381 = r8831377 + r8831380;
        float r8831382 = 99.166667;
        float r8831383 = r8831379 * r8831371;
        float r8831384 = r8831382 * r8831383;
        float r8831385 = r8831381 + r8831384;
        float r8831386 = -51.566667;
        float r8831387 = r8831383 * r8831371;
        float r8831388 = r8831386 * r8831387;
        float r8831389 = r8831385 + r8831388;
        float r8831390 = 17.188889;
        float r8831391 = r8831387 * r8831371;
        float r8831392 = r8831390 * r8831391;
        float r8831393 = r8831389 + r8831392;
        float r8831394 = -3.85873;
        float r8831395 = r8831391 * r8831371;
        float r8831396 = r8831394 * r8831395;
        float r8831397 = r8831393 + r8831396;
        float r8831398 = 0.602927;
        float r8831399 = r8831395 * r8831371;
        float r8831400 = r8831398 * r8831399;
        float r8831401 = r8831397 + r8831400;
        float r8831402 = -0.066992;
        float r8831403 = r8831399 * r8831371;
        float r8831404 = r8831402 * r8831403;
        float r8831405 = r8831401 + r8831404;
        float r8831406 = 0.005359;
        float r8831407 = r8831403 * r8831371;
        float r8831408 = r8831406 * r8831407;
        float r8831409 = r8831405 + r8831408;
        float r8831410 = -0.00031;
        float r8831411 = r8831407 * r8831371;
        float r8831412 = r8831410 * r8831411;
        float r8831413 = r8831409 + r8831412;
        float r8831414 = 1.3e-05;
        float r8831415 = r8831411 * r8831371;
        float r8831416 = r8831414 * r8831415;
        float r8831417 = r8831413 + r8831416;
        return r8831417;
}

double f_id(double x) {
        double r8831418 = 1.0;
        double r8831419 = -17.0;
        double r8831420 = x;
        double r8831421 = r8831419 * r8831420;
        double r8831422 = r8831418 + r8831421;
        double r8831423 = 68.0;
        double r8831424 = r8831420 * r8831420;
        double r8831425 = r8831423 * r8831424;
        double r8831426 = r8831422 + r8831425;
        double r8831427 = -113.333333;
        double r8831428 = r8831424 * r8831420;
        double r8831429 = r8831427 * r8831428;
        double r8831430 = r8831426 + r8831429;
        double r8831431 = 99.166667;
        double r8831432 = r8831428 * r8831420;
        double r8831433 = r8831431 * r8831432;
        double r8831434 = r8831430 + r8831433;
        double r8831435 = -51.566667;
        double r8831436 = r8831432 * r8831420;
        double r8831437 = r8831435 * r8831436;
        double r8831438 = r8831434 + r8831437;
        double r8831439 = 17.188889;
        double r8831440 = r8831436 * r8831420;
        double r8831441 = r8831439 * r8831440;
        double r8831442 = r8831438 + r8831441;
        double r8831443 = -3.85873;
        double r8831444 = r8831440 * r8831420;
        double r8831445 = r8831443 * r8831444;
        double r8831446 = r8831442 + r8831445;
        double r8831447 = 0.602927;
        double r8831448 = r8831444 * r8831420;
        double r8831449 = r8831447 * r8831448;
        double r8831450 = r8831446 + r8831449;
        double r8831451 = -0.066992;
        double r8831452 = r8831448 * r8831420;
        double r8831453 = r8831451 * r8831452;
        double r8831454 = r8831450 + r8831453;
        double r8831455 = 0.005359;
        double r8831456 = r8831452 * r8831420;
        double r8831457 = r8831455 * r8831456;
        double r8831458 = r8831454 + r8831457;
        double r8831459 = -0.00031;
        double r8831460 = r8831456 * r8831420;
        double r8831461 = r8831459 * r8831460;
        double r8831462 = r8831458 + r8831461;
        double r8831463 = 1.3e-05;
        double r8831464 = r8831460 * r8831420;
        double r8831465 = r8831463 * r8831464;
        double r8831466 = r8831462 + r8831465;
        return r8831466;
}


double f_of(float x) {
        float r8831467 = 1.3e-05;
        float r8831468 = x;
        float r8831469 = r8831468 * r8831468;
        float r8831470 = r8831467 * r8831469;
        float r8831471 = 3;
        float r8831472 = pow(r8831468, r8831471);
        float r8831473 = r8831472 * r8831472;
        float r8831474 = 2;
        float r8831475 = r8831474 + r8831474;
        float r8831476 = pow(r8831468, r8831475);
        float r8831477 = r8831473 * r8831476;
        float r8831478 = r8831470 * r8831477;
        float r8831479 = r8831472 * r8831473;
        float r8831480 = -0.00031;
        float r8831481 = r8831480 * r8831469;
        float r8831482 = 0.005359;
        float r8831483 = r8831482 * r8831468;
        float r8831484 = r8831481 + r8831483;
        float r8831485 = r8831479 * r8831484;
        float r8831486 = r8831478 + r8831485;
        float r8831487 = -51.566667;
        float r8831488 = 5;
        float r8831489 = pow(r8831468, r8831488);
        float r8831490 = r8831487 * r8831489;
        float r8831491 = 1.0;
        float r8831492 = r8831490 + r8831491;
        float r8831493 = 68.0;
        float r8831494 = r8831468 * r8831493;
        float r8831495 = -17.0;
        float r8831496 = r8831494 + r8831495;
        float r8831497 = r8831496 * r8831468;
        float r8831498 = -113.333333;
        float r8831499 = 99.166667;
        float r8831500 = r8831499 * r8831468;
        float r8831501 = r8831498 + r8831500;
        float r8831502 = r8831472 * r8831501;
        float r8831503 = r8831497 + r8831502;
        float r8831504 = r8831492 + r8831503;
        float r8831505 = r8831469 * r8831469;
        float r8831506 = r8831505 * r8831505;
        float r8831507 = -0.066992;
        float r8831508 = r8831507 * r8831468;
        float r8831509 = 0.602927;
        float r8831510 = r8831508 + r8831509;
        float r8831511 = r8831506 * r8831510;
        float r8831512 = -3.85873;
        float r8831513 = r8831512 * r8831468;
        float r8831514 = 17.188889;
        float r8831515 = r8831513 + r8831514;
        float r8831516 = r8831473 * r8831515;
        float r8831517 = r8831511 + r8831516;
        float r8831518 = r8831504 + r8831517;
        float r8831519 = r8831486 + r8831518;
        return r8831519;
}

double f_od(double x) {
        double r8831520 = 1.3e-05;
        double r8831521 = x;
        double r8831522 = r8831521 * r8831521;
        double r8831523 = r8831520 * r8831522;
        double r8831524 = 3;
        double r8831525 = pow(r8831521, r8831524);
        double r8831526 = r8831525 * r8831525;
        double r8831527 = 2;
        double r8831528 = r8831527 + r8831527;
        double r8831529 = pow(r8831521, r8831528);
        double r8831530 = r8831526 * r8831529;
        double r8831531 = r8831523 * r8831530;
        double r8831532 = r8831525 * r8831526;
        double r8831533 = -0.00031;
        double r8831534 = r8831533 * r8831522;
        double r8831535 = 0.005359;
        double r8831536 = r8831535 * r8831521;
        double r8831537 = r8831534 + r8831536;
        double r8831538 = r8831532 * r8831537;
        double r8831539 = r8831531 + r8831538;
        double r8831540 = -51.566667;
        double r8831541 = 5;
        double r8831542 = pow(r8831521, r8831541);
        double r8831543 = r8831540 * r8831542;
        double r8831544 = 1.0;
        double r8831545 = r8831543 + r8831544;
        double r8831546 = 68.0;
        double r8831547 = r8831521 * r8831546;
        double r8831548 = -17.0;
        double r8831549 = r8831547 + r8831548;
        double r8831550 = r8831549 * r8831521;
        double r8831551 = -113.333333;
        double r8831552 = 99.166667;
        double r8831553 = r8831552 * r8831521;
        double r8831554 = r8831551 + r8831553;
        double r8831555 = r8831525 * r8831554;
        double r8831556 = r8831550 + r8831555;
        double r8831557 = r8831545 + r8831556;
        double r8831558 = r8831522 * r8831522;
        double r8831559 = r8831558 * r8831558;
        double r8831560 = -0.066992;
        double r8831561 = r8831560 * r8831521;
        double r8831562 = 0.602927;
        double r8831563 = r8831561 + r8831562;
        double r8831564 = r8831559 * r8831563;
        double r8831565 = -3.85873;
        double r8831566 = r8831565 * r8831521;
        double r8831567 = 17.188889;
        double r8831568 = r8831566 + r8831567;
        double r8831569 = r8831526 * r8831568;
        double r8831570 = r8831564 + r8831569;
        double r8831571 = r8831557 + r8831570;
        double r8831572 = r8831539 + r8831571;
        return r8831572;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8831573, r8831574, r8831575, r8831576, r8831577, r8831578, r8831579, r8831580, r8831581, r8831582, r8831583, r8831584, r8831585, r8831586, r8831587, r8831588, r8831589, r8831590, r8831591, r8831592, r8831593, r8831594, r8831595, r8831596, r8831597, r8831598, r8831599, r8831600, r8831601, r8831602, r8831603, r8831604, r8831605, r8831606, r8831607, r8831608, r8831609, r8831610, r8831611, r8831612, r8831613, r8831614, r8831615, r8831616, r8831617, r8831618, r8831619, r8831620, r8831621;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8831573, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8831574, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r8831575);
        mpfr_init(r8831576);
        mpfr_init(r8831577);
        mpfr_init_set_str(r8831578, "68.0", 10, MPFR_RNDN);
        mpfr_init(r8831579);
        mpfr_init(r8831580);
        mpfr_init(r8831581);
        mpfr_init_set_str(r8831582, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r8831583);
        mpfr_init(r8831584);
        mpfr_init(r8831585);
        mpfr_init_set_str(r8831586, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r8831587);
        mpfr_init(r8831588);
        mpfr_init(r8831589);
        mpfr_init_set_str(r8831590, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r8831591);
        mpfr_init(r8831592);
        mpfr_init(r8831593);
        mpfr_init_set_str(r8831594, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r8831595);
        mpfr_init(r8831596);
        mpfr_init(r8831597);
        mpfr_init_set_str(r8831598, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r8831599);
        mpfr_init(r8831600);
        mpfr_init(r8831601);
        mpfr_init_set_str(r8831602, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r8831603);
        mpfr_init(r8831604);
        mpfr_init(r8831605);
        mpfr_init_set_str(r8831606, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r8831607);
        mpfr_init(r8831608);
        mpfr_init(r8831609);
        mpfr_init_set_str(r8831610, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r8831611);
        mpfr_init(r8831612);
        mpfr_init(r8831613);
        mpfr_init_set_str(r8831614, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r8831615);
        mpfr_init(r8831616);
        mpfr_init(r8831617);
        mpfr_init_set_str(r8831618, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r8831619);
        mpfr_init(r8831620);
        mpfr_init(r8831621);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8831575, x, MPFR_RNDN);
        mpfr_mul(r8831576, r8831574, r8831575, MPFR_RNDN);
        mpfr_add(r8831577, r8831573, r8831576, MPFR_RNDN);
        ;
        mpfr_mul(r8831579, r8831575, r8831575, MPFR_RNDN);
        mpfr_mul(r8831580, r8831578, r8831579, MPFR_RNDN);
        mpfr_add(r8831581, r8831577, r8831580, MPFR_RNDN);
        ;
        mpfr_mul(r8831583, r8831579, r8831575, MPFR_RNDN);
        mpfr_mul(r8831584, r8831582, r8831583, MPFR_RNDN);
        mpfr_add(r8831585, r8831581, r8831584, MPFR_RNDN);
        ;
        mpfr_mul(r8831587, r8831583, r8831575, MPFR_RNDN);
        mpfr_mul(r8831588, r8831586, r8831587, MPFR_RNDN);
        mpfr_add(r8831589, r8831585, r8831588, MPFR_RNDN);
        ;
        mpfr_mul(r8831591, r8831587, r8831575, MPFR_RNDN);
        mpfr_mul(r8831592, r8831590, r8831591, MPFR_RNDN);
        mpfr_add(r8831593, r8831589, r8831592, MPFR_RNDN);
        ;
        mpfr_mul(r8831595, r8831591, r8831575, MPFR_RNDN);
        mpfr_mul(r8831596, r8831594, r8831595, MPFR_RNDN);
        mpfr_add(r8831597, r8831593, r8831596, MPFR_RNDN);
        ;
        mpfr_mul(r8831599, r8831595, r8831575, MPFR_RNDN);
        mpfr_mul(r8831600, r8831598, r8831599, MPFR_RNDN);
        mpfr_add(r8831601, r8831597, r8831600, MPFR_RNDN);
        ;
        mpfr_mul(r8831603, r8831599, r8831575, MPFR_RNDN);
        mpfr_mul(r8831604, r8831602, r8831603, MPFR_RNDN);
        mpfr_add(r8831605, r8831601, r8831604, MPFR_RNDN);
        ;
        mpfr_mul(r8831607, r8831603, r8831575, MPFR_RNDN);
        mpfr_mul(r8831608, r8831606, r8831607, MPFR_RNDN);
        mpfr_add(r8831609, r8831605, r8831608, MPFR_RNDN);
        ;
        mpfr_mul(r8831611, r8831607, r8831575, MPFR_RNDN);
        mpfr_mul(r8831612, r8831610, r8831611, MPFR_RNDN);
        mpfr_add(r8831613, r8831609, r8831612, MPFR_RNDN);
        ;
        mpfr_mul(r8831615, r8831611, r8831575, MPFR_RNDN);
        mpfr_mul(r8831616, r8831614, r8831615, MPFR_RNDN);
        mpfr_add(r8831617, r8831613, r8831616, MPFR_RNDN);
        ;
        mpfr_mul(r8831619, r8831615, r8831575, MPFR_RNDN);
        mpfr_mul(r8831620, r8831618, r8831619, MPFR_RNDN);
        mpfr_add(r8831621, r8831617, r8831620, MPFR_RNDN);
        return mpfr_get_d(r8831621, MPFR_RNDN);
}

static mpfr_t r8831622, r8831623, r8831624, r8831625, r8831626, r8831627, r8831628, r8831629, r8831630, r8831631, r8831632, r8831633, r8831634, r8831635, r8831636, r8831637, r8831638, r8831639, r8831640, r8831641, r8831642, r8831643, r8831644, r8831645, r8831646, r8831647, r8831648, r8831649, r8831650, r8831651, r8831652, r8831653, r8831654, r8831655, r8831656, r8831657, r8831658, r8831659, r8831660, r8831661, r8831662, r8831663, r8831664, r8831665, r8831666, r8831667, r8831668, r8831669, r8831670, r8831671, r8831672, r8831673, r8831674;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8831622, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r8831623);
        mpfr_init(r8831624);
        mpfr_init(r8831625);
        mpfr_init_set_str(r8831626, "3", 10, MPFR_RNDN);
        mpfr_init(r8831627);
        mpfr_init(r8831628);
        mpfr_init_set_str(r8831629, "2", 10, MPFR_RNDN);
        mpfr_init(r8831630);
        mpfr_init(r8831631);
        mpfr_init(r8831632);
        mpfr_init(r8831633);
        mpfr_init(r8831634);
        mpfr_init_set_str(r8831635, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r8831636);
        mpfr_init_set_str(r8831637, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r8831638);
        mpfr_init(r8831639);
        mpfr_init(r8831640);
        mpfr_init(r8831641);
        mpfr_init_set_str(r8831642, "-51.566667", 10, MPFR_RNDN);
        mpfr_init_set_str(r8831643, "5", 10, MPFR_RNDN);
        mpfr_init(r8831644);
        mpfr_init(r8831645);
        mpfr_init_set_str(r8831646, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8831647);
        mpfr_init_set_str(r8831648, "68.0", 10, MPFR_RNDN);
        mpfr_init(r8831649);
        mpfr_init_set_str(r8831650, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r8831651);
        mpfr_init(r8831652);
        mpfr_init_set_str(r8831653, "-113.333333", 10, MPFR_RNDN);
        mpfr_init_set_str(r8831654, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r8831655);
        mpfr_init(r8831656);
        mpfr_init(r8831657);
        mpfr_init(r8831658);
        mpfr_init(r8831659);
        mpfr_init(r8831660);
        mpfr_init(r8831661);
        mpfr_init_set_str(r8831662, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r8831663);
        mpfr_init_set_str(r8831664, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r8831665);
        mpfr_init(r8831666);
        mpfr_init_set_str(r8831667, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r8831668);
        mpfr_init_set_str(r8831669, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r8831670);
        mpfr_init(r8831671);
        mpfr_init(r8831672);
        mpfr_init(r8831673);
        mpfr_init(r8831674);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8831623, x, MPFR_RNDN);
        mpfr_mul(r8831624, r8831623, r8831623, MPFR_RNDN);
        mpfr_mul(r8831625, r8831622, r8831624, MPFR_RNDN);
        ;
        mpfr_pow(r8831627, r8831623, r8831626, MPFR_RNDN);
        mpfr_mul(r8831628, r8831627, r8831627, MPFR_RNDN);
        ;
        mpfr_add(r8831630, r8831629, r8831629, MPFR_RNDN);
        mpfr_pow(r8831631, r8831623, r8831630, MPFR_RNDN);
        mpfr_mul(r8831632, r8831628, r8831631, MPFR_RNDN);
        mpfr_mul(r8831633, r8831625, r8831632, MPFR_RNDN);
        mpfr_mul(r8831634, r8831627, r8831628, MPFR_RNDN);
        ;
        mpfr_mul(r8831636, r8831635, r8831624, MPFR_RNDN);
        ;
        mpfr_mul(r8831638, r8831637, r8831623, MPFR_RNDN);
        mpfr_add(r8831639, r8831636, r8831638, MPFR_RNDN);
        mpfr_mul(r8831640, r8831634, r8831639, MPFR_RNDN);
        mpfr_add(r8831641, r8831633, r8831640, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8831644, r8831623, r8831643, MPFR_RNDN);
        mpfr_mul(r8831645, r8831642, r8831644, MPFR_RNDN);
        ;
        mpfr_add(r8831647, r8831645, r8831646, MPFR_RNDN);
        ;
        mpfr_mul(r8831649, r8831623, r8831648, MPFR_RNDN);
        ;
        mpfr_add(r8831651, r8831649, r8831650, MPFR_RNDN);
        mpfr_mul(r8831652, r8831651, r8831623, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8831655, r8831654, r8831623, MPFR_RNDN);
        mpfr_add(r8831656, r8831653, r8831655, MPFR_RNDN);
        mpfr_mul(r8831657, r8831627, r8831656, MPFR_RNDN);
        mpfr_add(r8831658, r8831652, r8831657, MPFR_RNDN);
        mpfr_add(r8831659, r8831647, r8831658, MPFR_RNDN);
        mpfr_mul(r8831660, r8831624, r8831624, MPFR_RNDN);
        mpfr_mul(r8831661, r8831660, r8831660, MPFR_RNDN);
        ;
        mpfr_mul(r8831663, r8831662, r8831623, MPFR_RNDN);
        ;
        mpfr_add(r8831665, r8831663, r8831664, MPFR_RNDN);
        mpfr_mul(r8831666, r8831661, r8831665, MPFR_RNDN);
        ;
        mpfr_mul(r8831668, r8831667, r8831623, MPFR_RNDN);
        ;
        mpfr_add(r8831670, r8831668, r8831669, MPFR_RNDN);
        mpfr_mul(r8831671, r8831628, r8831670, MPFR_RNDN);
        mpfr_add(r8831672, r8831666, r8831671, MPFR_RNDN);
        mpfr_add(r8831673, r8831659, r8831672, MPFR_RNDN);
        mpfr_add(r8831674, r8831641, r8831673, MPFR_RNDN);
        return mpfr_get_d(r8831674, MPFR_RNDN);
}

static mpfr_t r8831675, r8831676, r8831677, r8831678, r8831679, r8831680, r8831681, r8831682, r8831683, r8831684, r8831685, r8831686, r8831687, r8831688, r8831689, r8831690, r8831691, r8831692, r8831693, r8831694, r8831695, r8831696, r8831697, r8831698, r8831699, r8831700, r8831701, r8831702, r8831703, r8831704, r8831705, r8831706, r8831707, r8831708, r8831709, r8831710, r8831711, r8831712, r8831713, r8831714, r8831715, r8831716, r8831717, r8831718, r8831719, r8831720, r8831721, r8831722, r8831723, r8831724, r8831725, r8831726, r8831727;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8831675, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r8831676);
        mpfr_init(r8831677);
        mpfr_init(r8831678);
        mpfr_init_set_str(r8831679, "3", 10, MPFR_RNDN);
        mpfr_init(r8831680);
        mpfr_init(r8831681);
        mpfr_init_set_str(r8831682, "2", 10, MPFR_RNDN);
        mpfr_init(r8831683);
        mpfr_init(r8831684);
        mpfr_init(r8831685);
        mpfr_init(r8831686);
        mpfr_init(r8831687);
        mpfr_init_set_str(r8831688, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r8831689);
        mpfr_init_set_str(r8831690, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r8831691);
        mpfr_init(r8831692);
        mpfr_init(r8831693);
        mpfr_init(r8831694);
        mpfr_init_set_str(r8831695, "-51.566667", 10, MPFR_RNDN);
        mpfr_init_set_str(r8831696, "5", 10, MPFR_RNDN);
        mpfr_init(r8831697);
        mpfr_init(r8831698);
        mpfr_init_set_str(r8831699, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8831700);
        mpfr_init_set_str(r8831701, "68.0", 10, MPFR_RNDN);
        mpfr_init(r8831702);
        mpfr_init_set_str(r8831703, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r8831704);
        mpfr_init(r8831705);
        mpfr_init_set_str(r8831706, "-113.333333", 10, MPFR_RNDN);
        mpfr_init_set_str(r8831707, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r8831708);
        mpfr_init(r8831709);
        mpfr_init(r8831710);
        mpfr_init(r8831711);
        mpfr_init(r8831712);
        mpfr_init(r8831713);
        mpfr_init(r8831714);
        mpfr_init_set_str(r8831715, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r8831716);
        mpfr_init_set_str(r8831717, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r8831718);
        mpfr_init(r8831719);
        mpfr_init_set_str(r8831720, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r8831721);
        mpfr_init_set_str(r8831722, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r8831723);
        mpfr_init(r8831724);
        mpfr_init(r8831725);
        mpfr_init(r8831726);
        mpfr_init(r8831727);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8831676, x, MPFR_RNDN);
        mpfr_mul(r8831677, r8831676, r8831676, MPFR_RNDN);
        mpfr_mul(r8831678, r8831675, r8831677, MPFR_RNDN);
        ;
        mpfr_pow(r8831680, r8831676, r8831679, MPFR_RNDN);
        mpfr_mul(r8831681, r8831680, r8831680, MPFR_RNDN);
        ;
        mpfr_add(r8831683, r8831682, r8831682, MPFR_RNDN);
        mpfr_pow(r8831684, r8831676, r8831683, MPFR_RNDN);
        mpfr_mul(r8831685, r8831681, r8831684, MPFR_RNDN);
        mpfr_mul(r8831686, r8831678, r8831685, MPFR_RNDN);
        mpfr_mul(r8831687, r8831680, r8831681, MPFR_RNDN);
        ;
        mpfr_mul(r8831689, r8831688, r8831677, MPFR_RNDN);
        ;
        mpfr_mul(r8831691, r8831690, r8831676, MPFR_RNDN);
        mpfr_add(r8831692, r8831689, r8831691, MPFR_RNDN);
        mpfr_mul(r8831693, r8831687, r8831692, MPFR_RNDN);
        mpfr_add(r8831694, r8831686, r8831693, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8831697, r8831676, r8831696, MPFR_RNDN);
        mpfr_mul(r8831698, r8831695, r8831697, MPFR_RNDN);
        ;
        mpfr_add(r8831700, r8831698, r8831699, MPFR_RNDN);
        ;
        mpfr_mul(r8831702, r8831676, r8831701, MPFR_RNDN);
        ;
        mpfr_add(r8831704, r8831702, r8831703, MPFR_RNDN);
        mpfr_mul(r8831705, r8831704, r8831676, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8831708, r8831707, r8831676, MPFR_RNDN);
        mpfr_add(r8831709, r8831706, r8831708, MPFR_RNDN);
        mpfr_mul(r8831710, r8831680, r8831709, MPFR_RNDN);
        mpfr_add(r8831711, r8831705, r8831710, MPFR_RNDN);
        mpfr_add(r8831712, r8831700, r8831711, MPFR_RNDN);
        mpfr_mul(r8831713, r8831677, r8831677, MPFR_RNDN);
        mpfr_mul(r8831714, r8831713, r8831713, MPFR_RNDN);
        ;
        mpfr_mul(r8831716, r8831715, r8831676, MPFR_RNDN);
        ;
        mpfr_add(r8831718, r8831716, r8831717, MPFR_RNDN);
        mpfr_mul(r8831719, r8831714, r8831718, MPFR_RNDN);
        ;
        mpfr_mul(r8831721, r8831720, r8831676, MPFR_RNDN);
        ;
        mpfr_add(r8831723, r8831721, r8831722, MPFR_RNDN);
        mpfr_mul(r8831724, r8831681, r8831723, MPFR_RNDN);
        mpfr_add(r8831725, r8831719, r8831724, MPFR_RNDN);
        mpfr_add(r8831726, r8831712, r8831725, MPFR_RNDN);
        mpfr_add(r8831727, r8831694, r8831726, MPFR_RNDN);
        return mpfr_get_d(r8831727, MPFR_RNDN);
}

