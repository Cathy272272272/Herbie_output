#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r9855692 = 1.0;
        float r9855693 = -12.0;
        float r9855694 = x;
        float r9855695 = r9855693 * r9855694;
        float r9855696 = r9855692 + r9855695;
        float r9855697 = 33.0;
        float r9855698 = r9855694 * r9855694;
        float r9855699 = r9855697 * r9855698;
        float r9855700 = r9855696 + r9855699;
        float r9855701 = -36.666667;
        float r9855702 = r9855698 * r9855694;
        float r9855703 = r9855701 * r9855702;
        float r9855704 = r9855700 + r9855703;
        float r9855705 = 20.625;
        float r9855706 = r9855702 * r9855694;
        float r9855707 = r9855705 * r9855706;
        float r9855708 = r9855704 + r9855707;
        float r9855709 = -6.6;
        float r9855710 = r9855706 * r9855694;
        float r9855711 = r9855709 * r9855710;
        float r9855712 = r9855708 + r9855711;
        float r9855713 = 1.283333;
        float r9855714 = r9855710 * r9855694;
        float r9855715 = r9855713 * r9855714;
        float r9855716 = r9855712 + r9855715;
        float r9855717 = -0.157143;
        float r9855718 = r9855714 * r9855694;
        float r9855719 = r9855717 * r9855718;
        float r9855720 = r9855716 + r9855719;
        float r9855721 = 0.012277;
        float r9855722 = r9855718 * r9855694;
        float r9855723 = r9855721 * r9855722;
        float r9855724 = r9855720 + r9855723;
        float r9855725 = -0.000606;
        float r9855726 = r9855722 * r9855694;
        float r9855727 = r9855725 * r9855726;
        float r9855728 = r9855724 + r9855727;
        float r9855729 = 1.8e-05;
        float r9855730 = r9855726 * r9855694;
        float r9855731 = r9855729 * r9855730;
        float r9855732 = r9855728 + r9855731;
        return r9855732;
}

double f_id(double x) {
        double r9855733 = 1.0;
        double r9855734 = -12.0;
        double r9855735 = x;
        double r9855736 = r9855734 * r9855735;
        double r9855737 = r9855733 + r9855736;
        double r9855738 = 33.0;
        double r9855739 = r9855735 * r9855735;
        double r9855740 = r9855738 * r9855739;
        double r9855741 = r9855737 + r9855740;
        double r9855742 = -36.666667;
        double r9855743 = r9855739 * r9855735;
        double r9855744 = r9855742 * r9855743;
        double r9855745 = r9855741 + r9855744;
        double r9855746 = 20.625;
        double r9855747 = r9855743 * r9855735;
        double r9855748 = r9855746 * r9855747;
        double r9855749 = r9855745 + r9855748;
        double r9855750 = -6.6;
        double r9855751 = r9855747 * r9855735;
        double r9855752 = r9855750 * r9855751;
        double r9855753 = r9855749 + r9855752;
        double r9855754 = 1.283333;
        double r9855755 = r9855751 * r9855735;
        double r9855756 = r9855754 * r9855755;
        double r9855757 = r9855753 + r9855756;
        double r9855758 = -0.157143;
        double r9855759 = r9855755 * r9855735;
        double r9855760 = r9855758 * r9855759;
        double r9855761 = r9855757 + r9855760;
        double r9855762 = 0.012277;
        double r9855763 = r9855759 * r9855735;
        double r9855764 = r9855762 * r9855763;
        double r9855765 = r9855761 + r9855764;
        double r9855766 = -0.000606;
        double r9855767 = r9855763 * r9855735;
        double r9855768 = r9855766 * r9855767;
        double r9855769 = r9855765 + r9855768;
        double r9855770 = 1.8e-05;
        double r9855771 = r9855767 * r9855735;
        double r9855772 = r9855770 * r9855771;
        double r9855773 = r9855769 + r9855772;
        return r9855773;
}


double f_of(float x) {
        float r9855774 = 1.0;
        float r9855775 = -12.0;
        float r9855776 = x;
        float r9855777 = r9855775 * r9855776;
        float r9855778 = r9855774 + r9855777;
        float r9855779 = 33.0;
        float r9855780 = r9855776 * r9855776;
        float r9855781 = r9855779 * r9855780;
        float r9855782 = r9855778 + r9855781;
        float r9855783 = -36.666667;
        float r9855784 = r9855780 * r9855776;
        float r9855785 = r9855783 * r9855784;
        float r9855786 = r9855782 + r9855785;
        float r9855787 = 20.625;
        float r9855788 = r9855784 * r9855776;
        float r9855789 = r9855787 * r9855788;
        float r9855790 = r9855786 + r9855789;
        float r9855791 = -6.6;
        float r9855792 = r9855788 * r9855776;
        float r9855793 = r9855791 * r9855792;
        float r9855794 = r9855790 + r9855793;
        float r9855795 = 1.283333;
        float r9855796 = r9855792 * r9855776;
        float r9855797 = r9855795 * r9855796;
        float r9855798 = r9855794 + r9855797;
        float r9855799 = -0.157143;
        float r9855800 = r9855796 * r9855776;
        float r9855801 = r9855799 * r9855800;
        float r9855802 = r9855798 + r9855801;
        float r9855803 = 0.012277;
        float r9855804 = r9855800 * r9855776;
        float r9855805 = r9855803 * r9855804;
        float r9855806 = r9855802 + r9855805;
        float r9855807 = -0.000606;
        float r9855808 = r9855804 * r9855776;
        float r9855809 = r9855807 * r9855808;
        float r9855810 = r9855806 + r9855809;
        float r9855811 = 1.8e-05;
        float r9855812 = 3;
        float r9855813 = 1;
        float r9855814 = r9855812 + r9855813;
        float r9855815 = pow(r9855776, r9855814);
        float r9855816 = r9855815 * r9855776;
        float r9855817 = r9855816 * r9855776;
        float r9855818 = r9855817 * r9855776;
        float r9855819 = r9855818 * r9855776;
        float r9855820 = r9855819 * r9855776;
        float r9855821 = r9855820 * r9855776;
        float r9855822 = r9855811 * r9855821;
        float r9855823 = r9855810 + r9855822;
        return r9855823;
}

double f_od(double x) {
        double r9855824 = 1.0;
        double r9855825 = -12.0;
        double r9855826 = x;
        double r9855827 = r9855825 * r9855826;
        double r9855828 = r9855824 + r9855827;
        double r9855829 = 33.0;
        double r9855830 = r9855826 * r9855826;
        double r9855831 = r9855829 * r9855830;
        double r9855832 = r9855828 + r9855831;
        double r9855833 = -36.666667;
        double r9855834 = r9855830 * r9855826;
        double r9855835 = r9855833 * r9855834;
        double r9855836 = r9855832 + r9855835;
        double r9855837 = 20.625;
        double r9855838 = r9855834 * r9855826;
        double r9855839 = r9855837 * r9855838;
        double r9855840 = r9855836 + r9855839;
        double r9855841 = -6.6;
        double r9855842 = r9855838 * r9855826;
        double r9855843 = r9855841 * r9855842;
        double r9855844 = r9855840 + r9855843;
        double r9855845 = 1.283333;
        double r9855846 = r9855842 * r9855826;
        double r9855847 = r9855845 * r9855846;
        double r9855848 = r9855844 + r9855847;
        double r9855849 = -0.157143;
        double r9855850 = r9855846 * r9855826;
        double r9855851 = r9855849 * r9855850;
        double r9855852 = r9855848 + r9855851;
        double r9855853 = 0.012277;
        double r9855854 = r9855850 * r9855826;
        double r9855855 = r9855853 * r9855854;
        double r9855856 = r9855852 + r9855855;
        double r9855857 = -0.000606;
        double r9855858 = r9855854 * r9855826;
        double r9855859 = r9855857 * r9855858;
        double r9855860 = r9855856 + r9855859;
        double r9855861 = 1.8e-05;
        double r9855862 = 3;
        double r9855863 = 1;
        double r9855864 = r9855862 + r9855863;
        double r9855865 = pow(r9855826, r9855864);
        double r9855866 = r9855865 * r9855826;
        double r9855867 = r9855866 * r9855826;
        double r9855868 = r9855867 * r9855826;
        double r9855869 = r9855868 * r9855826;
        double r9855870 = r9855869 * r9855826;
        double r9855871 = r9855870 * r9855826;
        double r9855872 = r9855861 * r9855871;
        double r9855873 = r9855860 + r9855872;
        return r9855873;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9855874, r9855875, r9855876, r9855877, r9855878, r9855879, r9855880, r9855881, r9855882, r9855883, r9855884, r9855885, r9855886, r9855887, r9855888, r9855889, r9855890, r9855891, r9855892, r9855893, r9855894, r9855895, r9855896, r9855897, r9855898, r9855899, r9855900, r9855901, r9855902, r9855903, r9855904, r9855905, r9855906, r9855907, r9855908, r9855909, r9855910, r9855911, r9855912, r9855913, r9855914;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9855874, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9855875, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9855876);
        mpfr_init(r9855877);
        mpfr_init(r9855878);
        mpfr_init_set_str(r9855879, "33.0", 10, MPFR_RNDN);
        mpfr_init(r9855880);
        mpfr_init(r9855881);
        mpfr_init(r9855882);
        mpfr_init_set_str(r9855883, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r9855884);
        mpfr_init(r9855885);
        mpfr_init(r9855886);
        mpfr_init_set_str(r9855887, "20.625", 10, MPFR_RNDN);
        mpfr_init(r9855888);
        mpfr_init(r9855889);
        mpfr_init(r9855890);
        mpfr_init_set_str(r9855891, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r9855892);
        mpfr_init(r9855893);
        mpfr_init(r9855894);
        mpfr_init_set_str(r9855895, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r9855896);
        mpfr_init(r9855897);
        mpfr_init(r9855898);
        mpfr_init_set_str(r9855899, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r9855900);
        mpfr_init(r9855901);
        mpfr_init(r9855902);
        mpfr_init_set_str(r9855903, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r9855904);
        mpfr_init(r9855905);
        mpfr_init(r9855906);
        mpfr_init_set_str(r9855907, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r9855908);
        mpfr_init(r9855909);
        mpfr_init(r9855910);
        mpfr_init_set_str(r9855911, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9855912);
        mpfr_init(r9855913);
        mpfr_init(r9855914);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9855876, x, MPFR_RNDN);
        mpfr_mul(r9855877, r9855875, r9855876, MPFR_RNDN);
        mpfr_add(r9855878, r9855874, r9855877, MPFR_RNDN);
        ;
        mpfr_mul(r9855880, r9855876, r9855876, MPFR_RNDN);
        mpfr_mul(r9855881, r9855879, r9855880, MPFR_RNDN);
        mpfr_add(r9855882, r9855878, r9855881, MPFR_RNDN);
        ;
        mpfr_mul(r9855884, r9855880, r9855876, MPFR_RNDN);
        mpfr_mul(r9855885, r9855883, r9855884, MPFR_RNDN);
        mpfr_add(r9855886, r9855882, r9855885, MPFR_RNDN);
        ;
        mpfr_mul(r9855888, r9855884, r9855876, MPFR_RNDN);
        mpfr_mul(r9855889, r9855887, r9855888, MPFR_RNDN);
        mpfr_add(r9855890, r9855886, r9855889, MPFR_RNDN);
        ;
        mpfr_mul(r9855892, r9855888, r9855876, MPFR_RNDN);
        mpfr_mul(r9855893, r9855891, r9855892, MPFR_RNDN);
        mpfr_add(r9855894, r9855890, r9855893, MPFR_RNDN);
        ;
        mpfr_mul(r9855896, r9855892, r9855876, MPFR_RNDN);
        mpfr_mul(r9855897, r9855895, r9855896, MPFR_RNDN);
        mpfr_add(r9855898, r9855894, r9855897, MPFR_RNDN);
        ;
        mpfr_mul(r9855900, r9855896, r9855876, MPFR_RNDN);
        mpfr_mul(r9855901, r9855899, r9855900, MPFR_RNDN);
        mpfr_add(r9855902, r9855898, r9855901, MPFR_RNDN);
        ;
        mpfr_mul(r9855904, r9855900, r9855876, MPFR_RNDN);
        mpfr_mul(r9855905, r9855903, r9855904, MPFR_RNDN);
        mpfr_add(r9855906, r9855902, r9855905, MPFR_RNDN);
        ;
        mpfr_mul(r9855908, r9855904, r9855876, MPFR_RNDN);
        mpfr_mul(r9855909, r9855907, r9855908, MPFR_RNDN);
        mpfr_add(r9855910, r9855906, r9855909, MPFR_RNDN);
        ;
        mpfr_mul(r9855912, r9855908, r9855876, MPFR_RNDN);
        mpfr_mul(r9855913, r9855911, r9855912, MPFR_RNDN);
        mpfr_add(r9855914, r9855910, r9855913, MPFR_RNDN);
        return mpfr_get_d(r9855914, MPFR_RNDN);
}

static mpfr_t r9855915, r9855916, r9855917, r9855918, r9855919, r9855920, r9855921, r9855922, r9855923, r9855924, r9855925, r9855926, r9855927, r9855928, r9855929, r9855930, r9855931, r9855932, r9855933, r9855934, r9855935, r9855936, r9855937, r9855938, r9855939, r9855940, r9855941, r9855942, r9855943, r9855944, r9855945, r9855946, r9855947, r9855948, r9855949, r9855950, r9855951, r9855952, r9855953, r9855954, r9855955, r9855956, r9855957, r9855958, r9855959, r9855960, r9855961, r9855962, r9855963, r9855964;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9855915, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9855916, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9855917);
        mpfr_init(r9855918);
        mpfr_init(r9855919);
        mpfr_init_set_str(r9855920, "33.0", 10, MPFR_RNDN);
        mpfr_init(r9855921);
        mpfr_init(r9855922);
        mpfr_init(r9855923);
        mpfr_init_set_str(r9855924, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r9855925);
        mpfr_init(r9855926);
        mpfr_init(r9855927);
        mpfr_init_set_str(r9855928, "20.625", 10, MPFR_RNDN);
        mpfr_init(r9855929);
        mpfr_init(r9855930);
        mpfr_init(r9855931);
        mpfr_init_set_str(r9855932, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r9855933);
        mpfr_init(r9855934);
        mpfr_init(r9855935);
        mpfr_init_set_str(r9855936, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r9855937);
        mpfr_init(r9855938);
        mpfr_init(r9855939);
        mpfr_init_set_str(r9855940, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r9855941);
        mpfr_init(r9855942);
        mpfr_init(r9855943);
        mpfr_init_set_str(r9855944, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r9855945);
        mpfr_init(r9855946);
        mpfr_init(r9855947);
        mpfr_init_set_str(r9855948, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r9855949);
        mpfr_init(r9855950);
        mpfr_init(r9855951);
        mpfr_init_set_str(r9855952, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init_set_str(r9855953, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r9855954, "1", 10, MPFR_RNDN);
        mpfr_init(r9855955);
        mpfr_init(r9855956);
        mpfr_init(r9855957);
        mpfr_init(r9855958);
        mpfr_init(r9855959);
        mpfr_init(r9855960);
        mpfr_init(r9855961);
        mpfr_init(r9855962);
        mpfr_init(r9855963);
        mpfr_init(r9855964);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9855917, x, MPFR_RNDN);
        mpfr_mul(r9855918, r9855916, r9855917, MPFR_RNDN);
        mpfr_add(r9855919, r9855915, r9855918, MPFR_RNDN);
        ;
        mpfr_mul(r9855921, r9855917, r9855917, MPFR_RNDN);
        mpfr_mul(r9855922, r9855920, r9855921, MPFR_RNDN);
        mpfr_add(r9855923, r9855919, r9855922, MPFR_RNDN);
        ;
        mpfr_mul(r9855925, r9855921, r9855917, MPFR_RNDN);
        mpfr_mul(r9855926, r9855924, r9855925, MPFR_RNDN);
        mpfr_add(r9855927, r9855923, r9855926, MPFR_RNDN);
        ;
        mpfr_mul(r9855929, r9855925, r9855917, MPFR_RNDN);
        mpfr_mul(r9855930, r9855928, r9855929, MPFR_RNDN);
        mpfr_add(r9855931, r9855927, r9855930, MPFR_RNDN);
        ;
        mpfr_mul(r9855933, r9855929, r9855917, MPFR_RNDN);
        mpfr_mul(r9855934, r9855932, r9855933, MPFR_RNDN);
        mpfr_add(r9855935, r9855931, r9855934, MPFR_RNDN);
        ;
        mpfr_mul(r9855937, r9855933, r9855917, MPFR_RNDN);
        mpfr_mul(r9855938, r9855936, r9855937, MPFR_RNDN);
        mpfr_add(r9855939, r9855935, r9855938, MPFR_RNDN);
        ;
        mpfr_mul(r9855941, r9855937, r9855917, MPFR_RNDN);
        mpfr_mul(r9855942, r9855940, r9855941, MPFR_RNDN);
        mpfr_add(r9855943, r9855939, r9855942, MPFR_RNDN);
        ;
        mpfr_mul(r9855945, r9855941, r9855917, MPFR_RNDN);
        mpfr_mul(r9855946, r9855944, r9855945, MPFR_RNDN);
        mpfr_add(r9855947, r9855943, r9855946, MPFR_RNDN);
        ;
        mpfr_mul(r9855949, r9855945, r9855917, MPFR_RNDN);
        mpfr_mul(r9855950, r9855948, r9855949, MPFR_RNDN);
        mpfr_add(r9855951, r9855947, r9855950, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r9855955, r9855953, r9855954, MPFR_RNDN);
        mpfr_pow(r9855956, r9855917, r9855955, MPFR_RNDN);
        mpfr_mul(r9855957, r9855956, r9855917, MPFR_RNDN);
        mpfr_mul(r9855958, r9855957, r9855917, MPFR_RNDN);
        mpfr_mul(r9855959, r9855958, r9855917, MPFR_RNDN);
        mpfr_mul(r9855960, r9855959, r9855917, MPFR_RNDN);
        mpfr_mul(r9855961, r9855960, r9855917, MPFR_RNDN);
        mpfr_mul(r9855962, r9855961, r9855917, MPFR_RNDN);
        mpfr_mul(r9855963, r9855952, r9855962, MPFR_RNDN);
        mpfr_add(r9855964, r9855951, r9855963, MPFR_RNDN);
        return mpfr_get_d(r9855964, MPFR_RNDN);
}

static mpfr_t r9855965, r9855966, r9855967, r9855968, r9855969, r9855970, r9855971, r9855972, r9855973, r9855974, r9855975, r9855976, r9855977, r9855978, r9855979, r9855980, r9855981, r9855982, r9855983, r9855984, r9855985, r9855986, r9855987, r9855988, r9855989, r9855990, r9855991, r9855992, r9855993, r9855994, r9855995, r9855996, r9855997, r9855998, r9855999, r9856000, r9856001, r9856002, r9856003, r9856004, r9856005, r9856006, r9856007, r9856008, r9856009, r9856010, r9856011, r9856012, r9856013, r9856014;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9855965, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9855966, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9855967);
        mpfr_init(r9855968);
        mpfr_init(r9855969);
        mpfr_init_set_str(r9855970, "33.0", 10, MPFR_RNDN);
        mpfr_init(r9855971);
        mpfr_init(r9855972);
        mpfr_init(r9855973);
        mpfr_init_set_str(r9855974, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r9855975);
        mpfr_init(r9855976);
        mpfr_init(r9855977);
        mpfr_init_set_str(r9855978, "20.625", 10, MPFR_RNDN);
        mpfr_init(r9855979);
        mpfr_init(r9855980);
        mpfr_init(r9855981);
        mpfr_init_set_str(r9855982, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r9855983);
        mpfr_init(r9855984);
        mpfr_init(r9855985);
        mpfr_init_set_str(r9855986, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r9855987);
        mpfr_init(r9855988);
        mpfr_init(r9855989);
        mpfr_init_set_str(r9855990, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r9855991);
        mpfr_init(r9855992);
        mpfr_init(r9855993);
        mpfr_init_set_str(r9855994, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r9855995);
        mpfr_init(r9855996);
        mpfr_init(r9855997);
        mpfr_init_set_str(r9855998, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r9855999);
        mpfr_init(r9856000);
        mpfr_init(r9856001);
        mpfr_init_set_str(r9856002, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init_set_str(r9856003, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r9856004, "1", 10, MPFR_RNDN);
        mpfr_init(r9856005);
        mpfr_init(r9856006);
        mpfr_init(r9856007);
        mpfr_init(r9856008);
        mpfr_init(r9856009);
        mpfr_init(r9856010);
        mpfr_init(r9856011);
        mpfr_init(r9856012);
        mpfr_init(r9856013);
        mpfr_init(r9856014);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9855967, x, MPFR_RNDN);
        mpfr_mul(r9855968, r9855966, r9855967, MPFR_RNDN);
        mpfr_add(r9855969, r9855965, r9855968, MPFR_RNDN);
        ;
        mpfr_mul(r9855971, r9855967, r9855967, MPFR_RNDN);
        mpfr_mul(r9855972, r9855970, r9855971, MPFR_RNDN);
        mpfr_add(r9855973, r9855969, r9855972, MPFR_RNDN);
        ;
        mpfr_mul(r9855975, r9855971, r9855967, MPFR_RNDN);
        mpfr_mul(r9855976, r9855974, r9855975, MPFR_RNDN);
        mpfr_add(r9855977, r9855973, r9855976, MPFR_RNDN);
        ;
        mpfr_mul(r9855979, r9855975, r9855967, MPFR_RNDN);
        mpfr_mul(r9855980, r9855978, r9855979, MPFR_RNDN);
        mpfr_add(r9855981, r9855977, r9855980, MPFR_RNDN);
        ;
        mpfr_mul(r9855983, r9855979, r9855967, MPFR_RNDN);
        mpfr_mul(r9855984, r9855982, r9855983, MPFR_RNDN);
        mpfr_add(r9855985, r9855981, r9855984, MPFR_RNDN);
        ;
        mpfr_mul(r9855987, r9855983, r9855967, MPFR_RNDN);
        mpfr_mul(r9855988, r9855986, r9855987, MPFR_RNDN);
        mpfr_add(r9855989, r9855985, r9855988, MPFR_RNDN);
        ;
        mpfr_mul(r9855991, r9855987, r9855967, MPFR_RNDN);
        mpfr_mul(r9855992, r9855990, r9855991, MPFR_RNDN);
        mpfr_add(r9855993, r9855989, r9855992, MPFR_RNDN);
        ;
        mpfr_mul(r9855995, r9855991, r9855967, MPFR_RNDN);
        mpfr_mul(r9855996, r9855994, r9855995, MPFR_RNDN);
        mpfr_add(r9855997, r9855993, r9855996, MPFR_RNDN);
        ;
        mpfr_mul(r9855999, r9855995, r9855967, MPFR_RNDN);
        mpfr_mul(r9856000, r9855998, r9855999, MPFR_RNDN);
        mpfr_add(r9856001, r9855997, r9856000, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r9856005, r9856003, r9856004, MPFR_RNDN);
        mpfr_pow(r9856006, r9855967, r9856005, MPFR_RNDN);
        mpfr_mul(r9856007, r9856006, r9855967, MPFR_RNDN);
        mpfr_mul(r9856008, r9856007, r9855967, MPFR_RNDN);
        mpfr_mul(r9856009, r9856008, r9855967, MPFR_RNDN);
        mpfr_mul(r9856010, r9856009, r9855967, MPFR_RNDN);
        mpfr_mul(r9856011, r9856010, r9855967, MPFR_RNDN);
        mpfr_mul(r9856012, r9856011, r9855967, MPFR_RNDN);
        mpfr_mul(r9856013, r9856002, r9856012, MPFR_RNDN);
        mpfr_add(r9856014, r9856001, r9856013, MPFR_RNDN);
        return mpfr_get_d(r9856014, MPFR_RNDN);
}

