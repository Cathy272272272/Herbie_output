#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "19";

double f_if(float x) {
        float r8100327 = -3.523941;
        float r8100328 = x;
        float r8100329 = r8100327 * r8100328;
        float r8100330 = 222.008286;
        float r8100331 = r8100328 * r8100328;
        float r8100332 = r8100331 * r8100328;
        float r8100333 = r8100330 * r8100332;
        float r8100334 = r8100329 + r8100333;
        float r8100335 = -4084.952454;
        float r8100336 = r8100332 * r8100328;
        float r8100337 = r8100336 * r8100328;
        float r8100338 = r8100335 * r8100337;
        float r8100339 = r8100334 + r8100338;
        float r8100340 = 34041.270447;
        float r8100341 = r8100337 * r8100328;
        float r8100342 = r8100341 * r8100328;
        float r8100343 = r8100340 * r8100342;
        float r8100344 = r8100339 + r8100343;
        float r8100345 = -153185.71701;
        float r8100346 = r8100342 * r8100328;
        float r8100347 = r8100346 * r8100328;
        float r8100348 = r8100345 * r8100347;
        float r8100349 = r8100344 + r8100348;
        float r8100350 = 403853.253937;
        float r8100351 = r8100347 * r8100328;
        float r8100352 = r8100351 * r8100328;
        float r8100353 = r8100350 * r8100352;
        float r8100354 = r8100349 + r8100353;
        float r8100355 = -642023.121643;
        float r8100356 = r8100352 * r8100328;
        float r8100357 = r8100356 * r8100328;
        float r8100358 = r8100355 * r8100357;
        float r8100359 = r8100354 + r8100358;
        float r8100360 = 605336.086121;
        float r8100361 = r8100357 * r8100328;
        float r8100362 = r8100361 * r8100328;
        float r8100363 = r8100360 * r8100362;
        float r8100364 = r8100359 + r8100363;
        float r8100365 = -311570.044327;
        float r8100366 = r8100362 * r8100328;
        float r8100367 = r8100366 * r8100328;
        float r8100368 = r8100365 * r8100367;
        float r8100369 = r8100364 + r8100368;
        float r8100370 = 67415.740585;
        float r8100371 = r8100367 * r8100328;
        float r8100372 = r8100371 * r8100328;
        float r8100373 = r8100370 * r8100372;
        float r8100374 = r8100369 + r8100373;
        return r8100374;
}

double f_id(double x) {
        double r8100375 = -3.523941;
        double r8100376 = x;
        double r8100377 = r8100375 * r8100376;
        double r8100378 = 222.008286;
        double r8100379 = r8100376 * r8100376;
        double r8100380 = r8100379 * r8100376;
        double r8100381 = r8100378 * r8100380;
        double r8100382 = r8100377 + r8100381;
        double r8100383 = -4084.952454;
        double r8100384 = r8100380 * r8100376;
        double r8100385 = r8100384 * r8100376;
        double r8100386 = r8100383 * r8100385;
        double r8100387 = r8100382 + r8100386;
        double r8100388 = 34041.270447;
        double r8100389 = r8100385 * r8100376;
        double r8100390 = r8100389 * r8100376;
        double r8100391 = r8100388 * r8100390;
        double r8100392 = r8100387 + r8100391;
        double r8100393 = -153185.71701;
        double r8100394 = r8100390 * r8100376;
        double r8100395 = r8100394 * r8100376;
        double r8100396 = r8100393 * r8100395;
        double r8100397 = r8100392 + r8100396;
        double r8100398 = 403853.253937;
        double r8100399 = r8100395 * r8100376;
        double r8100400 = r8100399 * r8100376;
        double r8100401 = r8100398 * r8100400;
        double r8100402 = r8100397 + r8100401;
        double r8100403 = -642023.121643;
        double r8100404 = r8100400 * r8100376;
        double r8100405 = r8100404 * r8100376;
        double r8100406 = r8100403 * r8100405;
        double r8100407 = r8100402 + r8100406;
        double r8100408 = 605336.086121;
        double r8100409 = r8100405 * r8100376;
        double r8100410 = r8100409 * r8100376;
        double r8100411 = r8100408 * r8100410;
        double r8100412 = r8100407 + r8100411;
        double r8100413 = -311570.044327;
        double r8100414 = r8100410 * r8100376;
        double r8100415 = r8100414 * r8100376;
        double r8100416 = r8100413 * r8100415;
        double r8100417 = r8100412 + r8100416;
        double r8100418 = 67415.740585;
        double r8100419 = r8100415 * r8100376;
        double r8100420 = r8100419 * r8100376;
        double r8100421 = r8100418 * r8100420;
        double r8100422 = r8100417 + r8100421;
        return r8100422;
}


double f_of(float x) {
        float r8100423 = x;
        float r8100424 = r8100423 * r8100423;
        float r8100425 = r8100424 * r8100424;
        float r8100426 = 3;
        float r8100427 = pow(r8100423, r8100426);
        float r8100428 = r8100424 * r8100427;
        float r8100429 = r8100425 * r8100428;
        float r8100430 = r8100429 * r8100425;
        float r8100431 = r8100425 * r8100430;
        float r8100432 = -311570.044327;
        float r8100433 = 67415.740585;
        float r8100434 = r8100433 * r8100424;
        float r8100435 = r8100432 + r8100434;
        float r8100436 = r8100431 * r8100435;
        float r8100437 = 605336.086121;
        float r8100438 = r8100437 * r8100424;
        float r8100439 = -642023.121643;
        float r8100440 = r8100438 + r8100439;
        float r8100441 = r8100430 * r8100440;
        float r8100442 = 34041.270447;
        float r8100443 = r8100423 * r8100442;
        float r8100444 = r8100443 * r8100424;
        float r8100445 = r8100444 * r8100425;
        float r8100446 = -4084.952454;
        float r8100447 = r8100446 * r8100423;
        float r8100448 = r8100447 * r8100424;
        float r8100449 = r8100448 * r8100424;
        float r8100450 = r8100445 + r8100449;
        float r8100451 = 403853.253937;
        float r8100452 = r8100424 * r8100451;
        float r8100453 = -153185.71701;
        float r8100454 = r8100452 + r8100453;
        float r8100455 = r8100429 * r8100454;
        float r8100456 = r8100450 + r8100455;
        float r8100457 = -3.523941;
        float r8100458 = r8100457 * r8100423;
        float r8100459 = -222.008286;
        float r8100460 = -1;
        float r8100461 = r8100460 / r8100423;
        float r8100462 = pow(r8100461, r8100426);
        float r8100463 = r8100459 / r8100462;
        float r8100464 = r8100458 + r8100463;
        float r8100465 = r8100456 + r8100464;
        float r8100466 = r8100441 + r8100465;
        float r8100467 = r8100436 + r8100466;
        return r8100467;
}

double f_od(double x) {
        double r8100468 = x;
        double r8100469 = r8100468 * r8100468;
        double r8100470 = r8100469 * r8100469;
        double r8100471 = 3;
        double r8100472 = pow(r8100468, r8100471);
        double r8100473 = r8100469 * r8100472;
        double r8100474 = r8100470 * r8100473;
        double r8100475 = r8100474 * r8100470;
        double r8100476 = r8100470 * r8100475;
        double r8100477 = -311570.044327;
        double r8100478 = 67415.740585;
        double r8100479 = r8100478 * r8100469;
        double r8100480 = r8100477 + r8100479;
        double r8100481 = r8100476 * r8100480;
        double r8100482 = 605336.086121;
        double r8100483 = r8100482 * r8100469;
        double r8100484 = -642023.121643;
        double r8100485 = r8100483 + r8100484;
        double r8100486 = r8100475 * r8100485;
        double r8100487 = 34041.270447;
        double r8100488 = r8100468 * r8100487;
        double r8100489 = r8100488 * r8100469;
        double r8100490 = r8100489 * r8100470;
        double r8100491 = -4084.952454;
        double r8100492 = r8100491 * r8100468;
        double r8100493 = r8100492 * r8100469;
        double r8100494 = r8100493 * r8100469;
        double r8100495 = r8100490 + r8100494;
        double r8100496 = 403853.253937;
        double r8100497 = r8100469 * r8100496;
        double r8100498 = -153185.71701;
        double r8100499 = r8100497 + r8100498;
        double r8100500 = r8100474 * r8100499;
        double r8100501 = r8100495 + r8100500;
        double r8100502 = -3.523941;
        double r8100503 = r8100502 * r8100468;
        double r8100504 = -222.008286;
        double r8100505 = -1;
        double r8100506 = r8100505 / r8100468;
        double r8100507 = pow(r8100506, r8100471);
        double r8100508 = r8100504 / r8100507;
        double r8100509 = r8100503 + r8100508;
        double r8100510 = r8100501 + r8100509;
        double r8100511 = r8100486 + r8100510;
        double r8100512 = r8100481 + r8100511;
        return r8100512;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8100513, r8100514, r8100515, r8100516, r8100517, r8100518, r8100519, r8100520, r8100521, r8100522, r8100523, r8100524, r8100525, r8100526, r8100527, r8100528, r8100529, r8100530, r8100531, r8100532, r8100533, r8100534, r8100535, r8100536, r8100537, r8100538, r8100539, r8100540, r8100541, r8100542, r8100543, r8100544, r8100545, r8100546, r8100547, r8100548, r8100549, r8100550, r8100551, r8100552, r8100553, r8100554, r8100555, r8100556, r8100557, r8100558, r8100559, r8100560;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8100513, "-3.523941", 10, MPFR_RNDN);
        mpfr_init(r8100514);
        mpfr_init(r8100515);
        mpfr_init_set_str(r8100516, "222.008286", 10, MPFR_RNDN);
        mpfr_init(r8100517);
        mpfr_init(r8100518);
        mpfr_init(r8100519);
        mpfr_init(r8100520);
        mpfr_init_set_str(r8100521, "-4084.952454", 10, MPFR_RNDN);
        mpfr_init(r8100522);
        mpfr_init(r8100523);
        mpfr_init(r8100524);
        mpfr_init(r8100525);
        mpfr_init_set_str(r8100526, "34041.270447", 10, MPFR_RNDN);
        mpfr_init(r8100527);
        mpfr_init(r8100528);
        mpfr_init(r8100529);
        mpfr_init(r8100530);
        mpfr_init_set_str(r8100531, "-153185.71701", 10, MPFR_RNDN);
        mpfr_init(r8100532);
        mpfr_init(r8100533);
        mpfr_init(r8100534);
        mpfr_init(r8100535);
        mpfr_init_set_str(r8100536, "403853.253937", 10, MPFR_RNDN);
        mpfr_init(r8100537);
        mpfr_init(r8100538);
        mpfr_init(r8100539);
        mpfr_init(r8100540);
        mpfr_init_set_str(r8100541, "-642023.121643", 10, MPFR_RNDN);
        mpfr_init(r8100542);
        mpfr_init(r8100543);
        mpfr_init(r8100544);
        mpfr_init(r8100545);
        mpfr_init_set_str(r8100546, "605336.086121", 10, MPFR_RNDN);
        mpfr_init(r8100547);
        mpfr_init(r8100548);
        mpfr_init(r8100549);
        mpfr_init(r8100550);
        mpfr_init_set_str(r8100551, "-311570.044327", 10, MPFR_RNDN);
        mpfr_init(r8100552);
        mpfr_init(r8100553);
        mpfr_init(r8100554);
        mpfr_init(r8100555);
        mpfr_init_set_str(r8100556, "67415.740585", 10, MPFR_RNDN);
        mpfr_init(r8100557);
        mpfr_init(r8100558);
        mpfr_init(r8100559);
        mpfr_init(r8100560);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8100514, x, MPFR_RNDN);
        mpfr_mul(r8100515, r8100513, r8100514, MPFR_RNDN);
        ;
        mpfr_mul(r8100517, r8100514, r8100514, MPFR_RNDN);
        mpfr_mul(r8100518, r8100517, r8100514, MPFR_RNDN);
        mpfr_mul(r8100519, r8100516, r8100518, MPFR_RNDN);
        mpfr_add(r8100520, r8100515, r8100519, MPFR_RNDN);
        ;
        mpfr_mul(r8100522, r8100518, r8100514, MPFR_RNDN);
        mpfr_mul(r8100523, r8100522, r8100514, MPFR_RNDN);
        mpfr_mul(r8100524, r8100521, r8100523, MPFR_RNDN);
        mpfr_add(r8100525, r8100520, r8100524, MPFR_RNDN);
        ;
        mpfr_mul(r8100527, r8100523, r8100514, MPFR_RNDN);
        mpfr_mul(r8100528, r8100527, r8100514, MPFR_RNDN);
        mpfr_mul(r8100529, r8100526, r8100528, MPFR_RNDN);
        mpfr_add(r8100530, r8100525, r8100529, MPFR_RNDN);
        ;
        mpfr_mul(r8100532, r8100528, r8100514, MPFR_RNDN);
        mpfr_mul(r8100533, r8100532, r8100514, MPFR_RNDN);
        mpfr_mul(r8100534, r8100531, r8100533, MPFR_RNDN);
        mpfr_add(r8100535, r8100530, r8100534, MPFR_RNDN);
        ;
        mpfr_mul(r8100537, r8100533, r8100514, MPFR_RNDN);
        mpfr_mul(r8100538, r8100537, r8100514, MPFR_RNDN);
        mpfr_mul(r8100539, r8100536, r8100538, MPFR_RNDN);
        mpfr_add(r8100540, r8100535, r8100539, MPFR_RNDN);
        ;
        mpfr_mul(r8100542, r8100538, r8100514, MPFR_RNDN);
        mpfr_mul(r8100543, r8100542, r8100514, MPFR_RNDN);
        mpfr_mul(r8100544, r8100541, r8100543, MPFR_RNDN);
        mpfr_add(r8100545, r8100540, r8100544, MPFR_RNDN);
        ;
        mpfr_mul(r8100547, r8100543, r8100514, MPFR_RNDN);
        mpfr_mul(r8100548, r8100547, r8100514, MPFR_RNDN);
        mpfr_mul(r8100549, r8100546, r8100548, MPFR_RNDN);
        mpfr_add(r8100550, r8100545, r8100549, MPFR_RNDN);
        ;
        mpfr_mul(r8100552, r8100548, r8100514, MPFR_RNDN);
        mpfr_mul(r8100553, r8100552, r8100514, MPFR_RNDN);
        mpfr_mul(r8100554, r8100551, r8100553, MPFR_RNDN);
        mpfr_add(r8100555, r8100550, r8100554, MPFR_RNDN);
        ;
        mpfr_mul(r8100557, r8100553, r8100514, MPFR_RNDN);
        mpfr_mul(r8100558, r8100557, r8100514, MPFR_RNDN);
        mpfr_mul(r8100559, r8100556, r8100558, MPFR_RNDN);
        mpfr_add(r8100560, r8100555, r8100559, MPFR_RNDN);
        return mpfr_get_d(r8100560, MPFR_RNDN);
}

static mpfr_t r8100561, r8100562, r8100563, r8100564, r8100565, r8100566, r8100567, r8100568, r8100569, r8100570, r8100571, r8100572, r8100573, r8100574, r8100575, r8100576, r8100577, r8100578, r8100579, r8100580, r8100581, r8100582, r8100583, r8100584, r8100585, r8100586, r8100587, r8100588, r8100589, r8100590, r8100591, r8100592, r8100593, r8100594, r8100595, r8100596, r8100597, r8100598, r8100599, r8100600, r8100601, r8100602, r8100603, r8100604, r8100605;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8100561);
        mpfr_init(r8100562);
        mpfr_init(r8100563);
        mpfr_init_set_str(r8100564, "3", 10, MPFR_RNDN);
        mpfr_init(r8100565);
        mpfr_init(r8100566);
        mpfr_init(r8100567);
        mpfr_init(r8100568);
        mpfr_init(r8100569);
        mpfr_init_set_str(r8100570, "-311570.044327", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100571, "67415.740585", 10, MPFR_RNDN);
        mpfr_init(r8100572);
        mpfr_init(r8100573);
        mpfr_init(r8100574);
        mpfr_init_set_str(r8100575, "605336.086121", 10, MPFR_RNDN);
        mpfr_init(r8100576);
        mpfr_init_set_str(r8100577, "-642023.121643", 10, MPFR_RNDN);
        mpfr_init(r8100578);
        mpfr_init(r8100579);
        mpfr_init_set_str(r8100580, "34041.270447", 10, MPFR_RNDN);
        mpfr_init(r8100581);
        mpfr_init(r8100582);
        mpfr_init(r8100583);
        mpfr_init_set_str(r8100584, "-4084.952454", 10, MPFR_RNDN);
        mpfr_init(r8100585);
        mpfr_init(r8100586);
        mpfr_init(r8100587);
        mpfr_init(r8100588);
        mpfr_init_set_str(r8100589, "403853.253937", 10, MPFR_RNDN);
        mpfr_init(r8100590);
        mpfr_init_set_str(r8100591, "-153185.71701", 10, MPFR_RNDN);
        mpfr_init(r8100592);
        mpfr_init(r8100593);
        mpfr_init(r8100594);
        mpfr_init_set_str(r8100595, "-3.523941", 10, MPFR_RNDN);
        mpfr_init(r8100596);
        mpfr_init_set_str(r8100597, "-222.008286", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100598, "-1", 10, MPFR_RNDN);
        mpfr_init(r8100599);
        mpfr_init(r8100600);
        mpfr_init(r8100601);
        mpfr_init(r8100602);
        mpfr_init(r8100603);
        mpfr_init(r8100604);
        mpfr_init(r8100605);
}

double f_fm(double x) {
        mpfr_set_d(r8100561, x, MPFR_RNDN);
        mpfr_mul(r8100562, r8100561, r8100561, MPFR_RNDN);
        mpfr_mul(r8100563, r8100562, r8100562, MPFR_RNDN);
        ;
        mpfr_pow(r8100565, r8100561, r8100564, MPFR_RNDN);
        mpfr_mul(r8100566, r8100562, r8100565, MPFR_RNDN);
        mpfr_mul(r8100567, r8100563, r8100566, MPFR_RNDN);
        mpfr_mul(r8100568, r8100567, r8100563, MPFR_RNDN);
        mpfr_mul(r8100569, r8100563, r8100568, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8100572, r8100571, r8100562, MPFR_RNDN);
        mpfr_add(r8100573, r8100570, r8100572, MPFR_RNDN);
        mpfr_mul(r8100574, r8100569, r8100573, MPFR_RNDN);
        ;
        mpfr_mul(r8100576, r8100575, r8100562, MPFR_RNDN);
        ;
        mpfr_add(r8100578, r8100576, r8100577, MPFR_RNDN);
        mpfr_mul(r8100579, r8100568, r8100578, MPFR_RNDN);
        ;
        mpfr_mul(r8100581, r8100561, r8100580, MPFR_RNDN);
        mpfr_mul(r8100582, r8100581, r8100562, MPFR_RNDN);
        mpfr_mul(r8100583, r8100582, r8100563, MPFR_RNDN);
        ;
        mpfr_mul(r8100585, r8100584, r8100561, MPFR_RNDN);
        mpfr_mul(r8100586, r8100585, r8100562, MPFR_RNDN);
        mpfr_mul(r8100587, r8100586, r8100562, MPFR_RNDN);
        mpfr_add(r8100588, r8100583, r8100587, MPFR_RNDN);
        ;
        mpfr_mul(r8100590, r8100562, r8100589, MPFR_RNDN);
        ;
        mpfr_add(r8100592, r8100590, r8100591, MPFR_RNDN);
        mpfr_mul(r8100593, r8100567, r8100592, MPFR_RNDN);
        mpfr_add(r8100594, r8100588, r8100593, MPFR_RNDN);
        ;
        mpfr_mul(r8100596, r8100595, r8100561, MPFR_RNDN);
        ;
        ;
        mpfr_div(r8100599, r8100598, r8100561, MPFR_RNDN);
        mpfr_pow(r8100600, r8100599, r8100564, MPFR_RNDN);
        mpfr_div(r8100601, r8100597, r8100600, MPFR_RNDN);
        mpfr_add(r8100602, r8100596, r8100601, MPFR_RNDN);
        mpfr_add(r8100603, r8100594, r8100602, MPFR_RNDN);
        mpfr_add(r8100604, r8100579, r8100603, MPFR_RNDN);
        mpfr_add(r8100605, r8100574, r8100604, MPFR_RNDN);
        return mpfr_get_d(r8100605, MPFR_RNDN);
}

static mpfr_t r8100606, r8100607, r8100608, r8100609, r8100610, r8100611, r8100612, r8100613, r8100614, r8100615, r8100616, r8100617, r8100618, r8100619, r8100620, r8100621, r8100622, r8100623, r8100624, r8100625, r8100626, r8100627, r8100628, r8100629, r8100630, r8100631, r8100632, r8100633, r8100634, r8100635, r8100636, r8100637, r8100638, r8100639, r8100640, r8100641, r8100642, r8100643, r8100644, r8100645, r8100646, r8100647, r8100648, r8100649, r8100650;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8100606);
        mpfr_init(r8100607);
        mpfr_init(r8100608);
        mpfr_init_set_str(r8100609, "3", 10, MPFR_RNDN);
        mpfr_init(r8100610);
        mpfr_init(r8100611);
        mpfr_init(r8100612);
        mpfr_init(r8100613);
        mpfr_init(r8100614);
        mpfr_init_set_str(r8100615, "-311570.044327", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100616, "67415.740585", 10, MPFR_RNDN);
        mpfr_init(r8100617);
        mpfr_init(r8100618);
        mpfr_init(r8100619);
        mpfr_init_set_str(r8100620, "605336.086121", 10, MPFR_RNDN);
        mpfr_init(r8100621);
        mpfr_init_set_str(r8100622, "-642023.121643", 10, MPFR_RNDN);
        mpfr_init(r8100623);
        mpfr_init(r8100624);
        mpfr_init_set_str(r8100625, "34041.270447", 10, MPFR_RNDN);
        mpfr_init(r8100626);
        mpfr_init(r8100627);
        mpfr_init(r8100628);
        mpfr_init_set_str(r8100629, "-4084.952454", 10, MPFR_RNDN);
        mpfr_init(r8100630);
        mpfr_init(r8100631);
        mpfr_init(r8100632);
        mpfr_init(r8100633);
        mpfr_init_set_str(r8100634, "403853.253937", 10, MPFR_RNDN);
        mpfr_init(r8100635);
        mpfr_init_set_str(r8100636, "-153185.71701", 10, MPFR_RNDN);
        mpfr_init(r8100637);
        mpfr_init(r8100638);
        mpfr_init(r8100639);
        mpfr_init_set_str(r8100640, "-3.523941", 10, MPFR_RNDN);
        mpfr_init(r8100641);
        mpfr_init_set_str(r8100642, "-222.008286", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100643, "-1", 10, MPFR_RNDN);
        mpfr_init(r8100644);
        mpfr_init(r8100645);
        mpfr_init(r8100646);
        mpfr_init(r8100647);
        mpfr_init(r8100648);
        mpfr_init(r8100649);
        mpfr_init(r8100650);
}

double f_dm(double x) {
        mpfr_set_d(r8100606, x, MPFR_RNDN);
        mpfr_mul(r8100607, r8100606, r8100606, MPFR_RNDN);
        mpfr_mul(r8100608, r8100607, r8100607, MPFR_RNDN);
        ;
        mpfr_pow(r8100610, r8100606, r8100609, MPFR_RNDN);
        mpfr_mul(r8100611, r8100607, r8100610, MPFR_RNDN);
        mpfr_mul(r8100612, r8100608, r8100611, MPFR_RNDN);
        mpfr_mul(r8100613, r8100612, r8100608, MPFR_RNDN);
        mpfr_mul(r8100614, r8100608, r8100613, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8100617, r8100616, r8100607, MPFR_RNDN);
        mpfr_add(r8100618, r8100615, r8100617, MPFR_RNDN);
        mpfr_mul(r8100619, r8100614, r8100618, MPFR_RNDN);
        ;
        mpfr_mul(r8100621, r8100620, r8100607, MPFR_RNDN);
        ;
        mpfr_add(r8100623, r8100621, r8100622, MPFR_RNDN);
        mpfr_mul(r8100624, r8100613, r8100623, MPFR_RNDN);
        ;
        mpfr_mul(r8100626, r8100606, r8100625, MPFR_RNDN);
        mpfr_mul(r8100627, r8100626, r8100607, MPFR_RNDN);
        mpfr_mul(r8100628, r8100627, r8100608, MPFR_RNDN);
        ;
        mpfr_mul(r8100630, r8100629, r8100606, MPFR_RNDN);
        mpfr_mul(r8100631, r8100630, r8100607, MPFR_RNDN);
        mpfr_mul(r8100632, r8100631, r8100607, MPFR_RNDN);
        mpfr_add(r8100633, r8100628, r8100632, MPFR_RNDN);
        ;
        mpfr_mul(r8100635, r8100607, r8100634, MPFR_RNDN);
        ;
        mpfr_add(r8100637, r8100635, r8100636, MPFR_RNDN);
        mpfr_mul(r8100638, r8100612, r8100637, MPFR_RNDN);
        mpfr_add(r8100639, r8100633, r8100638, MPFR_RNDN);
        ;
        mpfr_mul(r8100641, r8100640, r8100606, MPFR_RNDN);
        ;
        ;
        mpfr_div(r8100644, r8100643, r8100606, MPFR_RNDN);
        mpfr_pow(r8100645, r8100644, r8100609, MPFR_RNDN);
        mpfr_div(r8100646, r8100642, r8100645, MPFR_RNDN);
        mpfr_add(r8100647, r8100641, r8100646, MPFR_RNDN);
        mpfr_add(r8100648, r8100639, r8100647, MPFR_RNDN);
        mpfr_add(r8100649, r8100624, r8100648, MPFR_RNDN);
        mpfr_add(r8100650, r8100619, r8100649, MPFR_RNDN);
        return mpfr_get_d(r8100650, MPFR_RNDN);
}

