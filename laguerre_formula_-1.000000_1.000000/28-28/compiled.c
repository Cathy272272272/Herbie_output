#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "28";

double f_if(float x) {
        float r20873313 = 1.0;
        float r20873314 = -28.0;
        float r20873315 = x;
        float r20873316 = r20873314 * r20873315;
        float r20873317 = r20873313 + r20873316;
        float r20873318 = 189.0;
        float r20873319 = r20873315 * r20873315;
        float r20873320 = r20873318 * r20873319;
        float r20873321 = r20873317 + r20873320;
        float r20873322 = -546.0;
        float r20873323 = r20873319 * r20873315;
        float r20873324 = r20873322 * r20873323;
        float r20873325 = r20873321 + r20873324;
        float r20873326 = 853.125;
        float r20873327 = r20873323 * r20873315;
        float r20873328 = r20873326 * r20873327;
        float r20873329 = r20873325 + r20873328;
        float r20873330 = -819.0;
        float r20873331 = r20873327 * r20873315;
        float r20873332 = r20873330 * r20873331;
        float r20873333 = r20873329 + r20873332;
        float r20873334 = 523.25;
        float r20873335 = r20873331 * r20873315;
        float r20873336 = r20873334 * r20873335;
        float r20873337 = r20873333 + r20873336;
        float r20873338 = -234.928571;
        float r20873339 = r20873335 * r20873315;
        float r20873340 = r20873338 * r20873339;
        float r20873341 = r20873337 + r20873340;
        float r20873342 = 77.085938;
        float r20873343 = r20873339 * r20873315;
        float r20873344 = r20873342 * r20873343;
        float r20873345 = r20873341 + r20873344;
        float r20873346 = -19.033565;
        float r20873347 = r20873343 * r20873315;
        float r20873348 = r20873346 * r20873347;
        float r20873349 = r20873345 + r20873348;
        float r20873350 = 3.616377;
        float r20873351 = r20873347 * r20873315;
        float r20873352 = r20873350 * r20873351;
        float r20873353 = r20873349 + r20873352;
        float r20873354 = -0.537973;
        float r20873355 = r20873351 * r20873315;
        float r20873356 = r20873354 * r20873355;
        float r20873357 = r20873353 + r20873356;
        float r20873358 = 0.063511;
        float r20873359 = r20873355 * r20873315;
        float r20873360 = r20873358 * r20873359;
        float r20873361 = r20873357 + r20873360;
        float r20873362 = -0.006013;
        float r20873363 = r20873359 * r20873315;
        float r20873364 = r20873362 * r20873363;
        float r20873365 = r20873361 + r20873364;
        float r20873366 = 0.00046;
        float r20873367 = r20873363 * r20873315;
        float r20873368 = r20873366 * r20873367;
        float r20873369 = r20873365 + r20873368;
        float r20873370 = -2.9e-05;
        float r20873371 = r20873367 * r20873315;
        float r20873372 = r20873370 * r20873371;
        float r20873373 = r20873369 + r20873372;
        float r20873374 = 1e-06;
        float r20873375 = r20873371 * r20873315;
        float r20873376 = r20873374 * r20873375;
        float r20873377 = r20873373 + r20873376;
        return r20873377;
}

double f_id(double x) {
        double r20873378 = 1.0;
        double r20873379 = -28.0;
        double r20873380 = x;
        double r20873381 = r20873379 * r20873380;
        double r20873382 = r20873378 + r20873381;
        double r20873383 = 189.0;
        double r20873384 = r20873380 * r20873380;
        double r20873385 = r20873383 * r20873384;
        double r20873386 = r20873382 + r20873385;
        double r20873387 = -546.0;
        double r20873388 = r20873384 * r20873380;
        double r20873389 = r20873387 * r20873388;
        double r20873390 = r20873386 + r20873389;
        double r20873391 = 853.125;
        double r20873392 = r20873388 * r20873380;
        double r20873393 = r20873391 * r20873392;
        double r20873394 = r20873390 + r20873393;
        double r20873395 = -819.0;
        double r20873396 = r20873392 * r20873380;
        double r20873397 = r20873395 * r20873396;
        double r20873398 = r20873394 + r20873397;
        double r20873399 = 523.25;
        double r20873400 = r20873396 * r20873380;
        double r20873401 = r20873399 * r20873400;
        double r20873402 = r20873398 + r20873401;
        double r20873403 = -234.928571;
        double r20873404 = r20873400 * r20873380;
        double r20873405 = r20873403 * r20873404;
        double r20873406 = r20873402 + r20873405;
        double r20873407 = 77.085938;
        double r20873408 = r20873404 * r20873380;
        double r20873409 = r20873407 * r20873408;
        double r20873410 = r20873406 + r20873409;
        double r20873411 = -19.033565;
        double r20873412 = r20873408 * r20873380;
        double r20873413 = r20873411 * r20873412;
        double r20873414 = r20873410 + r20873413;
        double r20873415 = 3.616377;
        double r20873416 = r20873412 * r20873380;
        double r20873417 = r20873415 * r20873416;
        double r20873418 = r20873414 + r20873417;
        double r20873419 = -0.537973;
        double r20873420 = r20873416 * r20873380;
        double r20873421 = r20873419 * r20873420;
        double r20873422 = r20873418 + r20873421;
        double r20873423 = 0.063511;
        double r20873424 = r20873420 * r20873380;
        double r20873425 = r20873423 * r20873424;
        double r20873426 = r20873422 + r20873425;
        double r20873427 = -0.006013;
        double r20873428 = r20873424 * r20873380;
        double r20873429 = r20873427 * r20873428;
        double r20873430 = r20873426 + r20873429;
        double r20873431 = 0.00046;
        double r20873432 = r20873428 * r20873380;
        double r20873433 = r20873431 * r20873432;
        double r20873434 = r20873430 + r20873433;
        double r20873435 = -2.9e-05;
        double r20873436 = r20873432 * r20873380;
        double r20873437 = r20873435 * r20873436;
        double r20873438 = r20873434 + r20873437;
        double r20873439 = 1e-06;
        double r20873440 = r20873436 * r20873380;
        double r20873441 = r20873439 * r20873440;
        double r20873442 = r20873438 + r20873441;
        return r20873442;
}


double f_of(float x) {
        float r20873443 = 853.125;
        float r20873444 = x;
        float r20873445 = r20873443 * r20873444;
        float r20873446 = 3;
        float r20873447 = pow(r20873444, r20873446);
        float r20873448 = r20873445 * r20873447;
        float r20873449 = r20873444 * r20873444;
        float r20873450 = r20873449 * r20873449;
        float r20873451 = -819.0;
        float r20873452 = r20873444 * r20873451;
        float r20873453 = r20873450 * r20873452;
        float r20873454 = r20873448 + r20873453;
        float r20873455 = -546.0;
        float r20873456 = r20873455 * r20873444;
        float r20873457 = r20873456 * r20873449;
        float r20873458 = 1.0;
        float r20873459 = r20873457 + r20873458;
        float r20873460 = -28.0;
        float r20873461 = 189.0;
        float r20873462 = r20873444 * r20873461;
        float r20873463 = r20873460 + r20873462;
        float r20873464 = r20873444 * r20873463;
        float r20873465 = r20873459 + r20873464;
        float r20873466 = r20873454 + r20873465;
        float r20873467 = 523.25;
        float r20873468 = r20873449 * r20873467;
        float r20873469 = r20873450 * r20873468;
        float r20873470 = r20873447 * r20873447;
        float r20873471 = 77.085938;
        float r20873472 = r20873449 * r20873471;
        float r20873473 = r20873470 * r20873472;
        float r20873474 = -234.928571;
        float r20873475 = r20873444 * r20873474;
        float r20873476 = r20873470 * r20873475;
        float r20873477 = r20873473 + r20873476;
        float r20873478 = r20873469 + r20873477;
        float r20873479 = r20873466 + r20873478;
        float r20873480 = r20873450 * r20873450;
        float r20873481 = -19.033565;
        float r20873482 = r20873444 * r20873481;
        float r20873483 = r20873480 * r20873482;
        float r20873484 = 3.616377;
        float r20873485 = r20873449 * r20873484;
        float r20873486 = r20873480 * r20873485;
        float r20873487 = r20873483 + r20873486;
        float r20873488 = r20873470 * r20873447;
        float r20873489 = -0.537973;
        float r20873490 = r20873449 * r20873489;
        float r20873491 = r20873488 * r20873490;
        float r20873492 = r20873470 * r20873450;
        float r20873493 = 0.063511;
        float r20873494 = r20873449 * r20873493;
        float r20873495 = r20873492 * r20873494;
        float r20873496 = r20873491 + r20873495;
        float r20873497 = r20873487 + r20873496;
        float r20873498 = r20873479 + r20873497;
        float r20873499 = r20873480 * r20873450;
        float r20873500 = 0.00046;
        float r20873501 = r20873449 * r20873500;
        float r20873502 = r20873499 * r20873501;
        float r20873503 = -0.006013;
        float r20873504 = r20873503 * r20873444;
        float r20873505 = r20873504 * r20873499;
        float r20873506 = r20873502 + r20873505;
        float r20873507 = r20873492 * r20873450;
        float r20873508 = 1e-06;
        float r20873509 = r20873449 * r20873508;
        float r20873510 = r20873507 * r20873509;
        float r20873511 = -2.9e-05;
        float r20873512 = r20873511 * r20873444;
        float r20873513 = r20873512 * r20873507;
        float r20873514 = r20873510 + r20873513;
        float r20873515 = r20873506 + r20873514;
        float r20873516 = r20873498 + r20873515;
        return r20873516;
}

double f_od(double x) {
        double r20873517 = 853.125;
        double r20873518 = x;
        double r20873519 = r20873517 * r20873518;
        double r20873520 = 3;
        double r20873521 = pow(r20873518, r20873520);
        double r20873522 = r20873519 * r20873521;
        double r20873523 = r20873518 * r20873518;
        double r20873524 = r20873523 * r20873523;
        double r20873525 = -819.0;
        double r20873526 = r20873518 * r20873525;
        double r20873527 = r20873524 * r20873526;
        double r20873528 = r20873522 + r20873527;
        double r20873529 = -546.0;
        double r20873530 = r20873529 * r20873518;
        double r20873531 = r20873530 * r20873523;
        double r20873532 = 1.0;
        double r20873533 = r20873531 + r20873532;
        double r20873534 = -28.0;
        double r20873535 = 189.0;
        double r20873536 = r20873518 * r20873535;
        double r20873537 = r20873534 + r20873536;
        double r20873538 = r20873518 * r20873537;
        double r20873539 = r20873533 + r20873538;
        double r20873540 = r20873528 + r20873539;
        double r20873541 = 523.25;
        double r20873542 = r20873523 * r20873541;
        double r20873543 = r20873524 * r20873542;
        double r20873544 = r20873521 * r20873521;
        double r20873545 = 77.085938;
        double r20873546 = r20873523 * r20873545;
        double r20873547 = r20873544 * r20873546;
        double r20873548 = -234.928571;
        double r20873549 = r20873518 * r20873548;
        double r20873550 = r20873544 * r20873549;
        double r20873551 = r20873547 + r20873550;
        double r20873552 = r20873543 + r20873551;
        double r20873553 = r20873540 + r20873552;
        double r20873554 = r20873524 * r20873524;
        double r20873555 = -19.033565;
        double r20873556 = r20873518 * r20873555;
        double r20873557 = r20873554 * r20873556;
        double r20873558 = 3.616377;
        double r20873559 = r20873523 * r20873558;
        double r20873560 = r20873554 * r20873559;
        double r20873561 = r20873557 + r20873560;
        double r20873562 = r20873544 * r20873521;
        double r20873563 = -0.537973;
        double r20873564 = r20873523 * r20873563;
        double r20873565 = r20873562 * r20873564;
        double r20873566 = r20873544 * r20873524;
        double r20873567 = 0.063511;
        double r20873568 = r20873523 * r20873567;
        double r20873569 = r20873566 * r20873568;
        double r20873570 = r20873565 + r20873569;
        double r20873571 = r20873561 + r20873570;
        double r20873572 = r20873553 + r20873571;
        double r20873573 = r20873554 * r20873524;
        double r20873574 = 0.00046;
        double r20873575 = r20873523 * r20873574;
        double r20873576 = r20873573 * r20873575;
        double r20873577 = -0.006013;
        double r20873578 = r20873577 * r20873518;
        double r20873579 = r20873578 * r20873573;
        double r20873580 = r20873576 + r20873579;
        double r20873581 = r20873566 * r20873524;
        double r20873582 = 1e-06;
        double r20873583 = r20873523 * r20873582;
        double r20873584 = r20873581 * r20873583;
        double r20873585 = -2.9e-05;
        double r20873586 = r20873585 * r20873518;
        double r20873587 = r20873586 * r20873581;
        double r20873588 = r20873584 + r20873587;
        double r20873589 = r20873580 + r20873588;
        double r20873590 = r20873572 + r20873589;
        return r20873590;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20873591, r20873592, r20873593, r20873594, r20873595, r20873596, r20873597, r20873598, r20873599, r20873600, r20873601, r20873602, r20873603, r20873604, r20873605, r20873606, r20873607, r20873608, r20873609, r20873610, r20873611, r20873612, r20873613, r20873614, r20873615, r20873616, r20873617, r20873618, r20873619, r20873620, r20873621, r20873622, r20873623, r20873624, r20873625, r20873626, r20873627, r20873628, r20873629, r20873630, r20873631, r20873632, r20873633, r20873634, r20873635, r20873636, r20873637, r20873638, r20873639, r20873640, r20873641, r20873642, r20873643, r20873644, r20873645, r20873646, r20873647, r20873648, r20873649, r20873650, r20873651, r20873652, r20873653, r20873654, r20873655;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20873591, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20873592, "-28.0", 10, MPFR_RNDN);
        mpfr_init(r20873593);
        mpfr_init(r20873594);
        mpfr_init(r20873595);
        mpfr_init_set_str(r20873596, "189.0", 10, MPFR_RNDN);
        mpfr_init(r20873597);
        mpfr_init(r20873598);
        mpfr_init(r20873599);
        mpfr_init_set_str(r20873600, "-546.0", 10, MPFR_RNDN);
        mpfr_init(r20873601);
        mpfr_init(r20873602);
        mpfr_init(r20873603);
        mpfr_init_set_str(r20873604, "853.125", 10, MPFR_RNDN);
        mpfr_init(r20873605);
        mpfr_init(r20873606);
        mpfr_init(r20873607);
        mpfr_init_set_str(r20873608, "-819.0", 10, MPFR_RNDN);
        mpfr_init(r20873609);
        mpfr_init(r20873610);
        mpfr_init(r20873611);
        mpfr_init_set_str(r20873612, "523.25", 10, MPFR_RNDN);
        mpfr_init(r20873613);
        mpfr_init(r20873614);
        mpfr_init(r20873615);
        mpfr_init_set_str(r20873616, "-234.928571", 10, MPFR_RNDN);
        mpfr_init(r20873617);
        mpfr_init(r20873618);
        mpfr_init(r20873619);
        mpfr_init_set_str(r20873620, "77.085938", 10, MPFR_RNDN);
        mpfr_init(r20873621);
        mpfr_init(r20873622);
        mpfr_init(r20873623);
        mpfr_init_set_str(r20873624, "-19.033565", 10, MPFR_RNDN);
        mpfr_init(r20873625);
        mpfr_init(r20873626);
        mpfr_init(r20873627);
        mpfr_init_set_str(r20873628, "3.616377", 10, MPFR_RNDN);
        mpfr_init(r20873629);
        mpfr_init(r20873630);
        mpfr_init(r20873631);
        mpfr_init_set_str(r20873632, "-0.537973", 10, MPFR_RNDN);
        mpfr_init(r20873633);
        mpfr_init(r20873634);
        mpfr_init(r20873635);
        mpfr_init_set_str(r20873636, "0.063511", 10, MPFR_RNDN);
        mpfr_init(r20873637);
        mpfr_init(r20873638);
        mpfr_init(r20873639);
        mpfr_init_set_str(r20873640, "-0.006013", 10, MPFR_RNDN);
        mpfr_init(r20873641);
        mpfr_init(r20873642);
        mpfr_init(r20873643);
        mpfr_init_set_str(r20873644, "0.00046", 10, MPFR_RNDN);
        mpfr_init(r20873645);
        mpfr_init(r20873646);
        mpfr_init(r20873647);
        mpfr_init_set_str(r20873648, "-2.9e-05", 10, MPFR_RNDN);
        mpfr_init(r20873649);
        mpfr_init(r20873650);
        mpfr_init(r20873651);
        mpfr_init_set_str(r20873652, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r20873653);
        mpfr_init(r20873654);
        mpfr_init(r20873655);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20873593, x, MPFR_RNDN);
        mpfr_mul(r20873594, r20873592, r20873593, MPFR_RNDN);
        mpfr_add(r20873595, r20873591, r20873594, MPFR_RNDN);
        ;
        mpfr_mul(r20873597, r20873593, r20873593, MPFR_RNDN);
        mpfr_mul(r20873598, r20873596, r20873597, MPFR_RNDN);
        mpfr_add(r20873599, r20873595, r20873598, MPFR_RNDN);
        ;
        mpfr_mul(r20873601, r20873597, r20873593, MPFR_RNDN);
        mpfr_mul(r20873602, r20873600, r20873601, MPFR_RNDN);
        mpfr_add(r20873603, r20873599, r20873602, MPFR_RNDN);
        ;
        mpfr_mul(r20873605, r20873601, r20873593, MPFR_RNDN);
        mpfr_mul(r20873606, r20873604, r20873605, MPFR_RNDN);
        mpfr_add(r20873607, r20873603, r20873606, MPFR_RNDN);
        ;
        mpfr_mul(r20873609, r20873605, r20873593, MPFR_RNDN);
        mpfr_mul(r20873610, r20873608, r20873609, MPFR_RNDN);
        mpfr_add(r20873611, r20873607, r20873610, MPFR_RNDN);
        ;
        mpfr_mul(r20873613, r20873609, r20873593, MPFR_RNDN);
        mpfr_mul(r20873614, r20873612, r20873613, MPFR_RNDN);
        mpfr_add(r20873615, r20873611, r20873614, MPFR_RNDN);
        ;
        mpfr_mul(r20873617, r20873613, r20873593, MPFR_RNDN);
        mpfr_mul(r20873618, r20873616, r20873617, MPFR_RNDN);
        mpfr_add(r20873619, r20873615, r20873618, MPFR_RNDN);
        ;
        mpfr_mul(r20873621, r20873617, r20873593, MPFR_RNDN);
        mpfr_mul(r20873622, r20873620, r20873621, MPFR_RNDN);
        mpfr_add(r20873623, r20873619, r20873622, MPFR_RNDN);
        ;
        mpfr_mul(r20873625, r20873621, r20873593, MPFR_RNDN);
        mpfr_mul(r20873626, r20873624, r20873625, MPFR_RNDN);
        mpfr_add(r20873627, r20873623, r20873626, MPFR_RNDN);
        ;
        mpfr_mul(r20873629, r20873625, r20873593, MPFR_RNDN);
        mpfr_mul(r20873630, r20873628, r20873629, MPFR_RNDN);
        mpfr_add(r20873631, r20873627, r20873630, MPFR_RNDN);
        ;
        mpfr_mul(r20873633, r20873629, r20873593, MPFR_RNDN);
        mpfr_mul(r20873634, r20873632, r20873633, MPFR_RNDN);
        mpfr_add(r20873635, r20873631, r20873634, MPFR_RNDN);
        ;
        mpfr_mul(r20873637, r20873633, r20873593, MPFR_RNDN);
        mpfr_mul(r20873638, r20873636, r20873637, MPFR_RNDN);
        mpfr_add(r20873639, r20873635, r20873638, MPFR_RNDN);
        ;
        mpfr_mul(r20873641, r20873637, r20873593, MPFR_RNDN);
        mpfr_mul(r20873642, r20873640, r20873641, MPFR_RNDN);
        mpfr_add(r20873643, r20873639, r20873642, MPFR_RNDN);
        ;
        mpfr_mul(r20873645, r20873641, r20873593, MPFR_RNDN);
        mpfr_mul(r20873646, r20873644, r20873645, MPFR_RNDN);
        mpfr_add(r20873647, r20873643, r20873646, MPFR_RNDN);
        ;
        mpfr_mul(r20873649, r20873645, r20873593, MPFR_RNDN);
        mpfr_mul(r20873650, r20873648, r20873649, MPFR_RNDN);
        mpfr_add(r20873651, r20873647, r20873650, MPFR_RNDN);
        ;
        mpfr_mul(r20873653, r20873649, r20873593, MPFR_RNDN);
        mpfr_mul(r20873654, r20873652, r20873653, MPFR_RNDN);
        mpfr_add(r20873655, r20873651, r20873654, MPFR_RNDN);
        return mpfr_get_d(r20873655, MPFR_RNDN);
}

static mpfr_t r20873656, r20873657, r20873658, r20873659, r20873660, r20873661, r20873662, r20873663, r20873664, r20873665, r20873666, r20873667, r20873668, r20873669, r20873670, r20873671, r20873672, r20873673, r20873674, r20873675, r20873676, r20873677, r20873678, r20873679, r20873680, r20873681, r20873682, r20873683, r20873684, r20873685, r20873686, r20873687, r20873688, r20873689, r20873690, r20873691, r20873692, r20873693, r20873694, r20873695, r20873696, r20873697, r20873698, r20873699, r20873700, r20873701, r20873702, r20873703, r20873704, r20873705, r20873706, r20873707, r20873708, r20873709, r20873710, r20873711, r20873712, r20873713, r20873714, r20873715, r20873716, r20873717, r20873718, r20873719, r20873720, r20873721, r20873722, r20873723, r20873724, r20873725, r20873726, r20873727, r20873728, r20873729;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20873656, "853.125", 10, MPFR_RNDN);
        mpfr_init(r20873657);
        mpfr_init(r20873658);
        mpfr_init_set_str(r20873659, "3", 10, MPFR_RNDN);
        mpfr_init(r20873660);
        mpfr_init(r20873661);
        mpfr_init(r20873662);
        mpfr_init(r20873663);
        mpfr_init_set_str(r20873664, "-819.0", 10, MPFR_RNDN);
        mpfr_init(r20873665);
        mpfr_init(r20873666);
        mpfr_init(r20873667);
        mpfr_init_set_str(r20873668, "-546.0", 10, MPFR_RNDN);
        mpfr_init(r20873669);
        mpfr_init(r20873670);
        mpfr_init_set_str(r20873671, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20873672);
        mpfr_init_set_str(r20873673, "-28.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20873674, "189.0", 10, MPFR_RNDN);
        mpfr_init(r20873675);
        mpfr_init(r20873676);
        mpfr_init(r20873677);
        mpfr_init(r20873678);
        mpfr_init(r20873679);
        mpfr_init_set_str(r20873680, "523.25", 10, MPFR_RNDN);
        mpfr_init(r20873681);
        mpfr_init(r20873682);
        mpfr_init(r20873683);
        mpfr_init_set_str(r20873684, "77.085938", 10, MPFR_RNDN);
        mpfr_init(r20873685);
        mpfr_init(r20873686);
        mpfr_init_set_str(r20873687, "-234.928571", 10, MPFR_RNDN);
        mpfr_init(r20873688);
        mpfr_init(r20873689);
        mpfr_init(r20873690);
        mpfr_init(r20873691);
        mpfr_init(r20873692);
        mpfr_init(r20873693);
        mpfr_init_set_str(r20873694, "-19.033565", 10, MPFR_RNDN);
        mpfr_init(r20873695);
        mpfr_init(r20873696);
        mpfr_init_set_str(r20873697, "3.616377", 10, MPFR_RNDN);
        mpfr_init(r20873698);
        mpfr_init(r20873699);
        mpfr_init(r20873700);
        mpfr_init(r20873701);
        mpfr_init_set_str(r20873702, "-0.537973", 10, MPFR_RNDN);
        mpfr_init(r20873703);
        mpfr_init(r20873704);
        mpfr_init(r20873705);
        mpfr_init_set_str(r20873706, "0.063511", 10, MPFR_RNDN);
        mpfr_init(r20873707);
        mpfr_init(r20873708);
        mpfr_init(r20873709);
        mpfr_init(r20873710);
        mpfr_init(r20873711);
        mpfr_init(r20873712);
        mpfr_init_set_str(r20873713, "0.00046", 10, MPFR_RNDN);
        mpfr_init(r20873714);
        mpfr_init(r20873715);
        mpfr_init_set_str(r20873716, "-0.006013", 10, MPFR_RNDN);
        mpfr_init(r20873717);
        mpfr_init(r20873718);
        mpfr_init(r20873719);
        mpfr_init(r20873720);
        mpfr_init_set_str(r20873721, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r20873722);
        mpfr_init(r20873723);
        mpfr_init_set_str(r20873724, "-2.9e-05", 10, MPFR_RNDN);
        mpfr_init(r20873725);
        mpfr_init(r20873726);
        mpfr_init(r20873727);
        mpfr_init(r20873728);
        mpfr_init(r20873729);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r20873657, x, MPFR_RNDN);
        mpfr_mul(r20873658, r20873656, r20873657, MPFR_RNDN);
        ;
        mpfr_pow(r20873660, r20873657, r20873659, MPFR_RNDN);
        mpfr_mul(r20873661, r20873658, r20873660, MPFR_RNDN);
        mpfr_mul(r20873662, r20873657, r20873657, MPFR_RNDN);
        mpfr_mul(r20873663, r20873662, r20873662, MPFR_RNDN);
        ;
        mpfr_mul(r20873665, r20873657, r20873664, MPFR_RNDN);
        mpfr_mul(r20873666, r20873663, r20873665, MPFR_RNDN);
        mpfr_add(r20873667, r20873661, r20873666, MPFR_RNDN);
        ;
        mpfr_mul(r20873669, r20873668, r20873657, MPFR_RNDN);
        mpfr_mul(r20873670, r20873669, r20873662, MPFR_RNDN);
        ;
        mpfr_add(r20873672, r20873670, r20873671, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20873675, r20873657, r20873674, MPFR_RNDN);
        mpfr_add(r20873676, r20873673, r20873675, MPFR_RNDN);
        mpfr_mul(r20873677, r20873657, r20873676, MPFR_RNDN);
        mpfr_add(r20873678, r20873672, r20873677, MPFR_RNDN);
        mpfr_add(r20873679, r20873667, r20873678, MPFR_RNDN);
        ;
        mpfr_mul(r20873681, r20873662, r20873680, MPFR_RNDN);
        mpfr_mul(r20873682, r20873663, r20873681, MPFR_RNDN);
        mpfr_mul(r20873683, r20873660, r20873660, MPFR_RNDN);
        ;
        mpfr_mul(r20873685, r20873662, r20873684, MPFR_RNDN);
        mpfr_mul(r20873686, r20873683, r20873685, MPFR_RNDN);
        ;
        mpfr_mul(r20873688, r20873657, r20873687, MPFR_RNDN);
        mpfr_mul(r20873689, r20873683, r20873688, MPFR_RNDN);
        mpfr_add(r20873690, r20873686, r20873689, MPFR_RNDN);
        mpfr_add(r20873691, r20873682, r20873690, MPFR_RNDN);
        mpfr_add(r20873692, r20873679, r20873691, MPFR_RNDN);
        mpfr_mul(r20873693, r20873663, r20873663, MPFR_RNDN);
        ;
        mpfr_mul(r20873695, r20873657, r20873694, MPFR_RNDN);
        mpfr_mul(r20873696, r20873693, r20873695, MPFR_RNDN);
        ;
        mpfr_mul(r20873698, r20873662, r20873697, MPFR_RNDN);
        mpfr_mul(r20873699, r20873693, r20873698, MPFR_RNDN);
        mpfr_add(r20873700, r20873696, r20873699, MPFR_RNDN);
        mpfr_mul(r20873701, r20873683, r20873660, MPFR_RNDN);
        ;
        mpfr_mul(r20873703, r20873662, r20873702, MPFR_RNDN);
        mpfr_mul(r20873704, r20873701, r20873703, MPFR_RNDN);
        mpfr_mul(r20873705, r20873683, r20873663, MPFR_RNDN);
        ;
        mpfr_mul(r20873707, r20873662, r20873706, MPFR_RNDN);
        mpfr_mul(r20873708, r20873705, r20873707, MPFR_RNDN);
        mpfr_add(r20873709, r20873704, r20873708, MPFR_RNDN);
        mpfr_add(r20873710, r20873700, r20873709, MPFR_RNDN);
        mpfr_add(r20873711, r20873692, r20873710, MPFR_RNDN);
        mpfr_mul(r20873712, r20873693, r20873663, MPFR_RNDN);
        ;
        mpfr_mul(r20873714, r20873662, r20873713, MPFR_RNDN);
        mpfr_mul(r20873715, r20873712, r20873714, MPFR_RNDN);
        ;
        mpfr_mul(r20873717, r20873716, r20873657, MPFR_RNDN);
        mpfr_mul(r20873718, r20873717, r20873712, MPFR_RNDN);
        mpfr_add(r20873719, r20873715, r20873718, MPFR_RNDN);
        mpfr_mul(r20873720, r20873705, r20873663, MPFR_RNDN);
        ;
        mpfr_mul(r20873722, r20873662, r20873721, MPFR_RNDN);
        mpfr_mul(r20873723, r20873720, r20873722, MPFR_RNDN);
        ;
        mpfr_mul(r20873725, r20873724, r20873657, MPFR_RNDN);
        mpfr_mul(r20873726, r20873725, r20873720, MPFR_RNDN);
        mpfr_add(r20873727, r20873723, r20873726, MPFR_RNDN);
        mpfr_add(r20873728, r20873719, r20873727, MPFR_RNDN);
        mpfr_add(r20873729, r20873711, r20873728, MPFR_RNDN);
        return mpfr_get_d(r20873729, MPFR_RNDN);
}

static mpfr_t r20873730, r20873731, r20873732, r20873733, r20873734, r20873735, r20873736, r20873737, r20873738, r20873739, r20873740, r20873741, r20873742, r20873743, r20873744, r20873745, r20873746, r20873747, r20873748, r20873749, r20873750, r20873751, r20873752, r20873753, r20873754, r20873755, r20873756, r20873757, r20873758, r20873759, r20873760, r20873761, r20873762, r20873763, r20873764, r20873765, r20873766, r20873767, r20873768, r20873769, r20873770, r20873771, r20873772, r20873773, r20873774, r20873775, r20873776, r20873777, r20873778, r20873779, r20873780, r20873781, r20873782, r20873783, r20873784, r20873785, r20873786, r20873787, r20873788, r20873789, r20873790, r20873791, r20873792, r20873793, r20873794, r20873795, r20873796, r20873797, r20873798, r20873799, r20873800, r20873801, r20873802, r20873803;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20873730, "853.125", 10, MPFR_RNDN);
        mpfr_init(r20873731);
        mpfr_init(r20873732);
        mpfr_init_set_str(r20873733, "3", 10, MPFR_RNDN);
        mpfr_init(r20873734);
        mpfr_init(r20873735);
        mpfr_init(r20873736);
        mpfr_init(r20873737);
        mpfr_init_set_str(r20873738, "-819.0", 10, MPFR_RNDN);
        mpfr_init(r20873739);
        mpfr_init(r20873740);
        mpfr_init(r20873741);
        mpfr_init_set_str(r20873742, "-546.0", 10, MPFR_RNDN);
        mpfr_init(r20873743);
        mpfr_init(r20873744);
        mpfr_init_set_str(r20873745, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20873746);
        mpfr_init_set_str(r20873747, "-28.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20873748, "189.0", 10, MPFR_RNDN);
        mpfr_init(r20873749);
        mpfr_init(r20873750);
        mpfr_init(r20873751);
        mpfr_init(r20873752);
        mpfr_init(r20873753);
        mpfr_init_set_str(r20873754, "523.25", 10, MPFR_RNDN);
        mpfr_init(r20873755);
        mpfr_init(r20873756);
        mpfr_init(r20873757);
        mpfr_init_set_str(r20873758, "77.085938", 10, MPFR_RNDN);
        mpfr_init(r20873759);
        mpfr_init(r20873760);
        mpfr_init_set_str(r20873761, "-234.928571", 10, MPFR_RNDN);
        mpfr_init(r20873762);
        mpfr_init(r20873763);
        mpfr_init(r20873764);
        mpfr_init(r20873765);
        mpfr_init(r20873766);
        mpfr_init(r20873767);
        mpfr_init_set_str(r20873768, "-19.033565", 10, MPFR_RNDN);
        mpfr_init(r20873769);
        mpfr_init(r20873770);
        mpfr_init_set_str(r20873771, "3.616377", 10, MPFR_RNDN);
        mpfr_init(r20873772);
        mpfr_init(r20873773);
        mpfr_init(r20873774);
        mpfr_init(r20873775);
        mpfr_init_set_str(r20873776, "-0.537973", 10, MPFR_RNDN);
        mpfr_init(r20873777);
        mpfr_init(r20873778);
        mpfr_init(r20873779);
        mpfr_init_set_str(r20873780, "0.063511", 10, MPFR_RNDN);
        mpfr_init(r20873781);
        mpfr_init(r20873782);
        mpfr_init(r20873783);
        mpfr_init(r20873784);
        mpfr_init(r20873785);
        mpfr_init(r20873786);
        mpfr_init_set_str(r20873787, "0.00046", 10, MPFR_RNDN);
        mpfr_init(r20873788);
        mpfr_init(r20873789);
        mpfr_init_set_str(r20873790, "-0.006013", 10, MPFR_RNDN);
        mpfr_init(r20873791);
        mpfr_init(r20873792);
        mpfr_init(r20873793);
        mpfr_init(r20873794);
        mpfr_init_set_str(r20873795, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r20873796);
        mpfr_init(r20873797);
        mpfr_init_set_str(r20873798, "-2.9e-05", 10, MPFR_RNDN);
        mpfr_init(r20873799);
        mpfr_init(r20873800);
        mpfr_init(r20873801);
        mpfr_init(r20873802);
        mpfr_init(r20873803);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r20873731, x, MPFR_RNDN);
        mpfr_mul(r20873732, r20873730, r20873731, MPFR_RNDN);
        ;
        mpfr_pow(r20873734, r20873731, r20873733, MPFR_RNDN);
        mpfr_mul(r20873735, r20873732, r20873734, MPFR_RNDN);
        mpfr_mul(r20873736, r20873731, r20873731, MPFR_RNDN);
        mpfr_mul(r20873737, r20873736, r20873736, MPFR_RNDN);
        ;
        mpfr_mul(r20873739, r20873731, r20873738, MPFR_RNDN);
        mpfr_mul(r20873740, r20873737, r20873739, MPFR_RNDN);
        mpfr_add(r20873741, r20873735, r20873740, MPFR_RNDN);
        ;
        mpfr_mul(r20873743, r20873742, r20873731, MPFR_RNDN);
        mpfr_mul(r20873744, r20873743, r20873736, MPFR_RNDN);
        ;
        mpfr_add(r20873746, r20873744, r20873745, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20873749, r20873731, r20873748, MPFR_RNDN);
        mpfr_add(r20873750, r20873747, r20873749, MPFR_RNDN);
        mpfr_mul(r20873751, r20873731, r20873750, MPFR_RNDN);
        mpfr_add(r20873752, r20873746, r20873751, MPFR_RNDN);
        mpfr_add(r20873753, r20873741, r20873752, MPFR_RNDN);
        ;
        mpfr_mul(r20873755, r20873736, r20873754, MPFR_RNDN);
        mpfr_mul(r20873756, r20873737, r20873755, MPFR_RNDN);
        mpfr_mul(r20873757, r20873734, r20873734, MPFR_RNDN);
        ;
        mpfr_mul(r20873759, r20873736, r20873758, MPFR_RNDN);
        mpfr_mul(r20873760, r20873757, r20873759, MPFR_RNDN);
        ;
        mpfr_mul(r20873762, r20873731, r20873761, MPFR_RNDN);
        mpfr_mul(r20873763, r20873757, r20873762, MPFR_RNDN);
        mpfr_add(r20873764, r20873760, r20873763, MPFR_RNDN);
        mpfr_add(r20873765, r20873756, r20873764, MPFR_RNDN);
        mpfr_add(r20873766, r20873753, r20873765, MPFR_RNDN);
        mpfr_mul(r20873767, r20873737, r20873737, MPFR_RNDN);
        ;
        mpfr_mul(r20873769, r20873731, r20873768, MPFR_RNDN);
        mpfr_mul(r20873770, r20873767, r20873769, MPFR_RNDN);
        ;
        mpfr_mul(r20873772, r20873736, r20873771, MPFR_RNDN);
        mpfr_mul(r20873773, r20873767, r20873772, MPFR_RNDN);
        mpfr_add(r20873774, r20873770, r20873773, MPFR_RNDN);
        mpfr_mul(r20873775, r20873757, r20873734, MPFR_RNDN);
        ;
        mpfr_mul(r20873777, r20873736, r20873776, MPFR_RNDN);
        mpfr_mul(r20873778, r20873775, r20873777, MPFR_RNDN);
        mpfr_mul(r20873779, r20873757, r20873737, MPFR_RNDN);
        ;
        mpfr_mul(r20873781, r20873736, r20873780, MPFR_RNDN);
        mpfr_mul(r20873782, r20873779, r20873781, MPFR_RNDN);
        mpfr_add(r20873783, r20873778, r20873782, MPFR_RNDN);
        mpfr_add(r20873784, r20873774, r20873783, MPFR_RNDN);
        mpfr_add(r20873785, r20873766, r20873784, MPFR_RNDN);
        mpfr_mul(r20873786, r20873767, r20873737, MPFR_RNDN);
        ;
        mpfr_mul(r20873788, r20873736, r20873787, MPFR_RNDN);
        mpfr_mul(r20873789, r20873786, r20873788, MPFR_RNDN);
        ;
        mpfr_mul(r20873791, r20873790, r20873731, MPFR_RNDN);
        mpfr_mul(r20873792, r20873791, r20873786, MPFR_RNDN);
        mpfr_add(r20873793, r20873789, r20873792, MPFR_RNDN);
        mpfr_mul(r20873794, r20873779, r20873737, MPFR_RNDN);
        ;
        mpfr_mul(r20873796, r20873736, r20873795, MPFR_RNDN);
        mpfr_mul(r20873797, r20873794, r20873796, MPFR_RNDN);
        ;
        mpfr_mul(r20873799, r20873798, r20873731, MPFR_RNDN);
        mpfr_mul(r20873800, r20873799, r20873794, MPFR_RNDN);
        mpfr_add(r20873801, r20873797, r20873800, MPFR_RNDN);
        mpfr_add(r20873802, r20873793, r20873801, MPFR_RNDN);
        mpfr_add(r20873803, r20873785, r20873802, MPFR_RNDN);
        return mpfr_get_d(r20873803, MPFR_RNDN);
}

