#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r10585582 = 1.0;
        float r10585583 = -18.0;
        float r10585584 = x;
        float r10585585 = r10585583 * r10585584;
        float r10585586 = r10585582 + r10585585;
        float r10585587 = 76.5;
        float r10585588 = r10585584 * r10585584;
        float r10585589 = r10585587 * r10585588;
        float r10585590 = r10585586 + r10585589;
        float r10585591 = -136.0;
        float r10585592 = r10585588 * r10585584;
        float r10585593 = r10585591 * r10585592;
        float r10585594 = r10585590 + r10585593;
        float r10585595 = 127.5;
        float r10585596 = r10585592 * r10585584;
        float r10585597 = r10585595 * r10585596;
        float r10585598 = r10585594 + r10585597;
        float r10585599 = -71.4;
        float r10585600 = r10585596 * r10585584;
        float r10585601 = r10585599 * r10585600;
        float r10585602 = r10585598 + r10585601;
        float r10585603 = 25.783333;
        float r10585604 = r10585600 * r10585584;
        float r10585605 = r10585603 * r10585604;
        float r10585606 = r10585602 + r10585605;
        float r10585607 = -6.314286;
        float r10585608 = r10585604 * r10585584;
        float r10585609 = r10585607 * r10585608;
        float r10585610 = r10585606 + r10585609;
        float r10585611 = 1.085268;
        float r10585612 = r10585608 * r10585584;
        float r10585613 = r10585611 * r10585612;
        float r10585614 = r10585610 + r10585613;
        float r10585615 = -0.133984;
        float r10585616 = r10585612 * r10585584;
        float r10585617 = r10585615 * r10585616;
        float r10585618 = r10585614 + r10585617;
        float r10585619 = 0.012059;
        float r10585620 = r10585616 * r10585584;
        float r10585621 = r10585619 * r10585620;
        float r10585622 = r10585618 + r10585621;
        float r10585623 = -0.000797;
        float r10585624 = r10585620 * r10585584;
        float r10585625 = r10585623 * r10585624;
        float r10585626 = r10585622 + r10585625;
        float r10585627 = 3.9e-05;
        float r10585628 = r10585624 * r10585584;
        float r10585629 = r10585627 * r10585628;
        float r10585630 = r10585626 + r10585629;
        float r10585631 = -1e-06;
        float r10585632 = r10585628 * r10585584;
        float r10585633 = r10585631 * r10585632;
        float r10585634 = r10585630 + r10585633;
        return r10585634;
}

double f_id(double x) {
        double r10585635 = 1.0;
        double r10585636 = -18.0;
        double r10585637 = x;
        double r10585638 = r10585636 * r10585637;
        double r10585639 = r10585635 + r10585638;
        double r10585640 = 76.5;
        double r10585641 = r10585637 * r10585637;
        double r10585642 = r10585640 * r10585641;
        double r10585643 = r10585639 + r10585642;
        double r10585644 = -136.0;
        double r10585645 = r10585641 * r10585637;
        double r10585646 = r10585644 * r10585645;
        double r10585647 = r10585643 + r10585646;
        double r10585648 = 127.5;
        double r10585649 = r10585645 * r10585637;
        double r10585650 = r10585648 * r10585649;
        double r10585651 = r10585647 + r10585650;
        double r10585652 = -71.4;
        double r10585653 = r10585649 * r10585637;
        double r10585654 = r10585652 * r10585653;
        double r10585655 = r10585651 + r10585654;
        double r10585656 = 25.783333;
        double r10585657 = r10585653 * r10585637;
        double r10585658 = r10585656 * r10585657;
        double r10585659 = r10585655 + r10585658;
        double r10585660 = -6.314286;
        double r10585661 = r10585657 * r10585637;
        double r10585662 = r10585660 * r10585661;
        double r10585663 = r10585659 + r10585662;
        double r10585664 = 1.085268;
        double r10585665 = r10585661 * r10585637;
        double r10585666 = r10585664 * r10585665;
        double r10585667 = r10585663 + r10585666;
        double r10585668 = -0.133984;
        double r10585669 = r10585665 * r10585637;
        double r10585670 = r10585668 * r10585669;
        double r10585671 = r10585667 + r10585670;
        double r10585672 = 0.012059;
        double r10585673 = r10585669 * r10585637;
        double r10585674 = r10585672 * r10585673;
        double r10585675 = r10585671 + r10585674;
        double r10585676 = -0.000797;
        double r10585677 = r10585673 * r10585637;
        double r10585678 = r10585676 * r10585677;
        double r10585679 = r10585675 + r10585678;
        double r10585680 = 3.9e-05;
        double r10585681 = r10585677 * r10585637;
        double r10585682 = r10585680 * r10585681;
        double r10585683 = r10585679 + r10585682;
        double r10585684 = -1e-06;
        double r10585685 = r10585681 * r10585637;
        double r10585686 = r10585684 * r10585685;
        double r10585687 = r10585683 + r10585686;
        return r10585687;
}


double f_of(float x) {
        float r10585688 = -1e-06;
        float r10585689 = x;
        float r10585690 = r10585688 * r10585689;
        float r10585691 = r10585689 * r10585689;
        float r10585692 = r10585691 * r10585691;
        float r10585693 = r10585690 * r10585692;
        float r10585694 = r10585692 * r10585692;
        float r10585695 = r10585693 * r10585694;
        float r10585696 = 3;
        float r10585697 = pow(r10585691, r10585696);
        float r10585698 = 3.9e-05;
        float r10585699 = r10585689 * r10585698;
        float r10585700 = r10585689 * r10585699;
        float r10585701 = r10585700 * r10585692;
        float r10585702 = -0.000797;
        float r10585703 = r10585702 * r10585689;
        float r10585704 = r10585692 * r10585703;
        float r10585705 = r10585701 + r10585704;
        float r10585706 = r10585697 * r10585705;
        float r10585707 = r10585695 + r10585706;
        float r10585708 = pow(r10585689, r10585696);
        float r10585709 = -6.314286;
        float r10585710 = r10585709 * r10585689;
        float r10585711 = r10585708 * r10585710;
        float r10585712 = r10585711 * r10585708;
        float r10585713 = 25.783333;
        float r10585714 = r10585713 * r10585689;
        float r10585715 = r10585714 * r10585689;
        float r10585716 = r10585715 * r10585692;
        float r10585717 = r10585712 + r10585716;
        float r10585718 = -71.4;
        float r10585719 = r10585718 * r10585689;
        float r10585720 = 127.5;
        float r10585721 = r10585719 + r10585720;
        float r10585722 = r10585692 * r10585721;
        float r10585723 = r10585717 + r10585722;
        float r10585724 = -18.0;
        float r10585725 = 76.5;
        float r10585726 = r10585725 * r10585689;
        float r10585727 = r10585724 + r10585726;
        float r10585728 = r10585689 * r10585727;
        float r10585729 = -136.0;
        float r10585730 = r10585689 * r10585729;
        float r10585731 = r10585691 * r10585730;
        float r10585732 = cbrt(r10585731);
        float r10585733 = r10585732 * r10585732;
        float r10585734 = r10585733 * r10585732;
        float r10585735 = 1.0;
        float r10585736 = r10585734 + r10585735;
        float r10585737 = r10585728 + r10585736;
        float r10585738 = r10585723 + r10585737;
        float r10585739 = r10585707 + r10585738;
        float r10585740 = 1.085268;
        float r10585741 = r10585689 * r10585740;
        float r10585742 = r10585741 * r10585689;
        float r10585743 = r10585697 * r10585742;
        float r10585744 = -0.133984;
        float r10585745 = 0.012059;
        float r10585746 = r10585745 * r10585689;
        float r10585747 = r10585744 + r10585746;
        float r10585748 = r10585689 * r10585747;
        float r10585749 = r10585694 * r10585748;
        float r10585750 = r10585743 + r10585749;
        float r10585751 = r10585739 + r10585750;
        return r10585751;
}

double f_od(double x) {
        double r10585752 = -1e-06;
        double r10585753 = x;
        double r10585754 = r10585752 * r10585753;
        double r10585755 = r10585753 * r10585753;
        double r10585756 = r10585755 * r10585755;
        double r10585757 = r10585754 * r10585756;
        double r10585758 = r10585756 * r10585756;
        double r10585759 = r10585757 * r10585758;
        double r10585760 = 3;
        double r10585761 = pow(r10585755, r10585760);
        double r10585762 = 3.9e-05;
        double r10585763 = r10585753 * r10585762;
        double r10585764 = r10585753 * r10585763;
        double r10585765 = r10585764 * r10585756;
        double r10585766 = -0.000797;
        double r10585767 = r10585766 * r10585753;
        double r10585768 = r10585756 * r10585767;
        double r10585769 = r10585765 + r10585768;
        double r10585770 = r10585761 * r10585769;
        double r10585771 = r10585759 + r10585770;
        double r10585772 = pow(r10585753, r10585760);
        double r10585773 = -6.314286;
        double r10585774 = r10585773 * r10585753;
        double r10585775 = r10585772 * r10585774;
        double r10585776 = r10585775 * r10585772;
        double r10585777 = 25.783333;
        double r10585778 = r10585777 * r10585753;
        double r10585779 = r10585778 * r10585753;
        double r10585780 = r10585779 * r10585756;
        double r10585781 = r10585776 + r10585780;
        double r10585782 = -71.4;
        double r10585783 = r10585782 * r10585753;
        double r10585784 = 127.5;
        double r10585785 = r10585783 + r10585784;
        double r10585786 = r10585756 * r10585785;
        double r10585787 = r10585781 + r10585786;
        double r10585788 = -18.0;
        double r10585789 = 76.5;
        double r10585790 = r10585789 * r10585753;
        double r10585791 = r10585788 + r10585790;
        double r10585792 = r10585753 * r10585791;
        double r10585793 = -136.0;
        double r10585794 = r10585753 * r10585793;
        double r10585795 = r10585755 * r10585794;
        double r10585796 = cbrt(r10585795);
        double r10585797 = r10585796 * r10585796;
        double r10585798 = r10585797 * r10585796;
        double r10585799 = 1.0;
        double r10585800 = r10585798 + r10585799;
        double r10585801 = r10585792 + r10585800;
        double r10585802 = r10585787 + r10585801;
        double r10585803 = r10585771 + r10585802;
        double r10585804 = 1.085268;
        double r10585805 = r10585753 * r10585804;
        double r10585806 = r10585805 * r10585753;
        double r10585807 = r10585761 * r10585806;
        double r10585808 = -0.133984;
        double r10585809 = 0.012059;
        double r10585810 = r10585809 * r10585753;
        double r10585811 = r10585808 + r10585810;
        double r10585812 = r10585753 * r10585811;
        double r10585813 = r10585758 * r10585812;
        double r10585814 = r10585807 + r10585813;
        double r10585815 = r10585803 + r10585814;
        return r10585815;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10585816, r10585817, r10585818, r10585819, r10585820, r10585821, r10585822, r10585823, r10585824, r10585825, r10585826, r10585827, r10585828, r10585829, r10585830, r10585831, r10585832, r10585833, r10585834, r10585835, r10585836, r10585837, r10585838, r10585839, r10585840, r10585841, r10585842, r10585843, r10585844, r10585845, r10585846, r10585847, r10585848, r10585849, r10585850, r10585851, r10585852, r10585853, r10585854, r10585855, r10585856, r10585857, r10585858, r10585859, r10585860, r10585861, r10585862, r10585863, r10585864, r10585865, r10585866, r10585867, r10585868;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10585816, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585817, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r10585818);
        mpfr_init(r10585819);
        mpfr_init(r10585820);
        mpfr_init_set_str(r10585821, "76.5", 10, MPFR_RNDN);
        mpfr_init(r10585822);
        mpfr_init(r10585823);
        mpfr_init(r10585824);
        mpfr_init_set_str(r10585825, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r10585826);
        mpfr_init(r10585827);
        mpfr_init(r10585828);
        mpfr_init_set_str(r10585829, "127.5", 10, MPFR_RNDN);
        mpfr_init(r10585830);
        mpfr_init(r10585831);
        mpfr_init(r10585832);
        mpfr_init_set_str(r10585833, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r10585834);
        mpfr_init(r10585835);
        mpfr_init(r10585836);
        mpfr_init_set_str(r10585837, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r10585838);
        mpfr_init(r10585839);
        mpfr_init(r10585840);
        mpfr_init_set_str(r10585841, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r10585842);
        mpfr_init(r10585843);
        mpfr_init(r10585844);
        mpfr_init_set_str(r10585845, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r10585846);
        mpfr_init(r10585847);
        mpfr_init(r10585848);
        mpfr_init_set_str(r10585849, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r10585850);
        mpfr_init(r10585851);
        mpfr_init(r10585852);
        mpfr_init_set_str(r10585853, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r10585854);
        mpfr_init(r10585855);
        mpfr_init(r10585856);
        mpfr_init_set_str(r10585857, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r10585858);
        mpfr_init(r10585859);
        mpfr_init(r10585860);
        mpfr_init_set_str(r10585861, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r10585862);
        mpfr_init(r10585863);
        mpfr_init(r10585864);
        mpfr_init_set_str(r10585865, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r10585866);
        mpfr_init(r10585867);
        mpfr_init(r10585868);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10585818, x, MPFR_RNDN);
        mpfr_mul(r10585819, r10585817, r10585818, MPFR_RNDN);
        mpfr_add(r10585820, r10585816, r10585819, MPFR_RNDN);
        ;
        mpfr_mul(r10585822, r10585818, r10585818, MPFR_RNDN);
        mpfr_mul(r10585823, r10585821, r10585822, MPFR_RNDN);
        mpfr_add(r10585824, r10585820, r10585823, MPFR_RNDN);
        ;
        mpfr_mul(r10585826, r10585822, r10585818, MPFR_RNDN);
        mpfr_mul(r10585827, r10585825, r10585826, MPFR_RNDN);
        mpfr_add(r10585828, r10585824, r10585827, MPFR_RNDN);
        ;
        mpfr_mul(r10585830, r10585826, r10585818, MPFR_RNDN);
        mpfr_mul(r10585831, r10585829, r10585830, MPFR_RNDN);
        mpfr_add(r10585832, r10585828, r10585831, MPFR_RNDN);
        ;
        mpfr_mul(r10585834, r10585830, r10585818, MPFR_RNDN);
        mpfr_mul(r10585835, r10585833, r10585834, MPFR_RNDN);
        mpfr_add(r10585836, r10585832, r10585835, MPFR_RNDN);
        ;
        mpfr_mul(r10585838, r10585834, r10585818, MPFR_RNDN);
        mpfr_mul(r10585839, r10585837, r10585838, MPFR_RNDN);
        mpfr_add(r10585840, r10585836, r10585839, MPFR_RNDN);
        ;
        mpfr_mul(r10585842, r10585838, r10585818, MPFR_RNDN);
        mpfr_mul(r10585843, r10585841, r10585842, MPFR_RNDN);
        mpfr_add(r10585844, r10585840, r10585843, MPFR_RNDN);
        ;
        mpfr_mul(r10585846, r10585842, r10585818, MPFR_RNDN);
        mpfr_mul(r10585847, r10585845, r10585846, MPFR_RNDN);
        mpfr_add(r10585848, r10585844, r10585847, MPFR_RNDN);
        ;
        mpfr_mul(r10585850, r10585846, r10585818, MPFR_RNDN);
        mpfr_mul(r10585851, r10585849, r10585850, MPFR_RNDN);
        mpfr_add(r10585852, r10585848, r10585851, MPFR_RNDN);
        ;
        mpfr_mul(r10585854, r10585850, r10585818, MPFR_RNDN);
        mpfr_mul(r10585855, r10585853, r10585854, MPFR_RNDN);
        mpfr_add(r10585856, r10585852, r10585855, MPFR_RNDN);
        ;
        mpfr_mul(r10585858, r10585854, r10585818, MPFR_RNDN);
        mpfr_mul(r10585859, r10585857, r10585858, MPFR_RNDN);
        mpfr_add(r10585860, r10585856, r10585859, MPFR_RNDN);
        ;
        mpfr_mul(r10585862, r10585858, r10585818, MPFR_RNDN);
        mpfr_mul(r10585863, r10585861, r10585862, MPFR_RNDN);
        mpfr_add(r10585864, r10585860, r10585863, MPFR_RNDN);
        ;
        mpfr_mul(r10585866, r10585862, r10585818, MPFR_RNDN);
        mpfr_mul(r10585867, r10585865, r10585866, MPFR_RNDN);
        mpfr_add(r10585868, r10585864, r10585867, MPFR_RNDN);
        return mpfr_get_d(r10585868, MPFR_RNDN);
}

static mpfr_t r10585869, r10585870, r10585871, r10585872, r10585873, r10585874, r10585875, r10585876, r10585877, r10585878, r10585879, r10585880, r10585881, r10585882, r10585883, r10585884, r10585885, r10585886, r10585887, r10585888, r10585889, r10585890, r10585891, r10585892, r10585893, r10585894, r10585895, r10585896, r10585897, r10585898, r10585899, r10585900, r10585901, r10585902, r10585903, r10585904, r10585905, r10585906, r10585907, r10585908, r10585909, r10585910, r10585911, r10585912, r10585913, r10585914, r10585915, r10585916, r10585917, r10585918, r10585919, r10585920, r10585921, r10585922, r10585923, r10585924, r10585925, r10585926, r10585927, r10585928, r10585929, r10585930, r10585931, r10585932;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10585869, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r10585870);
        mpfr_init(r10585871);
        mpfr_init(r10585872);
        mpfr_init(r10585873);
        mpfr_init(r10585874);
        mpfr_init(r10585875);
        mpfr_init(r10585876);
        mpfr_init_set_str(r10585877, "3", 10, MPFR_RNDN);
        mpfr_init(r10585878);
        mpfr_init_set_str(r10585879, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r10585880);
        mpfr_init(r10585881);
        mpfr_init(r10585882);
        mpfr_init_set_str(r10585883, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r10585884);
        mpfr_init(r10585885);
        mpfr_init(r10585886);
        mpfr_init(r10585887);
        mpfr_init(r10585888);
        mpfr_init(r10585889);
        mpfr_init_set_str(r10585890, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r10585891);
        mpfr_init(r10585892);
        mpfr_init(r10585893);
        mpfr_init_set_str(r10585894, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r10585895);
        mpfr_init(r10585896);
        mpfr_init(r10585897);
        mpfr_init(r10585898);
        mpfr_init_set_str(r10585899, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r10585900);
        mpfr_init_set_str(r10585901, "127.5", 10, MPFR_RNDN);
        mpfr_init(r10585902);
        mpfr_init(r10585903);
        mpfr_init(r10585904);
        mpfr_init_set_str(r10585905, "-18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585906, "76.5", 10, MPFR_RNDN);
        mpfr_init(r10585907);
        mpfr_init(r10585908);
        mpfr_init(r10585909);
        mpfr_init_set_str(r10585910, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r10585911);
        mpfr_init(r10585912);
        mpfr_init(r10585913);
        mpfr_init(r10585914);
        mpfr_init(r10585915);
        mpfr_init_set_str(r10585916, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10585917);
        mpfr_init(r10585918);
        mpfr_init(r10585919);
        mpfr_init(r10585920);
        mpfr_init_set_str(r10585921, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r10585922);
        mpfr_init(r10585923);
        mpfr_init(r10585924);
        mpfr_init_set_str(r10585925, "-0.133984", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585926, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r10585927);
        mpfr_init(r10585928);
        mpfr_init(r10585929);
        mpfr_init(r10585930);
        mpfr_init(r10585931);
        mpfr_init(r10585932);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10585870, x, MPFR_RNDN);
        mpfr_mul(r10585871, r10585869, r10585870, MPFR_RNDN);
        mpfr_mul(r10585872, r10585870, r10585870, MPFR_RNDN);
        mpfr_mul(r10585873, r10585872, r10585872, MPFR_RNDN);
        mpfr_mul(r10585874, r10585871, r10585873, MPFR_RNDN);
        mpfr_mul(r10585875, r10585873, r10585873, MPFR_RNDN);
        mpfr_mul(r10585876, r10585874, r10585875, MPFR_RNDN);
        ;
        mpfr_pow(r10585878, r10585872, r10585877, MPFR_RNDN);
        ;
        mpfr_mul(r10585880, r10585870, r10585879, MPFR_RNDN);
        mpfr_mul(r10585881, r10585870, r10585880, MPFR_RNDN);
        mpfr_mul(r10585882, r10585881, r10585873, MPFR_RNDN);
        ;
        mpfr_mul(r10585884, r10585883, r10585870, MPFR_RNDN);
        mpfr_mul(r10585885, r10585873, r10585884, MPFR_RNDN);
        mpfr_add(r10585886, r10585882, r10585885, MPFR_RNDN);
        mpfr_mul(r10585887, r10585878, r10585886, MPFR_RNDN);
        mpfr_add(r10585888, r10585876, r10585887, MPFR_RNDN);
        mpfr_pow(r10585889, r10585870, r10585877, MPFR_RNDN);
        ;
        mpfr_mul(r10585891, r10585890, r10585870, MPFR_RNDN);
        mpfr_mul(r10585892, r10585889, r10585891, MPFR_RNDN);
        mpfr_mul(r10585893, r10585892, r10585889, MPFR_RNDN);
        ;
        mpfr_mul(r10585895, r10585894, r10585870, MPFR_RNDN);
        mpfr_mul(r10585896, r10585895, r10585870, MPFR_RNDN);
        mpfr_mul(r10585897, r10585896, r10585873, MPFR_RNDN);
        mpfr_add(r10585898, r10585893, r10585897, MPFR_RNDN);
        ;
        mpfr_mul(r10585900, r10585899, r10585870, MPFR_RNDN);
        ;
        mpfr_add(r10585902, r10585900, r10585901, MPFR_RNDN);
        mpfr_mul(r10585903, r10585873, r10585902, MPFR_RNDN);
        mpfr_add(r10585904, r10585898, r10585903, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10585907, r10585906, r10585870, MPFR_RNDN);
        mpfr_add(r10585908, r10585905, r10585907, MPFR_RNDN);
        mpfr_mul(r10585909, r10585870, r10585908, MPFR_RNDN);
        ;
        mpfr_mul(r10585911, r10585870, r10585910, MPFR_RNDN);
        mpfr_mul(r10585912, r10585872, r10585911, MPFR_RNDN);
        mpfr_cbrt(r10585913, r10585912, MPFR_RNDN);
        mpfr_mul(r10585914, r10585913, r10585913, MPFR_RNDN);
        mpfr_mul(r10585915, r10585914, r10585913, MPFR_RNDN);
        ;
        mpfr_add(r10585917, r10585915, r10585916, MPFR_RNDN);
        mpfr_add(r10585918, r10585909, r10585917, MPFR_RNDN);
        mpfr_add(r10585919, r10585904, r10585918, MPFR_RNDN);
        mpfr_add(r10585920, r10585888, r10585919, MPFR_RNDN);
        ;
        mpfr_mul(r10585922, r10585870, r10585921, MPFR_RNDN);
        mpfr_mul(r10585923, r10585922, r10585870, MPFR_RNDN);
        mpfr_mul(r10585924, r10585878, r10585923, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10585927, r10585926, r10585870, MPFR_RNDN);
        mpfr_add(r10585928, r10585925, r10585927, MPFR_RNDN);
        mpfr_mul(r10585929, r10585870, r10585928, MPFR_RNDN);
        mpfr_mul(r10585930, r10585875, r10585929, MPFR_RNDN);
        mpfr_add(r10585931, r10585924, r10585930, MPFR_RNDN);
        mpfr_add(r10585932, r10585920, r10585931, MPFR_RNDN);
        return mpfr_get_d(r10585932, MPFR_RNDN);
}

static mpfr_t r10585933, r10585934, r10585935, r10585936, r10585937, r10585938, r10585939, r10585940, r10585941, r10585942, r10585943, r10585944, r10585945, r10585946, r10585947, r10585948, r10585949, r10585950, r10585951, r10585952, r10585953, r10585954, r10585955, r10585956, r10585957, r10585958, r10585959, r10585960, r10585961, r10585962, r10585963, r10585964, r10585965, r10585966, r10585967, r10585968, r10585969, r10585970, r10585971, r10585972, r10585973, r10585974, r10585975, r10585976, r10585977, r10585978, r10585979, r10585980, r10585981, r10585982, r10585983, r10585984, r10585985, r10585986, r10585987, r10585988, r10585989, r10585990, r10585991, r10585992, r10585993, r10585994, r10585995, r10585996;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10585933, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r10585934);
        mpfr_init(r10585935);
        mpfr_init(r10585936);
        mpfr_init(r10585937);
        mpfr_init(r10585938);
        mpfr_init(r10585939);
        mpfr_init(r10585940);
        mpfr_init_set_str(r10585941, "3", 10, MPFR_RNDN);
        mpfr_init(r10585942);
        mpfr_init_set_str(r10585943, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r10585944);
        mpfr_init(r10585945);
        mpfr_init(r10585946);
        mpfr_init_set_str(r10585947, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r10585948);
        mpfr_init(r10585949);
        mpfr_init(r10585950);
        mpfr_init(r10585951);
        mpfr_init(r10585952);
        mpfr_init(r10585953);
        mpfr_init_set_str(r10585954, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r10585955);
        mpfr_init(r10585956);
        mpfr_init(r10585957);
        mpfr_init_set_str(r10585958, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r10585959);
        mpfr_init(r10585960);
        mpfr_init(r10585961);
        mpfr_init(r10585962);
        mpfr_init_set_str(r10585963, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r10585964);
        mpfr_init_set_str(r10585965, "127.5", 10, MPFR_RNDN);
        mpfr_init(r10585966);
        mpfr_init(r10585967);
        mpfr_init(r10585968);
        mpfr_init_set_str(r10585969, "-18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585970, "76.5", 10, MPFR_RNDN);
        mpfr_init(r10585971);
        mpfr_init(r10585972);
        mpfr_init(r10585973);
        mpfr_init_set_str(r10585974, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r10585975);
        mpfr_init(r10585976);
        mpfr_init(r10585977);
        mpfr_init(r10585978);
        mpfr_init(r10585979);
        mpfr_init_set_str(r10585980, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10585981);
        mpfr_init(r10585982);
        mpfr_init(r10585983);
        mpfr_init(r10585984);
        mpfr_init_set_str(r10585985, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r10585986);
        mpfr_init(r10585987);
        mpfr_init(r10585988);
        mpfr_init_set_str(r10585989, "-0.133984", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585990, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r10585991);
        mpfr_init(r10585992);
        mpfr_init(r10585993);
        mpfr_init(r10585994);
        mpfr_init(r10585995);
        mpfr_init(r10585996);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10585934, x, MPFR_RNDN);
        mpfr_mul(r10585935, r10585933, r10585934, MPFR_RNDN);
        mpfr_mul(r10585936, r10585934, r10585934, MPFR_RNDN);
        mpfr_mul(r10585937, r10585936, r10585936, MPFR_RNDN);
        mpfr_mul(r10585938, r10585935, r10585937, MPFR_RNDN);
        mpfr_mul(r10585939, r10585937, r10585937, MPFR_RNDN);
        mpfr_mul(r10585940, r10585938, r10585939, MPFR_RNDN);
        ;
        mpfr_pow(r10585942, r10585936, r10585941, MPFR_RNDN);
        ;
        mpfr_mul(r10585944, r10585934, r10585943, MPFR_RNDN);
        mpfr_mul(r10585945, r10585934, r10585944, MPFR_RNDN);
        mpfr_mul(r10585946, r10585945, r10585937, MPFR_RNDN);
        ;
        mpfr_mul(r10585948, r10585947, r10585934, MPFR_RNDN);
        mpfr_mul(r10585949, r10585937, r10585948, MPFR_RNDN);
        mpfr_add(r10585950, r10585946, r10585949, MPFR_RNDN);
        mpfr_mul(r10585951, r10585942, r10585950, MPFR_RNDN);
        mpfr_add(r10585952, r10585940, r10585951, MPFR_RNDN);
        mpfr_pow(r10585953, r10585934, r10585941, MPFR_RNDN);
        ;
        mpfr_mul(r10585955, r10585954, r10585934, MPFR_RNDN);
        mpfr_mul(r10585956, r10585953, r10585955, MPFR_RNDN);
        mpfr_mul(r10585957, r10585956, r10585953, MPFR_RNDN);
        ;
        mpfr_mul(r10585959, r10585958, r10585934, MPFR_RNDN);
        mpfr_mul(r10585960, r10585959, r10585934, MPFR_RNDN);
        mpfr_mul(r10585961, r10585960, r10585937, MPFR_RNDN);
        mpfr_add(r10585962, r10585957, r10585961, MPFR_RNDN);
        ;
        mpfr_mul(r10585964, r10585963, r10585934, MPFR_RNDN);
        ;
        mpfr_add(r10585966, r10585964, r10585965, MPFR_RNDN);
        mpfr_mul(r10585967, r10585937, r10585966, MPFR_RNDN);
        mpfr_add(r10585968, r10585962, r10585967, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10585971, r10585970, r10585934, MPFR_RNDN);
        mpfr_add(r10585972, r10585969, r10585971, MPFR_RNDN);
        mpfr_mul(r10585973, r10585934, r10585972, MPFR_RNDN);
        ;
        mpfr_mul(r10585975, r10585934, r10585974, MPFR_RNDN);
        mpfr_mul(r10585976, r10585936, r10585975, MPFR_RNDN);
        mpfr_cbrt(r10585977, r10585976, MPFR_RNDN);
        mpfr_mul(r10585978, r10585977, r10585977, MPFR_RNDN);
        mpfr_mul(r10585979, r10585978, r10585977, MPFR_RNDN);
        ;
        mpfr_add(r10585981, r10585979, r10585980, MPFR_RNDN);
        mpfr_add(r10585982, r10585973, r10585981, MPFR_RNDN);
        mpfr_add(r10585983, r10585968, r10585982, MPFR_RNDN);
        mpfr_add(r10585984, r10585952, r10585983, MPFR_RNDN);
        ;
        mpfr_mul(r10585986, r10585934, r10585985, MPFR_RNDN);
        mpfr_mul(r10585987, r10585986, r10585934, MPFR_RNDN);
        mpfr_mul(r10585988, r10585942, r10585987, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10585991, r10585990, r10585934, MPFR_RNDN);
        mpfr_add(r10585992, r10585989, r10585991, MPFR_RNDN);
        mpfr_mul(r10585993, r10585934, r10585992, MPFR_RNDN);
        mpfr_mul(r10585994, r10585939, r10585993, MPFR_RNDN);
        mpfr_add(r10585995, r10585988, r10585994, MPFR_RNDN);
        mpfr_add(r10585996, r10585984, r10585995, MPFR_RNDN);
        return mpfr_get_d(r10585996, MPFR_RNDN);
}

