#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r13458706 = 1.0;
        float r13458707 = -18.0;
        float r13458708 = x;
        float r13458709 = r13458707 * r13458708;
        float r13458710 = r13458706 + r13458709;
        float r13458711 = 76.5;
        float r13458712 = r13458708 * r13458708;
        float r13458713 = r13458711 * r13458712;
        float r13458714 = r13458710 + r13458713;
        float r13458715 = -136.0;
        float r13458716 = r13458712 * r13458708;
        float r13458717 = r13458715 * r13458716;
        float r13458718 = r13458714 + r13458717;
        float r13458719 = 127.5;
        float r13458720 = r13458716 * r13458708;
        float r13458721 = r13458719 * r13458720;
        float r13458722 = r13458718 + r13458721;
        float r13458723 = -71.4;
        float r13458724 = r13458720 * r13458708;
        float r13458725 = r13458723 * r13458724;
        float r13458726 = r13458722 + r13458725;
        float r13458727 = 25.783333;
        float r13458728 = r13458724 * r13458708;
        float r13458729 = r13458727 * r13458728;
        float r13458730 = r13458726 + r13458729;
        float r13458731 = -6.314286;
        float r13458732 = r13458728 * r13458708;
        float r13458733 = r13458731 * r13458732;
        float r13458734 = r13458730 + r13458733;
        float r13458735 = 1.085268;
        float r13458736 = r13458732 * r13458708;
        float r13458737 = r13458735 * r13458736;
        float r13458738 = r13458734 + r13458737;
        float r13458739 = -0.133984;
        float r13458740 = r13458736 * r13458708;
        float r13458741 = r13458739 * r13458740;
        float r13458742 = r13458738 + r13458741;
        float r13458743 = 0.012059;
        float r13458744 = r13458740 * r13458708;
        float r13458745 = r13458743 * r13458744;
        float r13458746 = r13458742 + r13458745;
        float r13458747 = -0.000797;
        float r13458748 = r13458744 * r13458708;
        float r13458749 = r13458747 * r13458748;
        float r13458750 = r13458746 + r13458749;
        float r13458751 = 3.9e-05;
        float r13458752 = r13458748 * r13458708;
        float r13458753 = r13458751 * r13458752;
        float r13458754 = r13458750 + r13458753;
        float r13458755 = -1e-06;
        float r13458756 = r13458752 * r13458708;
        float r13458757 = r13458755 * r13458756;
        float r13458758 = r13458754 + r13458757;
        return r13458758;
}

double f_id(double x) {
        double r13458759 = 1.0;
        double r13458760 = -18.0;
        double r13458761 = x;
        double r13458762 = r13458760 * r13458761;
        double r13458763 = r13458759 + r13458762;
        double r13458764 = 76.5;
        double r13458765 = r13458761 * r13458761;
        double r13458766 = r13458764 * r13458765;
        double r13458767 = r13458763 + r13458766;
        double r13458768 = -136.0;
        double r13458769 = r13458765 * r13458761;
        double r13458770 = r13458768 * r13458769;
        double r13458771 = r13458767 + r13458770;
        double r13458772 = 127.5;
        double r13458773 = r13458769 * r13458761;
        double r13458774 = r13458772 * r13458773;
        double r13458775 = r13458771 + r13458774;
        double r13458776 = -71.4;
        double r13458777 = r13458773 * r13458761;
        double r13458778 = r13458776 * r13458777;
        double r13458779 = r13458775 + r13458778;
        double r13458780 = 25.783333;
        double r13458781 = r13458777 * r13458761;
        double r13458782 = r13458780 * r13458781;
        double r13458783 = r13458779 + r13458782;
        double r13458784 = -6.314286;
        double r13458785 = r13458781 * r13458761;
        double r13458786 = r13458784 * r13458785;
        double r13458787 = r13458783 + r13458786;
        double r13458788 = 1.085268;
        double r13458789 = r13458785 * r13458761;
        double r13458790 = r13458788 * r13458789;
        double r13458791 = r13458787 + r13458790;
        double r13458792 = -0.133984;
        double r13458793 = r13458789 * r13458761;
        double r13458794 = r13458792 * r13458793;
        double r13458795 = r13458791 + r13458794;
        double r13458796 = 0.012059;
        double r13458797 = r13458793 * r13458761;
        double r13458798 = r13458796 * r13458797;
        double r13458799 = r13458795 + r13458798;
        double r13458800 = -0.000797;
        double r13458801 = r13458797 * r13458761;
        double r13458802 = r13458800 * r13458801;
        double r13458803 = r13458799 + r13458802;
        double r13458804 = 3.9e-05;
        double r13458805 = r13458801 * r13458761;
        double r13458806 = r13458804 * r13458805;
        double r13458807 = r13458803 + r13458806;
        double r13458808 = -1e-06;
        double r13458809 = r13458805 * r13458761;
        double r13458810 = r13458808 * r13458809;
        double r13458811 = r13458807 + r13458810;
        return r13458811;
}


double f_of(float x) {
        float r13458812 = 1.0;
        float r13458813 = -18.0;
        float r13458814 = x;
        float r13458815 = r13458813 * r13458814;
        float r13458816 = r13458812 + r13458815;
        float r13458817 = 76.5;
        float r13458818 = r13458814 * r13458814;
        float r13458819 = r13458817 * r13458818;
        float r13458820 = r13458816 + r13458819;
        float r13458821 = -136.0;
        float r13458822 = r13458821 * r13458814;
        float r13458823 = r13458822 * r13458818;
        float r13458824 = 3;
        float r13458825 = pow(r13458823, r13458824);
        float r13458826 = cbrt(r13458825);
        float r13458827 = r13458820 + r13458826;
        float r13458828 = 127.5;
        float r13458829 = r13458818 * r13458814;
        float r13458830 = r13458829 * r13458814;
        float r13458831 = r13458828 * r13458830;
        float r13458832 = r13458827 + r13458831;
        float r13458833 = -71.4;
        float r13458834 = r13458830 * r13458814;
        float r13458835 = r13458833 * r13458834;
        float r13458836 = r13458832 + r13458835;
        float r13458837 = 25.783333;
        float r13458838 = r13458834 * r13458814;
        float r13458839 = r13458837 * r13458838;
        float r13458840 = r13458836 + r13458839;
        float r13458841 = -6.314286;
        float r13458842 = r13458838 * r13458814;
        float r13458843 = r13458841 * r13458842;
        float r13458844 = r13458840 + r13458843;
        float r13458845 = 1.085268;
        float r13458846 = r13458842 * r13458814;
        float r13458847 = r13458845 * r13458846;
        float r13458848 = r13458844 + r13458847;
        float r13458849 = -0.133984;
        float r13458850 = r13458846 * r13458814;
        float r13458851 = r13458849 * r13458850;
        float r13458852 = r13458848 + r13458851;
        float r13458853 = 0.012059;
        float r13458854 = r13458850 * r13458814;
        float r13458855 = r13458853 * r13458854;
        float r13458856 = r13458852 + r13458855;
        float r13458857 = -0.000797;
        float r13458858 = r13458854 * r13458814;
        float r13458859 = r13458857 * r13458858;
        float r13458860 = r13458856 + r13458859;
        float r13458861 = 3.9e-05;
        float r13458862 = r13458858 * r13458814;
        float r13458863 = r13458861 * r13458862;
        float r13458864 = r13458860 + r13458863;
        float r13458865 = -1e-06;
        float r13458866 = r13458862 * r13458814;
        float r13458867 = r13458865 * r13458866;
        float r13458868 = r13458864 + r13458867;
        return r13458868;
}

double f_od(double x) {
        double r13458869 = 1.0;
        double r13458870 = -18.0;
        double r13458871 = x;
        double r13458872 = r13458870 * r13458871;
        double r13458873 = r13458869 + r13458872;
        double r13458874 = 76.5;
        double r13458875 = r13458871 * r13458871;
        double r13458876 = r13458874 * r13458875;
        double r13458877 = r13458873 + r13458876;
        double r13458878 = -136.0;
        double r13458879 = r13458878 * r13458871;
        double r13458880 = r13458879 * r13458875;
        double r13458881 = 3;
        double r13458882 = pow(r13458880, r13458881);
        double r13458883 = cbrt(r13458882);
        double r13458884 = r13458877 + r13458883;
        double r13458885 = 127.5;
        double r13458886 = r13458875 * r13458871;
        double r13458887 = r13458886 * r13458871;
        double r13458888 = r13458885 * r13458887;
        double r13458889 = r13458884 + r13458888;
        double r13458890 = -71.4;
        double r13458891 = r13458887 * r13458871;
        double r13458892 = r13458890 * r13458891;
        double r13458893 = r13458889 + r13458892;
        double r13458894 = 25.783333;
        double r13458895 = r13458891 * r13458871;
        double r13458896 = r13458894 * r13458895;
        double r13458897 = r13458893 + r13458896;
        double r13458898 = -6.314286;
        double r13458899 = r13458895 * r13458871;
        double r13458900 = r13458898 * r13458899;
        double r13458901 = r13458897 + r13458900;
        double r13458902 = 1.085268;
        double r13458903 = r13458899 * r13458871;
        double r13458904 = r13458902 * r13458903;
        double r13458905 = r13458901 + r13458904;
        double r13458906 = -0.133984;
        double r13458907 = r13458903 * r13458871;
        double r13458908 = r13458906 * r13458907;
        double r13458909 = r13458905 + r13458908;
        double r13458910 = 0.012059;
        double r13458911 = r13458907 * r13458871;
        double r13458912 = r13458910 * r13458911;
        double r13458913 = r13458909 + r13458912;
        double r13458914 = -0.000797;
        double r13458915 = r13458911 * r13458871;
        double r13458916 = r13458914 * r13458915;
        double r13458917 = r13458913 + r13458916;
        double r13458918 = 3.9e-05;
        double r13458919 = r13458915 * r13458871;
        double r13458920 = r13458918 * r13458919;
        double r13458921 = r13458917 + r13458920;
        double r13458922 = -1e-06;
        double r13458923 = r13458919 * r13458871;
        double r13458924 = r13458922 * r13458923;
        double r13458925 = r13458921 + r13458924;
        return r13458925;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13458926, r13458927, r13458928, r13458929, r13458930, r13458931, r13458932, r13458933, r13458934, r13458935, r13458936, r13458937, r13458938, r13458939, r13458940, r13458941, r13458942, r13458943, r13458944, r13458945, r13458946, r13458947, r13458948, r13458949, r13458950, r13458951, r13458952, r13458953, r13458954, r13458955, r13458956, r13458957, r13458958, r13458959, r13458960, r13458961, r13458962, r13458963, r13458964, r13458965, r13458966, r13458967, r13458968, r13458969, r13458970, r13458971, r13458972, r13458973, r13458974, r13458975, r13458976, r13458977, r13458978;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13458926, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458927, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r13458928);
        mpfr_init(r13458929);
        mpfr_init(r13458930);
        mpfr_init_set_str(r13458931, "76.5", 10, MPFR_RNDN);
        mpfr_init(r13458932);
        mpfr_init(r13458933);
        mpfr_init(r13458934);
        mpfr_init_set_str(r13458935, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r13458936);
        mpfr_init(r13458937);
        mpfr_init(r13458938);
        mpfr_init_set_str(r13458939, "127.5", 10, MPFR_RNDN);
        mpfr_init(r13458940);
        mpfr_init(r13458941);
        mpfr_init(r13458942);
        mpfr_init_set_str(r13458943, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r13458944);
        mpfr_init(r13458945);
        mpfr_init(r13458946);
        mpfr_init_set_str(r13458947, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r13458948);
        mpfr_init(r13458949);
        mpfr_init(r13458950);
        mpfr_init_set_str(r13458951, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r13458952);
        mpfr_init(r13458953);
        mpfr_init(r13458954);
        mpfr_init_set_str(r13458955, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r13458956);
        mpfr_init(r13458957);
        mpfr_init(r13458958);
        mpfr_init_set_str(r13458959, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r13458960);
        mpfr_init(r13458961);
        mpfr_init(r13458962);
        mpfr_init_set_str(r13458963, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r13458964);
        mpfr_init(r13458965);
        mpfr_init(r13458966);
        mpfr_init_set_str(r13458967, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r13458968);
        mpfr_init(r13458969);
        mpfr_init(r13458970);
        mpfr_init_set_str(r13458971, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r13458972);
        mpfr_init(r13458973);
        mpfr_init(r13458974);
        mpfr_init_set_str(r13458975, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r13458976);
        mpfr_init(r13458977);
        mpfr_init(r13458978);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13458928, x, MPFR_RNDN);
        mpfr_mul(r13458929, r13458927, r13458928, MPFR_RNDN);
        mpfr_add(r13458930, r13458926, r13458929, MPFR_RNDN);
        ;
        mpfr_mul(r13458932, r13458928, r13458928, MPFR_RNDN);
        mpfr_mul(r13458933, r13458931, r13458932, MPFR_RNDN);
        mpfr_add(r13458934, r13458930, r13458933, MPFR_RNDN);
        ;
        mpfr_mul(r13458936, r13458932, r13458928, MPFR_RNDN);
        mpfr_mul(r13458937, r13458935, r13458936, MPFR_RNDN);
        mpfr_add(r13458938, r13458934, r13458937, MPFR_RNDN);
        ;
        mpfr_mul(r13458940, r13458936, r13458928, MPFR_RNDN);
        mpfr_mul(r13458941, r13458939, r13458940, MPFR_RNDN);
        mpfr_add(r13458942, r13458938, r13458941, MPFR_RNDN);
        ;
        mpfr_mul(r13458944, r13458940, r13458928, MPFR_RNDN);
        mpfr_mul(r13458945, r13458943, r13458944, MPFR_RNDN);
        mpfr_add(r13458946, r13458942, r13458945, MPFR_RNDN);
        ;
        mpfr_mul(r13458948, r13458944, r13458928, MPFR_RNDN);
        mpfr_mul(r13458949, r13458947, r13458948, MPFR_RNDN);
        mpfr_add(r13458950, r13458946, r13458949, MPFR_RNDN);
        ;
        mpfr_mul(r13458952, r13458948, r13458928, MPFR_RNDN);
        mpfr_mul(r13458953, r13458951, r13458952, MPFR_RNDN);
        mpfr_add(r13458954, r13458950, r13458953, MPFR_RNDN);
        ;
        mpfr_mul(r13458956, r13458952, r13458928, MPFR_RNDN);
        mpfr_mul(r13458957, r13458955, r13458956, MPFR_RNDN);
        mpfr_add(r13458958, r13458954, r13458957, MPFR_RNDN);
        ;
        mpfr_mul(r13458960, r13458956, r13458928, MPFR_RNDN);
        mpfr_mul(r13458961, r13458959, r13458960, MPFR_RNDN);
        mpfr_add(r13458962, r13458958, r13458961, MPFR_RNDN);
        ;
        mpfr_mul(r13458964, r13458960, r13458928, MPFR_RNDN);
        mpfr_mul(r13458965, r13458963, r13458964, MPFR_RNDN);
        mpfr_add(r13458966, r13458962, r13458965, MPFR_RNDN);
        ;
        mpfr_mul(r13458968, r13458964, r13458928, MPFR_RNDN);
        mpfr_mul(r13458969, r13458967, r13458968, MPFR_RNDN);
        mpfr_add(r13458970, r13458966, r13458969, MPFR_RNDN);
        ;
        mpfr_mul(r13458972, r13458968, r13458928, MPFR_RNDN);
        mpfr_mul(r13458973, r13458971, r13458972, MPFR_RNDN);
        mpfr_add(r13458974, r13458970, r13458973, MPFR_RNDN);
        ;
        mpfr_mul(r13458976, r13458972, r13458928, MPFR_RNDN);
        mpfr_mul(r13458977, r13458975, r13458976, MPFR_RNDN);
        mpfr_add(r13458978, r13458974, r13458977, MPFR_RNDN);
        return mpfr_get_d(r13458978, MPFR_RNDN);
}

static mpfr_t r13458979, r13458980, r13458981, r13458982, r13458983, r13458984, r13458985, r13458986, r13458987, r13458988, r13458989, r13458990, r13458991, r13458992, r13458993, r13458994, r13458995, r13458996, r13458997, r13458998, r13458999, r13459000, r13459001, r13459002, r13459003, r13459004, r13459005, r13459006, r13459007, r13459008, r13459009, r13459010, r13459011, r13459012, r13459013, r13459014, r13459015, r13459016, r13459017, r13459018, r13459019, r13459020, r13459021, r13459022, r13459023, r13459024, r13459025, r13459026, r13459027, r13459028, r13459029, r13459030, r13459031, r13459032, r13459033, r13459034, r13459035;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13458979, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458980, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r13458981);
        mpfr_init(r13458982);
        mpfr_init(r13458983);
        mpfr_init_set_str(r13458984, "76.5", 10, MPFR_RNDN);
        mpfr_init(r13458985);
        mpfr_init(r13458986);
        mpfr_init(r13458987);
        mpfr_init_set_str(r13458988, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r13458989);
        mpfr_init(r13458990);
        mpfr_init_set_str(r13458991, "3", 10, MPFR_RNDN);
        mpfr_init(r13458992);
        mpfr_init(r13458993);
        mpfr_init(r13458994);
        mpfr_init_set_str(r13458995, "127.5", 10, MPFR_RNDN);
        mpfr_init(r13458996);
        mpfr_init(r13458997);
        mpfr_init(r13458998);
        mpfr_init(r13458999);
        mpfr_init_set_str(r13459000, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r13459001);
        mpfr_init(r13459002);
        mpfr_init(r13459003);
        mpfr_init_set_str(r13459004, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r13459005);
        mpfr_init(r13459006);
        mpfr_init(r13459007);
        mpfr_init_set_str(r13459008, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r13459009);
        mpfr_init(r13459010);
        mpfr_init(r13459011);
        mpfr_init_set_str(r13459012, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r13459013);
        mpfr_init(r13459014);
        mpfr_init(r13459015);
        mpfr_init_set_str(r13459016, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r13459017);
        mpfr_init(r13459018);
        mpfr_init(r13459019);
        mpfr_init_set_str(r13459020, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r13459021);
        mpfr_init(r13459022);
        mpfr_init(r13459023);
        mpfr_init_set_str(r13459024, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r13459025);
        mpfr_init(r13459026);
        mpfr_init(r13459027);
        mpfr_init_set_str(r13459028, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r13459029);
        mpfr_init(r13459030);
        mpfr_init(r13459031);
        mpfr_init_set_str(r13459032, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r13459033);
        mpfr_init(r13459034);
        mpfr_init(r13459035);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r13458981, x, MPFR_RNDN);
        mpfr_mul(r13458982, r13458980, r13458981, MPFR_RNDN);
        mpfr_add(r13458983, r13458979, r13458982, MPFR_RNDN);
        ;
        mpfr_mul(r13458985, r13458981, r13458981, MPFR_RNDN);
        mpfr_mul(r13458986, r13458984, r13458985, MPFR_RNDN);
        mpfr_add(r13458987, r13458983, r13458986, MPFR_RNDN);
        ;
        mpfr_mul(r13458989, r13458988, r13458981, MPFR_RNDN);
        mpfr_mul(r13458990, r13458989, r13458985, MPFR_RNDN);
        ;
        mpfr_pow(r13458992, r13458990, r13458991, MPFR_RNDN);
        mpfr_cbrt(r13458993, r13458992, MPFR_RNDN);
        mpfr_add(r13458994, r13458987, r13458993, MPFR_RNDN);
        ;
        mpfr_mul(r13458996, r13458985, r13458981, MPFR_RNDN);
        mpfr_mul(r13458997, r13458996, r13458981, MPFR_RNDN);
        mpfr_mul(r13458998, r13458995, r13458997, MPFR_RNDN);
        mpfr_add(r13458999, r13458994, r13458998, MPFR_RNDN);
        ;
        mpfr_mul(r13459001, r13458997, r13458981, MPFR_RNDN);
        mpfr_mul(r13459002, r13459000, r13459001, MPFR_RNDN);
        mpfr_add(r13459003, r13458999, r13459002, MPFR_RNDN);
        ;
        mpfr_mul(r13459005, r13459001, r13458981, MPFR_RNDN);
        mpfr_mul(r13459006, r13459004, r13459005, MPFR_RNDN);
        mpfr_add(r13459007, r13459003, r13459006, MPFR_RNDN);
        ;
        mpfr_mul(r13459009, r13459005, r13458981, MPFR_RNDN);
        mpfr_mul(r13459010, r13459008, r13459009, MPFR_RNDN);
        mpfr_add(r13459011, r13459007, r13459010, MPFR_RNDN);
        ;
        mpfr_mul(r13459013, r13459009, r13458981, MPFR_RNDN);
        mpfr_mul(r13459014, r13459012, r13459013, MPFR_RNDN);
        mpfr_add(r13459015, r13459011, r13459014, MPFR_RNDN);
        ;
        mpfr_mul(r13459017, r13459013, r13458981, MPFR_RNDN);
        mpfr_mul(r13459018, r13459016, r13459017, MPFR_RNDN);
        mpfr_add(r13459019, r13459015, r13459018, MPFR_RNDN);
        ;
        mpfr_mul(r13459021, r13459017, r13458981, MPFR_RNDN);
        mpfr_mul(r13459022, r13459020, r13459021, MPFR_RNDN);
        mpfr_add(r13459023, r13459019, r13459022, MPFR_RNDN);
        ;
        mpfr_mul(r13459025, r13459021, r13458981, MPFR_RNDN);
        mpfr_mul(r13459026, r13459024, r13459025, MPFR_RNDN);
        mpfr_add(r13459027, r13459023, r13459026, MPFR_RNDN);
        ;
        mpfr_mul(r13459029, r13459025, r13458981, MPFR_RNDN);
        mpfr_mul(r13459030, r13459028, r13459029, MPFR_RNDN);
        mpfr_add(r13459031, r13459027, r13459030, MPFR_RNDN);
        ;
        mpfr_mul(r13459033, r13459029, r13458981, MPFR_RNDN);
        mpfr_mul(r13459034, r13459032, r13459033, MPFR_RNDN);
        mpfr_add(r13459035, r13459031, r13459034, MPFR_RNDN);
        return mpfr_get_d(r13459035, MPFR_RNDN);
}

static mpfr_t r13459036, r13459037, r13459038, r13459039, r13459040, r13459041, r13459042, r13459043, r13459044, r13459045, r13459046, r13459047, r13459048, r13459049, r13459050, r13459051, r13459052, r13459053, r13459054, r13459055, r13459056, r13459057, r13459058, r13459059, r13459060, r13459061, r13459062, r13459063, r13459064, r13459065, r13459066, r13459067, r13459068, r13459069, r13459070, r13459071, r13459072, r13459073, r13459074, r13459075, r13459076, r13459077, r13459078, r13459079, r13459080, r13459081, r13459082, r13459083, r13459084, r13459085, r13459086, r13459087, r13459088, r13459089, r13459090, r13459091, r13459092;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13459036, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13459037, "-18.0", 10, MPFR_RNDN);
        mpfr_init(r13459038);
        mpfr_init(r13459039);
        mpfr_init(r13459040);
        mpfr_init_set_str(r13459041, "76.5", 10, MPFR_RNDN);
        mpfr_init(r13459042);
        mpfr_init(r13459043);
        mpfr_init(r13459044);
        mpfr_init_set_str(r13459045, "-136.0", 10, MPFR_RNDN);
        mpfr_init(r13459046);
        mpfr_init(r13459047);
        mpfr_init_set_str(r13459048, "3", 10, MPFR_RNDN);
        mpfr_init(r13459049);
        mpfr_init(r13459050);
        mpfr_init(r13459051);
        mpfr_init_set_str(r13459052, "127.5", 10, MPFR_RNDN);
        mpfr_init(r13459053);
        mpfr_init(r13459054);
        mpfr_init(r13459055);
        mpfr_init(r13459056);
        mpfr_init_set_str(r13459057, "-71.4", 10, MPFR_RNDN);
        mpfr_init(r13459058);
        mpfr_init(r13459059);
        mpfr_init(r13459060);
        mpfr_init_set_str(r13459061, "25.783333", 10, MPFR_RNDN);
        mpfr_init(r13459062);
        mpfr_init(r13459063);
        mpfr_init(r13459064);
        mpfr_init_set_str(r13459065, "-6.314286", 10, MPFR_RNDN);
        mpfr_init(r13459066);
        mpfr_init(r13459067);
        mpfr_init(r13459068);
        mpfr_init_set_str(r13459069, "1.085268", 10, MPFR_RNDN);
        mpfr_init(r13459070);
        mpfr_init(r13459071);
        mpfr_init(r13459072);
        mpfr_init_set_str(r13459073, "-0.133984", 10, MPFR_RNDN);
        mpfr_init(r13459074);
        mpfr_init(r13459075);
        mpfr_init(r13459076);
        mpfr_init_set_str(r13459077, "0.012059", 10, MPFR_RNDN);
        mpfr_init(r13459078);
        mpfr_init(r13459079);
        mpfr_init(r13459080);
        mpfr_init_set_str(r13459081, "-0.000797", 10, MPFR_RNDN);
        mpfr_init(r13459082);
        mpfr_init(r13459083);
        mpfr_init(r13459084);
        mpfr_init_set_str(r13459085, "3.9e-05", 10, MPFR_RNDN);
        mpfr_init(r13459086);
        mpfr_init(r13459087);
        mpfr_init(r13459088);
        mpfr_init_set_str(r13459089, "-1e-06", 10, MPFR_RNDN);
        mpfr_init(r13459090);
        mpfr_init(r13459091);
        mpfr_init(r13459092);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r13459038, x, MPFR_RNDN);
        mpfr_mul(r13459039, r13459037, r13459038, MPFR_RNDN);
        mpfr_add(r13459040, r13459036, r13459039, MPFR_RNDN);
        ;
        mpfr_mul(r13459042, r13459038, r13459038, MPFR_RNDN);
        mpfr_mul(r13459043, r13459041, r13459042, MPFR_RNDN);
        mpfr_add(r13459044, r13459040, r13459043, MPFR_RNDN);
        ;
        mpfr_mul(r13459046, r13459045, r13459038, MPFR_RNDN);
        mpfr_mul(r13459047, r13459046, r13459042, MPFR_RNDN);
        ;
        mpfr_pow(r13459049, r13459047, r13459048, MPFR_RNDN);
        mpfr_cbrt(r13459050, r13459049, MPFR_RNDN);
        mpfr_add(r13459051, r13459044, r13459050, MPFR_RNDN);
        ;
        mpfr_mul(r13459053, r13459042, r13459038, MPFR_RNDN);
        mpfr_mul(r13459054, r13459053, r13459038, MPFR_RNDN);
        mpfr_mul(r13459055, r13459052, r13459054, MPFR_RNDN);
        mpfr_add(r13459056, r13459051, r13459055, MPFR_RNDN);
        ;
        mpfr_mul(r13459058, r13459054, r13459038, MPFR_RNDN);
        mpfr_mul(r13459059, r13459057, r13459058, MPFR_RNDN);
        mpfr_add(r13459060, r13459056, r13459059, MPFR_RNDN);
        ;
        mpfr_mul(r13459062, r13459058, r13459038, MPFR_RNDN);
        mpfr_mul(r13459063, r13459061, r13459062, MPFR_RNDN);
        mpfr_add(r13459064, r13459060, r13459063, MPFR_RNDN);
        ;
        mpfr_mul(r13459066, r13459062, r13459038, MPFR_RNDN);
        mpfr_mul(r13459067, r13459065, r13459066, MPFR_RNDN);
        mpfr_add(r13459068, r13459064, r13459067, MPFR_RNDN);
        ;
        mpfr_mul(r13459070, r13459066, r13459038, MPFR_RNDN);
        mpfr_mul(r13459071, r13459069, r13459070, MPFR_RNDN);
        mpfr_add(r13459072, r13459068, r13459071, MPFR_RNDN);
        ;
        mpfr_mul(r13459074, r13459070, r13459038, MPFR_RNDN);
        mpfr_mul(r13459075, r13459073, r13459074, MPFR_RNDN);
        mpfr_add(r13459076, r13459072, r13459075, MPFR_RNDN);
        ;
        mpfr_mul(r13459078, r13459074, r13459038, MPFR_RNDN);
        mpfr_mul(r13459079, r13459077, r13459078, MPFR_RNDN);
        mpfr_add(r13459080, r13459076, r13459079, MPFR_RNDN);
        ;
        mpfr_mul(r13459082, r13459078, r13459038, MPFR_RNDN);
        mpfr_mul(r13459083, r13459081, r13459082, MPFR_RNDN);
        mpfr_add(r13459084, r13459080, r13459083, MPFR_RNDN);
        ;
        mpfr_mul(r13459086, r13459082, r13459038, MPFR_RNDN);
        mpfr_mul(r13459087, r13459085, r13459086, MPFR_RNDN);
        mpfr_add(r13459088, r13459084, r13459087, MPFR_RNDN);
        ;
        mpfr_mul(r13459090, r13459086, r13459038, MPFR_RNDN);
        mpfr_mul(r13459091, r13459089, r13459090, MPFR_RNDN);
        mpfr_add(r13459092, r13459088, r13459091, MPFR_RNDN);
        return mpfr_get_d(r13459092, MPFR_RNDN);
}

