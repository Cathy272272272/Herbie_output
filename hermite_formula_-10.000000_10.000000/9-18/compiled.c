#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r9829586 = -17643225600.0;
        float r9829587 = 317578060800.0;
        float r9829588 = x;
        float r9829589 = r9829588 * r9829588;
        float r9829590 = r9829587 * r9829589;
        float r9829591 = r9829586 + r9829590;
        float r9829592 = -846874828800.0;
        float r9829593 = r9829589 * r9829588;
        float r9829594 = r9829593 * r9829588;
        float r9829595 = r9829592 * r9829594;
        float r9829596 = r9829591 + r9829595;
        float r9829597 = 790416506880.0;
        float r9829598 = r9829594 * r9829588;
        float r9829599 = r9829598 * r9829588;
        float r9829600 = r9829597 * r9829599;
        float r9829601 = r9829596 + r9829600;
        float r9829602 = -338749931520.0;
        float r9829603 = r9829599 * r9829588;
        float r9829604 = r9829603 * r9829588;
        float r9829605 = r9829602 * r9829604;
        float r9829606 = r9829601 + r9829605;
        float r9829607 = 75277762560.0;
        float r9829608 = r9829604 * r9829588;
        float r9829609 = r9829608 * r9829588;
        float r9829610 = r9829607 * r9829609;
        float r9829611 = r9829606 + r9829610;
        float r9829612 = -9124577280.0;
        float r9829613 = r9829609 * r9829588;
        float r9829614 = r9829613 * r9829588;
        float r9829615 = r9829612 * r9829614;
        float r9829616 = r9829611 + r9829615;
        float r9829617 = 601620480.0;
        float r9829618 = r9829614 * r9829588;
        float r9829619 = r9829618 * r9829588;
        float r9829620 = r9829617 * r9829619;
        float r9829621 = r9829616 + r9829620;
        float r9829622 = -20054016.0;
        float r9829623 = r9829619 * r9829588;
        float r9829624 = r9829623 * r9829588;
        float r9829625 = r9829622 * r9829624;
        float r9829626 = r9829621 + r9829625;
        float r9829627 = 262144.0;
        float r9829628 = r9829624 * r9829588;
        float r9829629 = r9829628 * r9829588;
        float r9829630 = r9829627 * r9829629;
        float r9829631 = r9829626 + r9829630;
        return r9829631;
}

double f_id(double x) {
        double r9829632 = -17643225600.0;
        double r9829633 = 317578060800.0;
        double r9829634 = x;
        double r9829635 = r9829634 * r9829634;
        double r9829636 = r9829633 * r9829635;
        double r9829637 = r9829632 + r9829636;
        double r9829638 = -846874828800.0;
        double r9829639 = r9829635 * r9829634;
        double r9829640 = r9829639 * r9829634;
        double r9829641 = r9829638 * r9829640;
        double r9829642 = r9829637 + r9829641;
        double r9829643 = 790416506880.0;
        double r9829644 = r9829640 * r9829634;
        double r9829645 = r9829644 * r9829634;
        double r9829646 = r9829643 * r9829645;
        double r9829647 = r9829642 + r9829646;
        double r9829648 = -338749931520.0;
        double r9829649 = r9829645 * r9829634;
        double r9829650 = r9829649 * r9829634;
        double r9829651 = r9829648 * r9829650;
        double r9829652 = r9829647 + r9829651;
        double r9829653 = 75277762560.0;
        double r9829654 = r9829650 * r9829634;
        double r9829655 = r9829654 * r9829634;
        double r9829656 = r9829653 * r9829655;
        double r9829657 = r9829652 + r9829656;
        double r9829658 = -9124577280.0;
        double r9829659 = r9829655 * r9829634;
        double r9829660 = r9829659 * r9829634;
        double r9829661 = r9829658 * r9829660;
        double r9829662 = r9829657 + r9829661;
        double r9829663 = 601620480.0;
        double r9829664 = r9829660 * r9829634;
        double r9829665 = r9829664 * r9829634;
        double r9829666 = r9829663 * r9829665;
        double r9829667 = r9829662 + r9829666;
        double r9829668 = -20054016.0;
        double r9829669 = r9829665 * r9829634;
        double r9829670 = r9829669 * r9829634;
        double r9829671 = r9829668 * r9829670;
        double r9829672 = r9829667 + r9829671;
        double r9829673 = 262144.0;
        double r9829674 = r9829670 * r9829634;
        double r9829675 = r9829674 * r9829634;
        double r9829676 = r9829673 * r9829675;
        double r9829677 = r9829672 + r9829676;
        return r9829677;
}


double f_of(float x) {
        float r9829678 = x;
        float r9829679 = 317578060800.0;
        float r9829680 = r9829679 * r9829678;
        float r9829681 = r9829678 * r9829680;
        float r9829682 = -17643225600.0;
        float r9829683 = r9829681 + r9829682;
        float r9829684 = -846874828800.0;
        float r9829685 = 790416506880.0;
        float r9829686 = r9829678 * r9829678;
        float r9829687 = r9829685 * r9829686;
        float r9829688 = r9829684 + r9829687;
        float r9829689 = r9829688 * r9829686;
        float r9829690 = r9829689 * r9829686;
        float r9829691 = r9829683 + r9829690;
        float r9829692 = -9124577280.0;
        float r9829693 = 601620480.0;
        float r9829694 = r9829678 * r9829693;
        float r9829695 = r9829678 * r9829694;
        float r9829696 = r9829692 + r9829695;
        float r9829697 = 3;
        float r9829698 = pow(r9829686, r9829697);
        float r9829699 = r9829698 * r9829698;
        float r9829700 = r9829696 * r9829699;
        float r9829701 = 75277762560.0;
        float r9829702 = r9829678 * r9829701;
        float r9829703 = r9829678 * r9829702;
        float r9829704 = -338749931520.0;
        float r9829705 = r9829703 + r9829704;
        float r9829706 = r9829686 * r9829686;
        float r9829707 = r9829706 * r9829706;
        float r9829708 = r9829705 * r9829707;
        float r9829709 = r9829700 + r9829708;
        float r9829710 = 1;
        float r9829711 = r9829697 + r9829710;
        float r9829712 = pow(r9829706, r9829711);
        float r9829713 = 262144.0;
        float r9829714 = r9829678 * r9829713;
        float r9829715 = r9829678 * r9829714;
        float r9829716 = -20054016.0;
        float r9829717 = r9829715 + r9829716;
        float r9829718 = r9829712 * r9829717;
        float r9829719 = r9829709 + r9829718;
        float r9829720 = r9829691 + r9829719;
        return r9829720;
}

double f_od(double x) {
        double r9829721 = x;
        double r9829722 = 317578060800.0;
        double r9829723 = r9829722 * r9829721;
        double r9829724 = r9829721 * r9829723;
        double r9829725 = -17643225600.0;
        double r9829726 = r9829724 + r9829725;
        double r9829727 = -846874828800.0;
        double r9829728 = 790416506880.0;
        double r9829729 = r9829721 * r9829721;
        double r9829730 = r9829728 * r9829729;
        double r9829731 = r9829727 + r9829730;
        double r9829732 = r9829731 * r9829729;
        double r9829733 = r9829732 * r9829729;
        double r9829734 = r9829726 + r9829733;
        double r9829735 = -9124577280.0;
        double r9829736 = 601620480.0;
        double r9829737 = r9829721 * r9829736;
        double r9829738 = r9829721 * r9829737;
        double r9829739 = r9829735 + r9829738;
        double r9829740 = 3;
        double r9829741 = pow(r9829729, r9829740);
        double r9829742 = r9829741 * r9829741;
        double r9829743 = r9829739 * r9829742;
        double r9829744 = 75277762560.0;
        double r9829745 = r9829721 * r9829744;
        double r9829746 = r9829721 * r9829745;
        double r9829747 = -338749931520.0;
        double r9829748 = r9829746 + r9829747;
        double r9829749 = r9829729 * r9829729;
        double r9829750 = r9829749 * r9829749;
        double r9829751 = r9829748 * r9829750;
        double r9829752 = r9829743 + r9829751;
        double r9829753 = 1;
        double r9829754 = r9829740 + r9829753;
        double r9829755 = pow(r9829749, r9829754);
        double r9829756 = 262144.0;
        double r9829757 = r9829721 * r9829756;
        double r9829758 = r9829721 * r9829757;
        double r9829759 = -20054016.0;
        double r9829760 = r9829758 + r9829759;
        double r9829761 = r9829755 * r9829760;
        double r9829762 = r9829752 + r9829761;
        double r9829763 = r9829734 + r9829762;
        return r9829763;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9829764, r9829765, r9829766, r9829767, r9829768, r9829769, r9829770, r9829771, r9829772, r9829773, r9829774, r9829775, r9829776, r9829777, r9829778, r9829779, r9829780, r9829781, r9829782, r9829783, r9829784, r9829785, r9829786, r9829787, r9829788, r9829789, r9829790, r9829791, r9829792, r9829793, r9829794, r9829795, r9829796, r9829797, r9829798, r9829799, r9829800, r9829801, r9829802, r9829803, r9829804, r9829805, r9829806, r9829807, r9829808, r9829809;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9829764, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829765, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r9829766);
        mpfr_init(r9829767);
        mpfr_init(r9829768);
        mpfr_init(r9829769);
        mpfr_init_set_str(r9829770, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r9829771);
        mpfr_init(r9829772);
        mpfr_init(r9829773);
        mpfr_init(r9829774);
        mpfr_init_set_str(r9829775, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r9829776);
        mpfr_init(r9829777);
        mpfr_init(r9829778);
        mpfr_init(r9829779);
        mpfr_init_set_str(r9829780, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r9829781);
        mpfr_init(r9829782);
        mpfr_init(r9829783);
        mpfr_init(r9829784);
        mpfr_init_set_str(r9829785, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r9829786);
        mpfr_init(r9829787);
        mpfr_init(r9829788);
        mpfr_init(r9829789);
        mpfr_init_set_str(r9829790, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init(r9829791);
        mpfr_init(r9829792);
        mpfr_init(r9829793);
        mpfr_init(r9829794);
        mpfr_init_set_str(r9829795, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r9829796);
        mpfr_init(r9829797);
        mpfr_init(r9829798);
        mpfr_init(r9829799);
        mpfr_init_set_str(r9829800, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r9829801);
        mpfr_init(r9829802);
        mpfr_init(r9829803);
        mpfr_init(r9829804);
        mpfr_init_set_str(r9829805, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r9829806);
        mpfr_init(r9829807);
        mpfr_init(r9829808);
        mpfr_init(r9829809);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9829766, x, MPFR_RNDN);
        mpfr_mul(r9829767, r9829766, r9829766, MPFR_RNDN);
        mpfr_mul(r9829768, r9829765, r9829767, MPFR_RNDN);
        mpfr_add(r9829769, r9829764, r9829768, MPFR_RNDN);
        ;
        mpfr_mul(r9829771, r9829767, r9829766, MPFR_RNDN);
        mpfr_mul(r9829772, r9829771, r9829766, MPFR_RNDN);
        mpfr_mul(r9829773, r9829770, r9829772, MPFR_RNDN);
        mpfr_add(r9829774, r9829769, r9829773, MPFR_RNDN);
        ;
        mpfr_mul(r9829776, r9829772, r9829766, MPFR_RNDN);
        mpfr_mul(r9829777, r9829776, r9829766, MPFR_RNDN);
        mpfr_mul(r9829778, r9829775, r9829777, MPFR_RNDN);
        mpfr_add(r9829779, r9829774, r9829778, MPFR_RNDN);
        ;
        mpfr_mul(r9829781, r9829777, r9829766, MPFR_RNDN);
        mpfr_mul(r9829782, r9829781, r9829766, MPFR_RNDN);
        mpfr_mul(r9829783, r9829780, r9829782, MPFR_RNDN);
        mpfr_add(r9829784, r9829779, r9829783, MPFR_RNDN);
        ;
        mpfr_mul(r9829786, r9829782, r9829766, MPFR_RNDN);
        mpfr_mul(r9829787, r9829786, r9829766, MPFR_RNDN);
        mpfr_mul(r9829788, r9829785, r9829787, MPFR_RNDN);
        mpfr_add(r9829789, r9829784, r9829788, MPFR_RNDN);
        ;
        mpfr_mul(r9829791, r9829787, r9829766, MPFR_RNDN);
        mpfr_mul(r9829792, r9829791, r9829766, MPFR_RNDN);
        mpfr_mul(r9829793, r9829790, r9829792, MPFR_RNDN);
        mpfr_add(r9829794, r9829789, r9829793, MPFR_RNDN);
        ;
        mpfr_mul(r9829796, r9829792, r9829766, MPFR_RNDN);
        mpfr_mul(r9829797, r9829796, r9829766, MPFR_RNDN);
        mpfr_mul(r9829798, r9829795, r9829797, MPFR_RNDN);
        mpfr_add(r9829799, r9829794, r9829798, MPFR_RNDN);
        ;
        mpfr_mul(r9829801, r9829797, r9829766, MPFR_RNDN);
        mpfr_mul(r9829802, r9829801, r9829766, MPFR_RNDN);
        mpfr_mul(r9829803, r9829800, r9829802, MPFR_RNDN);
        mpfr_add(r9829804, r9829799, r9829803, MPFR_RNDN);
        ;
        mpfr_mul(r9829806, r9829802, r9829766, MPFR_RNDN);
        mpfr_mul(r9829807, r9829806, r9829766, MPFR_RNDN);
        mpfr_mul(r9829808, r9829805, r9829807, MPFR_RNDN);
        mpfr_add(r9829809, r9829804, r9829808, MPFR_RNDN);
        return mpfr_get_d(r9829809, MPFR_RNDN);
}

static mpfr_t r9829810, r9829811, r9829812, r9829813, r9829814, r9829815, r9829816, r9829817, r9829818, r9829819, r9829820, r9829821, r9829822, r9829823, r9829824, r9829825, r9829826, r9829827, r9829828, r9829829, r9829830, r9829831, r9829832, r9829833, r9829834, r9829835, r9829836, r9829837, r9829838, r9829839, r9829840, r9829841, r9829842, r9829843, r9829844, r9829845, r9829846, r9829847, r9829848, r9829849, r9829850, r9829851, r9829852;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9829810);
        mpfr_init_set_str(r9829811, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r9829812);
        mpfr_init(r9829813);
        mpfr_init_set_str(r9829814, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init(r9829815);
        mpfr_init_set_str(r9829816, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829817, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r9829818);
        mpfr_init(r9829819);
        mpfr_init(r9829820);
        mpfr_init(r9829821);
        mpfr_init(r9829822);
        mpfr_init(r9829823);
        mpfr_init_set_str(r9829824, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829825, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r9829826);
        mpfr_init(r9829827);
        mpfr_init(r9829828);
        mpfr_init_set_str(r9829829, "3", 10, MPFR_RNDN);
        mpfr_init(r9829830);
        mpfr_init(r9829831);
        mpfr_init(r9829832);
        mpfr_init_set_str(r9829833, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r9829834);
        mpfr_init(r9829835);
        mpfr_init_set_str(r9829836, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r9829837);
        mpfr_init(r9829838);
        mpfr_init(r9829839);
        mpfr_init(r9829840);
        mpfr_init(r9829841);
        mpfr_init_set_str(r9829842, "1", 10, MPFR_RNDN);
        mpfr_init(r9829843);
        mpfr_init(r9829844);
        mpfr_init_set_str(r9829845, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r9829846);
        mpfr_init(r9829847);
        mpfr_init_set_str(r9829848, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r9829849);
        mpfr_init(r9829850);
        mpfr_init(r9829851);
        mpfr_init(r9829852);
}

double f_fm(double x) {
        mpfr_set_d(r9829810, x, MPFR_RNDN);
        ;
        mpfr_mul(r9829812, r9829811, r9829810, MPFR_RNDN);
        mpfr_mul(r9829813, r9829810, r9829812, MPFR_RNDN);
        ;
        mpfr_add(r9829815, r9829813, r9829814, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9829818, r9829810, r9829810, MPFR_RNDN);
        mpfr_mul(r9829819, r9829817, r9829818, MPFR_RNDN);
        mpfr_add(r9829820, r9829816, r9829819, MPFR_RNDN);
        mpfr_mul(r9829821, r9829820, r9829818, MPFR_RNDN);
        mpfr_mul(r9829822, r9829821, r9829818, MPFR_RNDN);
        mpfr_add(r9829823, r9829815, r9829822, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9829826, r9829810, r9829825, MPFR_RNDN);
        mpfr_mul(r9829827, r9829810, r9829826, MPFR_RNDN);
        mpfr_add(r9829828, r9829824, r9829827, MPFR_RNDN);
        ;
        mpfr_pow(r9829830, r9829818, r9829829, MPFR_RNDN);
        mpfr_mul(r9829831, r9829830, r9829830, MPFR_RNDN);
        mpfr_mul(r9829832, r9829828, r9829831, MPFR_RNDN);
        ;
        mpfr_mul(r9829834, r9829810, r9829833, MPFR_RNDN);
        mpfr_mul(r9829835, r9829810, r9829834, MPFR_RNDN);
        ;
        mpfr_add(r9829837, r9829835, r9829836, MPFR_RNDN);
        mpfr_mul(r9829838, r9829818, r9829818, MPFR_RNDN);
        mpfr_mul(r9829839, r9829838, r9829838, MPFR_RNDN);
        mpfr_mul(r9829840, r9829837, r9829839, MPFR_RNDN);
        mpfr_add(r9829841, r9829832, r9829840, MPFR_RNDN);
        ;
        mpfr_add(r9829843, r9829829, r9829842, MPFR_RNDN);
        mpfr_pow(r9829844, r9829838, r9829843, MPFR_RNDN);
        ;
        mpfr_mul(r9829846, r9829810, r9829845, MPFR_RNDN);
        mpfr_mul(r9829847, r9829810, r9829846, MPFR_RNDN);
        ;
        mpfr_add(r9829849, r9829847, r9829848, MPFR_RNDN);
        mpfr_mul(r9829850, r9829844, r9829849, MPFR_RNDN);
        mpfr_add(r9829851, r9829841, r9829850, MPFR_RNDN);
        mpfr_add(r9829852, r9829823, r9829851, MPFR_RNDN);
        return mpfr_get_d(r9829852, MPFR_RNDN);
}

static mpfr_t r9829853, r9829854, r9829855, r9829856, r9829857, r9829858, r9829859, r9829860, r9829861, r9829862, r9829863, r9829864, r9829865, r9829866, r9829867, r9829868, r9829869, r9829870, r9829871, r9829872, r9829873, r9829874, r9829875, r9829876, r9829877, r9829878, r9829879, r9829880, r9829881, r9829882, r9829883, r9829884, r9829885, r9829886, r9829887, r9829888, r9829889, r9829890, r9829891, r9829892, r9829893, r9829894, r9829895;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9829853);
        mpfr_init_set_str(r9829854, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r9829855);
        mpfr_init(r9829856);
        mpfr_init_set_str(r9829857, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init(r9829858);
        mpfr_init_set_str(r9829859, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829860, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r9829861);
        mpfr_init(r9829862);
        mpfr_init(r9829863);
        mpfr_init(r9829864);
        mpfr_init(r9829865);
        mpfr_init(r9829866);
        mpfr_init_set_str(r9829867, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829868, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r9829869);
        mpfr_init(r9829870);
        mpfr_init(r9829871);
        mpfr_init_set_str(r9829872, "3", 10, MPFR_RNDN);
        mpfr_init(r9829873);
        mpfr_init(r9829874);
        mpfr_init(r9829875);
        mpfr_init_set_str(r9829876, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r9829877);
        mpfr_init(r9829878);
        mpfr_init_set_str(r9829879, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r9829880);
        mpfr_init(r9829881);
        mpfr_init(r9829882);
        mpfr_init(r9829883);
        mpfr_init(r9829884);
        mpfr_init_set_str(r9829885, "1", 10, MPFR_RNDN);
        mpfr_init(r9829886);
        mpfr_init(r9829887);
        mpfr_init_set_str(r9829888, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r9829889);
        mpfr_init(r9829890);
        mpfr_init_set_str(r9829891, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r9829892);
        mpfr_init(r9829893);
        mpfr_init(r9829894);
        mpfr_init(r9829895);
}

double f_dm(double x) {
        mpfr_set_d(r9829853, x, MPFR_RNDN);
        ;
        mpfr_mul(r9829855, r9829854, r9829853, MPFR_RNDN);
        mpfr_mul(r9829856, r9829853, r9829855, MPFR_RNDN);
        ;
        mpfr_add(r9829858, r9829856, r9829857, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9829861, r9829853, r9829853, MPFR_RNDN);
        mpfr_mul(r9829862, r9829860, r9829861, MPFR_RNDN);
        mpfr_add(r9829863, r9829859, r9829862, MPFR_RNDN);
        mpfr_mul(r9829864, r9829863, r9829861, MPFR_RNDN);
        mpfr_mul(r9829865, r9829864, r9829861, MPFR_RNDN);
        mpfr_add(r9829866, r9829858, r9829865, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9829869, r9829853, r9829868, MPFR_RNDN);
        mpfr_mul(r9829870, r9829853, r9829869, MPFR_RNDN);
        mpfr_add(r9829871, r9829867, r9829870, MPFR_RNDN);
        ;
        mpfr_pow(r9829873, r9829861, r9829872, MPFR_RNDN);
        mpfr_mul(r9829874, r9829873, r9829873, MPFR_RNDN);
        mpfr_mul(r9829875, r9829871, r9829874, MPFR_RNDN);
        ;
        mpfr_mul(r9829877, r9829853, r9829876, MPFR_RNDN);
        mpfr_mul(r9829878, r9829853, r9829877, MPFR_RNDN);
        ;
        mpfr_add(r9829880, r9829878, r9829879, MPFR_RNDN);
        mpfr_mul(r9829881, r9829861, r9829861, MPFR_RNDN);
        mpfr_mul(r9829882, r9829881, r9829881, MPFR_RNDN);
        mpfr_mul(r9829883, r9829880, r9829882, MPFR_RNDN);
        mpfr_add(r9829884, r9829875, r9829883, MPFR_RNDN);
        ;
        mpfr_add(r9829886, r9829872, r9829885, MPFR_RNDN);
        mpfr_pow(r9829887, r9829881, r9829886, MPFR_RNDN);
        ;
        mpfr_mul(r9829889, r9829853, r9829888, MPFR_RNDN);
        mpfr_mul(r9829890, r9829853, r9829889, MPFR_RNDN);
        ;
        mpfr_add(r9829892, r9829890, r9829891, MPFR_RNDN);
        mpfr_mul(r9829893, r9829887, r9829892, MPFR_RNDN);
        mpfr_add(r9829894, r9829884, r9829893, MPFR_RNDN);
        mpfr_add(r9829895, r9829866, r9829894, MPFR_RNDN);
        return mpfr_get_d(r9829895, MPFR_RNDN);
}

