#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r9374367 = 1.0;
        float r9374368 = -18.0;
        float r9374369 = x;
        float r9374370 = r9374368 * r9374369;
        float r9374371 = r9374367 + r9374370;
        float r9374372 = 76.5;
        float r9374373 = r9374369 * r9374369;
        float r9374374 = r9374372 * r9374373;
        float r9374375 = r9374371 + r9374374;
        float r9374376 = -136.0;
        float r9374377 = r9374373 * r9374369;
        float r9374378 = r9374376 * r9374377;
        float r9374379 = r9374375 + r9374378;
        float r9374380 = 127.5;
        float r9374381 = r9374377 * r9374369;
        float r9374382 = r9374380 * r9374381;
        float r9374383 = r9374379 + r9374382;
        float r9374384 = -71.4;
        float r9374385 = r9374381 * r9374369;
        float r9374386 = r9374384 * r9374385;
        float r9374387 = r9374383 + r9374386;
        float r9374388 = 25.783333;
        float r9374389 = r9374385 * r9374369;
        float r9374390 = r9374388 * r9374389;
        float r9374391 = r9374387 + r9374390;
        float r9374392 = -6.314286;
        float r9374393 = r9374389 * r9374369;
        float r9374394 = r9374392 * r9374393;
        float r9374395 = r9374391 + r9374394;
        float r9374396 = 1.085268;
        float r9374397 = r9374393 * r9374369;
        float r9374398 = r9374396 * r9374397;
        float r9374399 = r9374395 + r9374398;
        float r9374400 = -0.133984;
        float r9374401 = r9374397 * r9374369;
        float r9374402 = r9374400 * r9374401;
        float r9374403 = r9374399 + r9374402;
        float r9374404 = 0.012059;
        float r9374405 = r9374401 * r9374369;
        float r9374406 = r9374404 * r9374405;
        float r9374407 = r9374403 + r9374406;
        float r9374408 = -0.000797;
        float r9374409 = r9374405 * r9374369;
        float r9374410 = r9374408 * r9374409;
        float r9374411 = r9374407 + r9374410;
        float r9374412 = 3.9e-05;
        float r9374413 = r9374409 * r9374369;
        float r9374414 = r9374412 * r9374413;
        float r9374415 = r9374411 + r9374414;
        float r9374416 = -1e-06;
        float r9374417 = r9374413 * r9374369;
        float r9374418 = r9374416 * r9374417;
        float r9374419 = r9374415 + r9374418;
        return r9374419;
}

double f_id(double x) {
        double r9374420 = 1.0;
        double r9374421 = -18.0;
        double r9374422 = x;
        double r9374423 = r9374421 * r9374422;
        double r9374424 = r9374420 + r9374423;
        double r9374425 = 76.5;
        double r9374426 = r9374422 * r9374422;
        double r9374427 = r9374425 * r9374426;
        double r9374428 = r9374424 + r9374427;
        double r9374429 = -136.0;
        double r9374430 = r9374426 * r9374422;
        double r9374431 = r9374429 * r9374430;
        double r9374432 = r9374428 + r9374431;
        double r9374433 = 127.5;
        double r9374434 = r9374430 * r9374422;
        double r9374435 = r9374433 * r9374434;
        double r9374436 = r9374432 + r9374435;
        double r9374437 = -71.4;
        double r9374438 = r9374434 * r9374422;
        double r9374439 = r9374437 * r9374438;
        double r9374440 = r9374436 + r9374439;
        double r9374441 = 25.783333;
        double r9374442 = r9374438 * r9374422;
        double r9374443 = r9374441 * r9374442;
        double r9374444 = r9374440 + r9374443;
        double r9374445 = -6.314286;
        double r9374446 = r9374442 * r9374422;
        double r9374447 = r9374445 * r9374446;
        double r9374448 = r9374444 + r9374447;
        double r9374449 = 1.085268;
        double r9374450 = r9374446 * r9374422;
        double r9374451 = r9374449 * r9374450;
        double r9374452 = r9374448 + r9374451;
        double r9374453 = -0.133984;
        double r9374454 = r9374450 * r9374422;
        double r9374455 = r9374453 * r9374454;
        double r9374456 = r9374452 + r9374455;
        double r9374457 = 0.012059;
        double r9374458 = r9374454 * r9374422;
        double r9374459 = r9374457 * r9374458;
        double r9374460 = r9374456 + r9374459;
        double r9374461 = -0.000797;
        double r9374462 = r9374458 * r9374422;
        double r9374463 = r9374461 * r9374462;
        double r9374464 = r9374460 + r9374463;
        double r9374465 = 3.9e-05;
        double r9374466 = r9374462 * r9374422;
        double r9374467 = r9374465 * r9374466;
        double r9374468 = r9374464 + r9374467;
        double r9374469 = -1e-06;
        double r9374470 = r9374466 * r9374422;
        double r9374471 = r9374469 * r9374470;
        double r9374472 = r9374468 + r9374471;
        return r9374472;
}


double f_of(float x) {
        float r9374473 = 1.0;
        float r9374474 = -18.0;
        float r9374475 = x;
        float r9374476 = r9374474 * r9374475;
        float r9374477 = r9374473 + r9374476;
        float r9374478 = 76.5;
        float r9374479 = r9374475 * r9374475;
        float r9374480 = r9374478 * r9374479;
        float r9374481 = r9374477 + r9374480;
        float r9374482 = -136.0;
        float r9374483 = r9374479 * r9374475;
        float r9374484 = r9374482 * r9374483;
        float r9374485 = cbrt(r9374484);
        float r9374486 = r9374485 * r9374485;
        float r9374487 = r9374486 * r9374485;
        float r9374488 = r9374481 + r9374487;
        float r9374489 = 127.5;
        float r9374490 = r9374483 * r9374475;
        float r9374491 = r9374489 * r9374490;
        float r9374492 = r9374488 + r9374491;
        float r9374493 = -71.4;
        float r9374494 = r9374490 * r9374475;
        float r9374495 = r9374493 * r9374494;
        float r9374496 = r9374492 + r9374495;
        float r9374497 = 25.783333;
        float r9374498 = r9374494 * r9374475;
        float r9374499 = r9374497 * r9374498;
        float r9374500 = r9374496 + r9374499;
        float r9374501 = -6.314286;
        float r9374502 = r9374498 * r9374475;
        float r9374503 = r9374501 * r9374502;
        float r9374504 = r9374500 + r9374503;
        float r9374505 = 1.085268;
        float r9374506 = r9374502 * r9374475;
        float r9374507 = r9374505 * r9374506;
        float r9374508 = r9374504 + r9374507;
        float r9374509 = -0.133984;
        float r9374510 = r9374506 * r9374475;
        float r9374511 = r9374509 * r9374510;
        float r9374512 = r9374508 + r9374511;
        float r9374513 = 0.012059;
        float r9374514 = r9374510 * r9374475;
        float r9374515 = r9374513 * r9374514;
        float r9374516 = r9374512 + r9374515;
        float r9374517 = -0.000797;
        float r9374518 = r9374514 * r9374475;
        float r9374519 = r9374517 * r9374518;
        float r9374520 = r9374516 + r9374519;
        float r9374521 = 3.9e-05;
        float r9374522 = r9374518 * r9374475;
        float r9374523 = r9374521 * r9374522;
        float r9374524 = r9374520 + r9374523;
        float r9374525 = -1e-06;
        float r9374526 = r9374522 * r9374475;
        float r9374527 = r9374525 * r9374526;
        float r9374528 = r9374524 + r9374527;
        return r9374528;
}

double f_od(double x) {
        double r9374529 = 1.0;
        double r9374530 = -18.0;
        double r9374531 = x;
        double r9374532 = r9374530 * r9374531;
        double r9374533 = r9374529 + r9374532;
        double r9374534 = 76.5;
        double r9374535 = r9374531 * r9374531;
        double r9374536 = r9374534 * r9374535;
        double r9374537 = r9374533 + r9374536;
        double r9374538 = -136.0;
        double r9374539 = r9374535 * r9374531;
        double r9374540 = r9374538 * r9374539;
        double r9374541 = cbrt(r9374540);
        double r9374542 = r9374541 * r9374541;
        double r9374543 = r9374542 * r9374541;
        double r9374544 = r9374537 + r9374543;
        double r9374545 = 127.5;
        double r9374546 = r9374539 * r9374531;
        double r9374547 = r9374545 * r9374546;
        double r9374548 = r9374544 + r9374547;
        double r9374549 = -71.4;
        double r9374550 = r9374546 * r9374531;
        double r9374551 = r9374549 * r9374550;
        double r9374552 = r9374548 + r9374551;
        double r9374553 = 25.783333;
        double r9374554 = r9374550 * r9374531;
        double r9374555 = r9374553 * r9374554;
        double r9374556 = r9374552 + r9374555;
        double r9374557 = -6.314286;
        double r9374558 = r9374554 * r9374531;
        double r9374559 = r9374557 * r9374558;
        double r9374560 = r9374556 + r9374559;
        double r9374561 = 1.085268;
        double r9374562 = r9374558 * r9374531;
        double r9374563 = r9374561 * r9374562;
        double r9374564 = r9374560 + r9374563;
        double r9374565 = -0.133984;
        double r9374566 = r9374562 * r9374531;
        double r9374567 = r9374565 * r9374566;
        double r9374568 = r9374564 + r9374567;
        double r9374569 = 0.012059;
        double r9374570 = r9374566 * r9374531;
        double r9374571 = r9374569 * r9374570;
        double r9374572 = r9374568 + r9374571;
        double r9374573 = -0.000797;
        double r9374574 = r9374570 * r9374531;
        double r9374575 = r9374573 * r9374574;
        double r9374576 = r9374572 + r9374575;
        double r9374577 = 3.9e-05;
        double r9374578 = r9374574 * r9374531;
        double r9374579 = r9374577 * r9374578;
        double r9374580 = r9374576 + r9374579;
        double r9374581 = -1e-06;
        double r9374582 = r9374578 * r9374531;
        double r9374583 = r9374581 * r9374582;
        double r9374584 = r9374580 + r9374583;
        return r9374584;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9374585, r9374586, r9374587, r9374588, r9374589, r9374590, r9374591, r9374592, r9374593, r9374594, r9374595, r9374596, r9374597, r9374598, r9374599, r9374600, r9374601, r9374602, r9374603, r9374604, r9374605, r9374606, r9374607, r9374608, r9374609, r9374610, r9374611, r9374612, r9374613, r9374614, r9374615, r9374616, r9374617, r9374618, r9374619, r9374620, r9374621, r9374622, r9374623, r9374624, r9374625, r9374626, r9374627, r9374628, r9374629, r9374630, r9374631, r9374632, r9374633, r9374634, r9374635, r9374636, r9374637;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9374585, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9374586, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r9374587);
        mpfr_init(r9374588);
        mpfr_init(r9374589);
        mpfr_init_set_str(r9374590, "76.5", 10, MPFR_RNDN);
        mpfr_init(r9374591);
        mpfr_init(r9374592);
        mpfr_init(r9374593);
        mpfr_init_set_str(r9374594, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r9374595);
        mpfr_init(r9374596);
        mpfr_init(r9374597);
        mpfr_init_set_str(r9374598, "127.5", 10, MPFR_RNDN);
        mpfr_init(r9374599);
        mpfr_init(r9374600);
        mpfr_init(r9374601);
        mpfr_init_set_str(r9374602, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r9374603);
        mpfr_init(r9374604);
        mpfr_init(r9374605);
        mpfr_init_set_str(r9374606, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r9374607);
        mpfr_init(r9374608);
        mpfr_init(r9374609);
        mpfr_init_set_str(r9374610, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r9374611);
        mpfr_init(r9374612);
        mpfr_init(r9374613);
        mpfr_init_set_str(r9374614, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r9374615);
        mpfr_init(r9374616);
        mpfr_init(r9374617);
        mpfr_init_set_str(r9374618, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r9374619);
        mpfr_init(r9374620);
        mpfr_init(r9374621);
        mpfr_init_set_str(r9374622, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r9374623);
        mpfr_init(r9374624);
        mpfr_init(r9374625);
        mpfr_init_set_str(r9374626, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r9374627);
        mpfr_init(r9374628);
        mpfr_init(r9374629);
        mpfr_init_set_str(r9374630, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r9374631);
        mpfr_init(r9374632);
        mpfr_init(r9374633);
        mpfr_init_set_str(r9374634, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r9374635);
        mpfr_init(r9374636);
        mpfr_init(r9374637);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9374587, x, MPFR_RNDN);
        mpfr_mul(r9374588, r9374586, r9374587, MPFR_RNDN);
        mpfr_add(r9374589, r9374585, r9374588, MPFR_RNDN);
        ;
        mpfr_mul(r9374591, r9374587, r9374587, MPFR_RNDN);
        mpfr_mul(r9374592, r9374590, r9374591, MPFR_RNDN);
        mpfr_add(r9374593, r9374589, r9374592, MPFR_RNDN);
        ;
        mpfr_mul(r9374595, r9374591, r9374587, MPFR_RNDN);
        mpfr_mul(r9374596, r9374594, r9374595, MPFR_RNDN);
        mpfr_add(r9374597, r9374593, r9374596, MPFR_RNDN);
        ;
        mpfr_mul(r9374599, r9374595, r9374587, MPFR_RNDN);
        mpfr_mul(r9374600, r9374598, r9374599, MPFR_RNDN);
        mpfr_add(r9374601, r9374597, r9374600, MPFR_RNDN);
        ;
        mpfr_mul(r9374603, r9374599, r9374587, MPFR_RNDN);
        mpfr_mul(r9374604, r9374602, r9374603, MPFR_RNDN);
        mpfr_add(r9374605, r9374601, r9374604, MPFR_RNDN);
        ;
        mpfr_mul(r9374607, r9374603, r9374587, MPFR_RNDN);
        mpfr_mul(r9374608, r9374606, r9374607, MPFR_RNDN);
        mpfr_add(r9374609, r9374605, r9374608, MPFR_RNDN);
        ;
        mpfr_mul(r9374611, r9374607, r9374587, MPFR_RNDN);
        mpfr_mul(r9374612, r9374610, r9374611, MPFR_RNDN);
        mpfr_add(r9374613, r9374609, r9374612, MPFR_RNDN);
        ;
        mpfr_mul(r9374615, r9374611, r9374587, MPFR_RNDN);
        mpfr_mul(r9374616, r9374614, r9374615, MPFR_RNDN);
        mpfr_add(r9374617, r9374613, r9374616, MPFR_RNDN);
        ;
        mpfr_mul(r9374619, r9374615, r9374587, MPFR_RNDN);
        mpfr_mul(r9374620, r9374618, r9374619, MPFR_RNDN);
        mpfr_add(r9374621, r9374617, r9374620, MPFR_RNDN);
        ;
        mpfr_mul(r9374623, r9374619, r9374587, MPFR_RNDN);
        mpfr_mul(r9374624, r9374622, r9374623, MPFR_RNDN);
        mpfr_add(r9374625, r9374621, r9374624, MPFR_RNDN);
        ;
        mpfr_mul(r9374627, r9374623, r9374587, MPFR_RNDN);
        mpfr_mul(r9374628, r9374626, r9374627, MPFR_RNDN);
        mpfr_add(r9374629, r9374625, r9374628, MPFR_RNDN);
        ;
        mpfr_mul(r9374631, r9374627, r9374587, MPFR_RNDN);
        mpfr_mul(r9374632, r9374630, r9374631, MPFR_RNDN);
        mpfr_add(r9374633, r9374629, r9374632, MPFR_RNDN);
        ;
        mpfr_mul(r9374635, r9374631, r9374587, MPFR_RNDN);
        mpfr_mul(r9374636, r9374634, r9374635, MPFR_RNDN);
        mpfr_add(r9374637, r9374633, r9374636, MPFR_RNDN);
        return mpfr_get_d(r9374637, MPFR_RNDN);
}

static mpfr_t r9374638, r9374639, r9374640, r9374641, r9374642, r9374643, r9374644, r9374645, r9374646, r9374647, r9374648, r9374649, r9374650, r9374651, r9374652, r9374653, r9374654, r9374655, r9374656, r9374657, r9374658, r9374659, r9374660, r9374661, r9374662, r9374663, r9374664, r9374665, r9374666, r9374667, r9374668, r9374669, r9374670, r9374671, r9374672, r9374673, r9374674, r9374675, r9374676, r9374677, r9374678, r9374679, r9374680, r9374681, r9374682, r9374683, r9374684, r9374685, r9374686, r9374687, r9374688, r9374689, r9374690, r9374691, r9374692, r9374693;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9374638, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9374639, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r9374640);
        mpfr_init(r9374641);
        mpfr_init(r9374642);
        mpfr_init_set_str(r9374643, "76.5", 10, MPFR_RNDN);
        mpfr_init(r9374644);
        mpfr_init(r9374645);
        mpfr_init(r9374646);
        mpfr_init_set_str(r9374647, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r9374648);
        mpfr_init(r9374649);
        mpfr_init(r9374650);
        mpfr_init(r9374651);
        mpfr_init(r9374652);
        mpfr_init(r9374653);
        mpfr_init_set_str(r9374654, "127.5", 10, MPFR_RNDN);
        mpfr_init(r9374655);
        mpfr_init(r9374656);
        mpfr_init(r9374657);
        mpfr_init_set_str(r9374658, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r9374659);
        mpfr_init(r9374660);
        mpfr_init(r9374661);
        mpfr_init_set_str(r9374662, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r9374663);
        mpfr_init(r9374664);
        mpfr_init(r9374665);
        mpfr_init_set_str(r9374666, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r9374667);
        mpfr_init(r9374668);
        mpfr_init(r9374669);
        mpfr_init_set_str(r9374670, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r9374671);
        mpfr_init(r9374672);
        mpfr_init(r9374673);
        mpfr_init_set_str(r9374674, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r9374675);
        mpfr_init(r9374676);
        mpfr_init(r9374677);
        mpfr_init_set_str(r9374678, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r9374679);
        mpfr_init(r9374680);
        mpfr_init(r9374681);
        mpfr_init_set_str(r9374682, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r9374683);
        mpfr_init(r9374684);
        mpfr_init(r9374685);
        mpfr_init_set_str(r9374686, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r9374687);
        mpfr_init(r9374688);
        mpfr_init(r9374689);
        mpfr_init_set_str(r9374690, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r9374691);
        mpfr_init(r9374692);
        mpfr_init(r9374693);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9374640, x, MPFR_RNDN);
        mpfr_mul(r9374641, r9374639, r9374640, MPFR_RNDN);
        mpfr_add(r9374642, r9374638, r9374641, MPFR_RNDN);
        ;
        mpfr_mul(r9374644, r9374640, r9374640, MPFR_RNDN);
        mpfr_mul(r9374645, r9374643, r9374644, MPFR_RNDN);
        mpfr_add(r9374646, r9374642, r9374645, MPFR_RNDN);
        ;
        mpfr_mul(r9374648, r9374644, r9374640, MPFR_RNDN);
        mpfr_mul(r9374649, r9374647, r9374648, MPFR_RNDN);
        mpfr_cbrt(r9374650, r9374649, MPFR_RNDN);
        mpfr_mul(r9374651, r9374650, r9374650, MPFR_RNDN);
        mpfr_mul(r9374652, r9374651, r9374650, MPFR_RNDN);
        mpfr_add(r9374653, r9374646, r9374652, MPFR_RNDN);
        ;
        mpfr_mul(r9374655, r9374648, r9374640, MPFR_RNDN);
        mpfr_mul(r9374656, r9374654, r9374655, MPFR_RNDN);
        mpfr_add(r9374657, r9374653, r9374656, MPFR_RNDN);
        ;
        mpfr_mul(r9374659, r9374655, r9374640, MPFR_RNDN);
        mpfr_mul(r9374660, r9374658, r9374659, MPFR_RNDN);
        mpfr_add(r9374661, r9374657, r9374660, MPFR_RNDN);
        ;
        mpfr_mul(r9374663, r9374659, r9374640, MPFR_RNDN);
        mpfr_mul(r9374664, r9374662, r9374663, MPFR_RNDN);
        mpfr_add(r9374665, r9374661, r9374664, MPFR_RNDN);
        ;
        mpfr_mul(r9374667, r9374663, r9374640, MPFR_RNDN);
        mpfr_mul(r9374668, r9374666, r9374667, MPFR_RNDN);
        mpfr_add(r9374669, r9374665, r9374668, MPFR_RNDN);
        ;
        mpfr_mul(r9374671, r9374667, r9374640, MPFR_RNDN);
        mpfr_mul(r9374672, r9374670, r9374671, MPFR_RNDN);
        mpfr_add(r9374673, r9374669, r9374672, MPFR_RNDN);
        ;
        mpfr_mul(r9374675, r9374671, r9374640, MPFR_RNDN);
        mpfr_mul(r9374676, r9374674, r9374675, MPFR_RNDN);
        mpfr_add(r9374677, r9374673, r9374676, MPFR_RNDN);
        ;
        mpfr_mul(r9374679, r9374675, r9374640, MPFR_RNDN);
        mpfr_mul(r9374680, r9374678, r9374679, MPFR_RNDN);
        mpfr_add(r9374681, r9374677, r9374680, MPFR_RNDN);
        ;
        mpfr_mul(r9374683, r9374679, r9374640, MPFR_RNDN);
        mpfr_mul(r9374684, r9374682, r9374683, MPFR_RNDN);
        mpfr_add(r9374685, r9374681, r9374684, MPFR_RNDN);
        ;
        mpfr_mul(r9374687, r9374683, r9374640, MPFR_RNDN);
        mpfr_mul(r9374688, r9374686, r9374687, MPFR_RNDN);
        mpfr_add(r9374689, r9374685, r9374688, MPFR_RNDN);
        ;
        mpfr_mul(r9374691, r9374687, r9374640, MPFR_RNDN);
        mpfr_mul(r9374692, r9374690, r9374691, MPFR_RNDN);
        mpfr_add(r9374693, r9374689, r9374692, MPFR_RNDN);
        return mpfr_get_d(r9374693, MPFR_RNDN);
}

static mpfr_t r9374694, r9374695, r9374696, r9374697, r9374698, r9374699, r9374700, r9374701, r9374702, r9374703, r9374704, r9374705, r9374706, r9374707, r9374708, r9374709, r9374710, r9374711, r9374712, r9374713, r9374714, r9374715, r9374716, r9374717, r9374718, r9374719, r9374720, r9374721, r9374722, r9374723, r9374724, r9374725, r9374726, r9374727, r9374728, r9374729, r9374730, r9374731, r9374732, r9374733, r9374734, r9374735, r9374736, r9374737, r9374738, r9374739, r9374740, r9374741, r9374742, r9374743, r9374744, r9374745, r9374746, r9374747, r9374748, r9374749;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9374694, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9374695, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r9374696);
        mpfr_init(r9374697);
        mpfr_init(r9374698);
        mpfr_init_set_str(r9374699, "76.5", 10, MPFR_RNDN);
        mpfr_init(r9374700);
        mpfr_init(r9374701);
        mpfr_init(r9374702);
        mpfr_init_set_str(r9374703, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r9374704);
        mpfr_init(r9374705);
        mpfr_init(r9374706);
        mpfr_init(r9374707);
        mpfr_init(r9374708);
        mpfr_init(r9374709);
        mpfr_init_set_str(r9374710, "127.5", 10, MPFR_RNDN);
        mpfr_init(r9374711);
        mpfr_init(r9374712);
        mpfr_init(r9374713);
        mpfr_init_set_str(r9374714, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r9374715);
        mpfr_init(r9374716);
        mpfr_init(r9374717);
        mpfr_init_set_str(r9374718, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r9374719);
        mpfr_init(r9374720);
        mpfr_init(r9374721);
        mpfr_init_set_str(r9374722, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r9374723);
        mpfr_init(r9374724);
        mpfr_init(r9374725);
        mpfr_init_set_str(r9374726, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r9374727);
        mpfr_init(r9374728);
        mpfr_init(r9374729);
        mpfr_init_set_str(r9374730, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r9374731);
        mpfr_init(r9374732);
        mpfr_init(r9374733);
        mpfr_init_set_str(r9374734, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r9374735);
        mpfr_init(r9374736);
        mpfr_init(r9374737);
        mpfr_init_set_str(r9374738, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r9374739);
        mpfr_init(r9374740);
        mpfr_init(r9374741);
        mpfr_init_set_str(r9374742, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r9374743);
        mpfr_init(r9374744);
        mpfr_init(r9374745);
        mpfr_init_set_str(r9374746, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r9374747);
        mpfr_init(r9374748);
        mpfr_init(r9374749);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9374696, x, MPFR_RNDN);
        mpfr_mul(r9374697, r9374695, r9374696, MPFR_RNDN);
        mpfr_add(r9374698, r9374694, r9374697, MPFR_RNDN);
        ;
        mpfr_mul(r9374700, r9374696, r9374696, MPFR_RNDN);
        mpfr_mul(r9374701, r9374699, r9374700, MPFR_RNDN);
        mpfr_add(r9374702, r9374698, r9374701, MPFR_RNDN);
        ;
        mpfr_mul(r9374704, r9374700, r9374696, MPFR_RNDN);
        mpfr_mul(r9374705, r9374703, r9374704, MPFR_RNDN);
        mpfr_cbrt(r9374706, r9374705, MPFR_RNDN);
        mpfr_mul(r9374707, r9374706, r9374706, MPFR_RNDN);
        mpfr_mul(r9374708, r9374707, r9374706, MPFR_RNDN);
        mpfr_add(r9374709, r9374702, r9374708, MPFR_RNDN);
        ;
        mpfr_mul(r9374711, r9374704, r9374696, MPFR_RNDN);
        mpfr_mul(r9374712, r9374710, r9374711, MPFR_RNDN);
        mpfr_add(r9374713, r9374709, r9374712, MPFR_RNDN);
        ;
        mpfr_mul(r9374715, r9374711, r9374696, MPFR_RNDN);
        mpfr_mul(r9374716, r9374714, r9374715, MPFR_RNDN);
        mpfr_add(r9374717, r9374713, r9374716, MPFR_RNDN);
        ;
        mpfr_mul(r9374719, r9374715, r9374696, MPFR_RNDN);
        mpfr_mul(r9374720, r9374718, r9374719, MPFR_RNDN);
        mpfr_add(r9374721, r9374717, r9374720, MPFR_RNDN);
        ;
        mpfr_mul(r9374723, r9374719, r9374696, MPFR_RNDN);
        mpfr_mul(r9374724, r9374722, r9374723, MPFR_RNDN);
        mpfr_add(r9374725, r9374721, r9374724, MPFR_RNDN);
        ;
        mpfr_mul(r9374727, r9374723, r9374696, MPFR_RNDN);
        mpfr_mul(r9374728, r9374726, r9374727, MPFR_RNDN);
        mpfr_add(r9374729, r9374725, r9374728, MPFR_RNDN);
        ;
        mpfr_mul(r9374731, r9374727, r9374696, MPFR_RNDN);
        mpfr_mul(r9374732, r9374730, r9374731, MPFR_RNDN);
        mpfr_add(r9374733, r9374729, r9374732, MPFR_RNDN);
        ;
        mpfr_mul(r9374735, r9374731, r9374696, MPFR_RNDN);
        mpfr_mul(r9374736, r9374734, r9374735, MPFR_RNDN);
        mpfr_add(r9374737, r9374733, r9374736, MPFR_RNDN);
        ;
        mpfr_mul(r9374739, r9374735, r9374696, MPFR_RNDN);
        mpfr_mul(r9374740, r9374738, r9374739, MPFR_RNDN);
        mpfr_add(r9374741, r9374737, r9374740, MPFR_RNDN);
        ;
        mpfr_mul(r9374743, r9374739, r9374696, MPFR_RNDN);
        mpfr_mul(r9374744, r9374742, r9374743, MPFR_RNDN);
        mpfr_add(r9374745, r9374741, r9374744, MPFR_RNDN);
        ;
        mpfr_mul(r9374747, r9374743, r9374696, MPFR_RNDN);
        mpfr_mul(r9374748, r9374746, r9374747, MPFR_RNDN);
        mpfr_add(r9374749, r9374745, r9374748, MPFR_RNDN);
        return mpfr_get_d(r9374749, MPFR_RNDN);
}

