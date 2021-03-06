#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "28";

double f_if(float x) {
        float r10043650 = 0.149446;
        float r10043651 = -60.675068;
        float r10043652 = x;
        float r10043653 = r10043652 * r10043652;
        float r10043654 = r10043651 * r10043653;
        float r10043655 = r10043650 + r10043654;
        float r10043656 = 4075.342081;
        float r10043657 = r10043653 * r10043652;
        float r10043658 = r10043657 * r10043652;
        float r10043659 = r10043656 * r10043658;
        float r10043660 = r10043655 + r10043659;
        float r10043661 = -107589.030932;
        float r10043662 = r10043658 * r10043652;
        float r10043663 = r10043662 * r10043652;
        float r10043664 = r10043661 * r10043663;
        float r10043665 = r10043660 + r10043664;
        float r10043666 = 1479349.175309;
        float r10043667 = r10043663 * r10043652;
        float r10043668 = r10043667 * r10043652;
        float r10043669 = r10043666 * r10043668;
        float r10043670 = r10043665 + r10043669;
        float r10043671 = -12163537.663655;
        float r10043672 = r10043668 * r10043652;
        float r10043673 = r10043672 * r10043652;
        float r10043674 = r10043671 * r10043673;
        float r10043675 = r10043670 + r10043674;
        float r10043676 = 64687904.84762;
        float r10043677 = r10043673 * r10043652;
        float r10043678 = r10043677 * r10043652;
        float r10043679 = r10043676 * r10043678;
        float r10043680 = r10043675 + r10043679;
        float r10043681 = -233160799.890321;
        float r10043682 = r10043678 * r10043652;
        float r10043683 = r10043682 * r10043652;
        float r10043684 = r10043681 * r10043683;
        float r10043685 = r10043680 + r10043684;
        float r10043686 = 584845006.391556;
        float r10043687 = r10043683 * r10043652;
        float r10043688 = r10043687 * r10043652;
        float r10043689 = r10043686 * r10043688;
        float r10043690 = r10043685 + r10043689;
        float r10043691 = -1032079423.043923;
        float r10043692 = r10043688 * r10043652;
        float r10043693 = r10043692 * r10043652;
        float r10043694 = r10043691 * r10043693;
        float r10043695 = r10043690 + r10043694;
        float r10043696 = 1276519286.396431;
        float r10043697 = r10043693 * r10043652;
        float r10043698 = r10043697 * r10043652;
        float r10043699 = r10043696 * r10043698;
        float r10043700 = r10043695 + r10043699;
        float r10043701 = -1083107273.306063;
        float r10043702 = r10043698 * r10043652;
        float r10043703 = r10043702 * r10043652;
        float r10043704 = r10043701 * r10043703;
        float r10043705 = r10043700 + r10043704;
        float r10043706 = 600418162.376187;
        float r10043707 = r10043703 * r10043652;
        float r10043708 = r10043707 * r10043652;
        float r10043709 = r10043706 * r10043708;
        float r10043710 = r10043705 + r10043709;
        float r10043711 = -195828692.959618;
        float r10043712 = r10043708 * r10043652;
        float r10043713 = r10043712 * r10043652;
        float r10043714 = r10043711 * r10043713;
        float r10043715 = r10043710 + r10043714;
        float r10043716 = 28493592.89095;
        float r10043717 = r10043713 * r10043652;
        float r10043718 = r10043717 * r10043652;
        float r10043719 = r10043716 * r10043718;
        float r10043720 = r10043715 + r10043719;
        return r10043720;
}

double f_id(double x) {
        double r10043721 = 0.149446;
        double r10043722 = -60.675068;
        double r10043723 = x;
        double r10043724 = r10043723 * r10043723;
        double r10043725 = r10043722 * r10043724;
        double r10043726 = r10043721 + r10043725;
        double r10043727 = 4075.342081;
        double r10043728 = r10043724 * r10043723;
        double r10043729 = r10043728 * r10043723;
        double r10043730 = r10043727 * r10043729;
        double r10043731 = r10043726 + r10043730;
        double r10043732 = -107589.030932;
        double r10043733 = r10043729 * r10043723;
        double r10043734 = r10043733 * r10043723;
        double r10043735 = r10043732 * r10043734;
        double r10043736 = r10043731 + r10043735;
        double r10043737 = 1479349.175309;
        double r10043738 = r10043734 * r10043723;
        double r10043739 = r10043738 * r10043723;
        double r10043740 = r10043737 * r10043739;
        double r10043741 = r10043736 + r10043740;
        double r10043742 = -12163537.663655;
        double r10043743 = r10043739 * r10043723;
        double r10043744 = r10043743 * r10043723;
        double r10043745 = r10043742 * r10043744;
        double r10043746 = r10043741 + r10043745;
        double r10043747 = 64687904.84762;
        double r10043748 = r10043744 * r10043723;
        double r10043749 = r10043748 * r10043723;
        double r10043750 = r10043747 * r10043749;
        double r10043751 = r10043746 + r10043750;
        double r10043752 = -233160799.890321;
        double r10043753 = r10043749 * r10043723;
        double r10043754 = r10043753 * r10043723;
        double r10043755 = r10043752 * r10043754;
        double r10043756 = r10043751 + r10043755;
        double r10043757 = 584845006.391556;
        double r10043758 = r10043754 * r10043723;
        double r10043759 = r10043758 * r10043723;
        double r10043760 = r10043757 * r10043759;
        double r10043761 = r10043756 + r10043760;
        double r10043762 = -1032079423.043923;
        double r10043763 = r10043759 * r10043723;
        double r10043764 = r10043763 * r10043723;
        double r10043765 = r10043762 * r10043764;
        double r10043766 = r10043761 + r10043765;
        double r10043767 = 1276519286.396431;
        double r10043768 = r10043764 * r10043723;
        double r10043769 = r10043768 * r10043723;
        double r10043770 = r10043767 * r10043769;
        double r10043771 = r10043766 + r10043770;
        double r10043772 = -1083107273.306063;
        double r10043773 = r10043769 * r10043723;
        double r10043774 = r10043773 * r10043723;
        double r10043775 = r10043772 * r10043774;
        double r10043776 = r10043771 + r10043775;
        double r10043777 = 600418162.376187;
        double r10043778 = r10043774 * r10043723;
        double r10043779 = r10043778 * r10043723;
        double r10043780 = r10043777 * r10043779;
        double r10043781 = r10043776 + r10043780;
        double r10043782 = -195828692.959618;
        double r10043783 = r10043779 * r10043723;
        double r10043784 = r10043783 * r10043723;
        double r10043785 = r10043782 * r10043784;
        double r10043786 = r10043781 + r10043785;
        double r10043787 = 28493592.89095;
        double r10043788 = r10043784 * r10043723;
        double r10043789 = r10043788 * r10043723;
        double r10043790 = r10043787 * r10043789;
        double r10043791 = r10043786 + r10043790;
        return r10043791;
}


double f_of(float x) {
        float r10043792 = x;
        float r10043793 = r10043792 * r10043792;
        float r10043794 = -1083107273.306063;
        float r10043795 = r10043793 * r10043794;
        float r10043796 = r10043793 * r10043793;
        float r10043797 = r10043795 * r10043796;
        float r10043798 = r10043796 * r10043796;
        float r10043799 = r10043798 * r10043798;
        float r10043800 = r10043797 * r10043799;
        float r10043801 = 600418162.376187;
        float r10043802 = r10043801 * r10043793;
        float r10043803 = r10043796 * r10043802;
        float r10043804 = r10043793 * r10043803;
        float r10043805 = r10043799 * r10043804;
        float r10043806 = r10043800 + r10043805;
        float r10043807 = 3;
        float r10043808 = pow(r10043796, r10043807);
        float r10043809 = r10043798 * r10043808;
        float r10043810 = 28493592.89095;
        float r10043811 = r10043810 * r10043793;
        float r10043812 = r10043811 * r10043796;
        float r10043813 = r10043793 * r10043812;
        float r10043814 = r10043809 * r10043813;
        float r10043815 = -195828692.959618;
        float r10043816 = r10043792 * r10043815;
        float r10043817 = r10043816 * r10043792;
        float r10043818 = r10043798 * r10043817;
        float r10043819 = r10043799 * r10043818;
        float r10043820 = r10043814 + r10043819;
        float r10043821 = r10043806 + r10043820;
        float r10043822 = -12163537.663655;
        float r10043823 = r10043793 * r10043822;
        float r10043824 = r10043823 * r10043796;
        float r10043825 = r10043824 * r10043796;
        float r10043826 = 64687904.84762;
        float r10043827 = r10043826 * r10043792;
        float r10043828 = r10043792 * r10043827;
        float r10043829 = r10043793 * r10043828;
        float r10043830 = r10043798 * r10043829;
        float r10043831 = r10043825 + r10043830;
        float r10043832 = -60.675068;
        float r10043833 = r10043832 * r10043793;
        float r10043834 = 4075.342081;
        float r10043835 = r10043834 * r10043792;
        float r10043836 = pow(r10043792, r10043807);
        float r10043837 = r10043835 * r10043836;
        float r10043838 = r10043833 + r10043837;
        float r10043839 = 0.149446;
        float r10043840 = r10043838 + r10043839;
        float r10043841 = 1479349.175309;
        float r10043842 = r10043841 * r10043793;
        float r10043843 = r10043836 * r10043836;
        float r10043844 = r10043842 * r10043843;
        float r10043845 = -107589.030932;
        float r10043846 = r10043793 * r10043845;
        float r10043847 = r10043796 * r10043846;
        float r10043848 = r10043844 + r10043847;
        float r10043849 = r10043840 + r10043848;
        float r10043850 = r10043831 + r10043849;
        float r10043851 = -233160799.890321;
        float r10043852 = r10043851 * r10043792;
        float r10043853 = r10043852 * r10043792;
        float r10043854 = r10043796 * r10043853;
        float r10043855 = r10043798 * r10043854;
        float r10043856 = 584845006.391556;
        float r10043857 = r10043792 * r10043856;
        float r10043858 = r10043857 * r10043792;
        float r10043859 = r10043858 * r10043843;
        float r10043860 = r10043859 * r10043798;
        float r10043861 = r10043855 + r10043860;
        float r10043862 = 1276519286.396431;
        float r10043863 = r10043809 * r10043862;
        float r10043864 = -1032079423.043923;
        float r10043865 = r10043864 * r10043792;
        float r10043866 = r10043865 * r10043792;
        float r10043867 = r10043866 * r10043796;
        float r10043868 = r10043808 * r10043867;
        float r10043869 = r10043863 + r10043868;
        float r10043870 = r10043861 + r10043869;
        float r10043871 = r10043850 + r10043870;
        float r10043872 = r10043821 + r10043871;
        return r10043872;
}

double f_od(double x) {
        double r10043873 = x;
        double r10043874 = r10043873 * r10043873;
        double r10043875 = -1083107273.306063;
        double r10043876 = r10043874 * r10043875;
        double r10043877 = r10043874 * r10043874;
        double r10043878 = r10043876 * r10043877;
        double r10043879 = r10043877 * r10043877;
        double r10043880 = r10043879 * r10043879;
        double r10043881 = r10043878 * r10043880;
        double r10043882 = 600418162.376187;
        double r10043883 = r10043882 * r10043874;
        double r10043884 = r10043877 * r10043883;
        double r10043885 = r10043874 * r10043884;
        double r10043886 = r10043880 * r10043885;
        double r10043887 = r10043881 + r10043886;
        double r10043888 = 3;
        double r10043889 = pow(r10043877, r10043888);
        double r10043890 = r10043879 * r10043889;
        double r10043891 = 28493592.89095;
        double r10043892 = r10043891 * r10043874;
        double r10043893 = r10043892 * r10043877;
        double r10043894 = r10043874 * r10043893;
        double r10043895 = r10043890 * r10043894;
        double r10043896 = -195828692.959618;
        double r10043897 = r10043873 * r10043896;
        double r10043898 = r10043897 * r10043873;
        double r10043899 = r10043879 * r10043898;
        double r10043900 = r10043880 * r10043899;
        double r10043901 = r10043895 + r10043900;
        double r10043902 = r10043887 + r10043901;
        double r10043903 = -12163537.663655;
        double r10043904 = r10043874 * r10043903;
        double r10043905 = r10043904 * r10043877;
        double r10043906 = r10043905 * r10043877;
        double r10043907 = 64687904.84762;
        double r10043908 = r10043907 * r10043873;
        double r10043909 = r10043873 * r10043908;
        double r10043910 = r10043874 * r10043909;
        double r10043911 = r10043879 * r10043910;
        double r10043912 = r10043906 + r10043911;
        double r10043913 = -60.675068;
        double r10043914 = r10043913 * r10043874;
        double r10043915 = 4075.342081;
        double r10043916 = r10043915 * r10043873;
        double r10043917 = pow(r10043873, r10043888);
        double r10043918 = r10043916 * r10043917;
        double r10043919 = r10043914 + r10043918;
        double r10043920 = 0.149446;
        double r10043921 = r10043919 + r10043920;
        double r10043922 = 1479349.175309;
        double r10043923 = r10043922 * r10043874;
        double r10043924 = r10043917 * r10043917;
        double r10043925 = r10043923 * r10043924;
        double r10043926 = -107589.030932;
        double r10043927 = r10043874 * r10043926;
        double r10043928 = r10043877 * r10043927;
        double r10043929 = r10043925 + r10043928;
        double r10043930 = r10043921 + r10043929;
        double r10043931 = r10043912 + r10043930;
        double r10043932 = -233160799.890321;
        double r10043933 = r10043932 * r10043873;
        double r10043934 = r10043933 * r10043873;
        double r10043935 = r10043877 * r10043934;
        double r10043936 = r10043879 * r10043935;
        double r10043937 = 584845006.391556;
        double r10043938 = r10043873 * r10043937;
        double r10043939 = r10043938 * r10043873;
        double r10043940 = r10043939 * r10043924;
        double r10043941 = r10043940 * r10043879;
        double r10043942 = r10043936 + r10043941;
        double r10043943 = 1276519286.396431;
        double r10043944 = r10043890 * r10043943;
        double r10043945 = -1032079423.043923;
        double r10043946 = r10043945 * r10043873;
        double r10043947 = r10043946 * r10043873;
        double r10043948 = r10043947 * r10043877;
        double r10043949 = r10043889 * r10043948;
        double r10043950 = r10043944 + r10043949;
        double r10043951 = r10043942 + r10043950;
        double r10043952 = r10043931 + r10043951;
        double r10043953 = r10043902 + r10043952;
        return r10043953;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10043954, r10043955, r10043956, r10043957, r10043958, r10043959, r10043960, r10043961, r10043962, r10043963, r10043964, r10043965, r10043966, r10043967, r10043968, r10043969, r10043970, r10043971, r10043972, r10043973, r10043974, r10043975, r10043976, r10043977, r10043978, r10043979, r10043980, r10043981, r10043982, r10043983, r10043984, r10043985, r10043986, r10043987, r10043988, r10043989, r10043990, r10043991, r10043992, r10043993, r10043994, r10043995, r10043996, r10043997, r10043998, r10043999, r10044000, r10044001, r10044002, r10044003, r10044004, r10044005, r10044006, r10044007, r10044008, r10044009, r10044010, r10044011, r10044012, r10044013, r10044014, r10044015, r10044016, r10044017, r10044018, r10044019, r10044020, r10044021, r10044022, r10044023, r10044024;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10043954, "0.149446", 10, MPFR_RNDN);
        mpfr_init_set_str(r10043955, "-60.675068", 10, MPFR_RNDN);
        mpfr_init(r10043956);
        mpfr_init(r10043957);
        mpfr_init(r10043958);
        mpfr_init(r10043959);
        mpfr_init_set_str(r10043960, "4075.342081", 10, MPFR_RNDN);
        mpfr_init(r10043961);
        mpfr_init(r10043962);
        mpfr_init(r10043963);
        mpfr_init(r10043964);
        mpfr_init_set_str(r10043965, "-107589.030932", 10, MPFR_RNDN);
        mpfr_init(r10043966);
        mpfr_init(r10043967);
        mpfr_init(r10043968);
        mpfr_init(r10043969);
        mpfr_init_set_str(r10043970, "1479349.175309", 10, MPFR_RNDN);
        mpfr_init(r10043971);
        mpfr_init(r10043972);
        mpfr_init(r10043973);
        mpfr_init(r10043974);
        mpfr_init_set_str(r10043975, "-12163537.663655", 10, MPFR_RNDN);
        mpfr_init(r10043976);
        mpfr_init(r10043977);
        mpfr_init(r10043978);
        mpfr_init(r10043979);
        mpfr_init_set_str(r10043980, "64687904.84762", 10, MPFR_RNDN);
        mpfr_init(r10043981);
        mpfr_init(r10043982);
        mpfr_init(r10043983);
        mpfr_init(r10043984);
        mpfr_init_set_str(r10043985, "-233160799.890321", 10, MPFR_RNDN);
        mpfr_init(r10043986);
        mpfr_init(r10043987);
        mpfr_init(r10043988);
        mpfr_init(r10043989);
        mpfr_init_set_str(r10043990, "584845006.391556", 10, MPFR_RNDN);
        mpfr_init(r10043991);
        mpfr_init(r10043992);
        mpfr_init(r10043993);
        mpfr_init(r10043994);
        mpfr_init_set_str(r10043995, "-1032079423.043923", 10, MPFR_RNDN);
        mpfr_init(r10043996);
        mpfr_init(r10043997);
        mpfr_init(r10043998);
        mpfr_init(r10043999);
        mpfr_init_set_str(r10044000, "1276519286.396431", 10, MPFR_RNDN);
        mpfr_init(r10044001);
        mpfr_init(r10044002);
        mpfr_init(r10044003);
        mpfr_init(r10044004);
        mpfr_init_set_str(r10044005, "-1083107273.306063", 10, MPFR_RNDN);
        mpfr_init(r10044006);
        mpfr_init(r10044007);
        mpfr_init(r10044008);
        mpfr_init(r10044009);
        mpfr_init_set_str(r10044010, "600418162.376187", 10, MPFR_RNDN);
        mpfr_init(r10044011);
        mpfr_init(r10044012);
        mpfr_init(r10044013);
        mpfr_init(r10044014);
        mpfr_init_set_str(r10044015, "-195828692.959618", 10, MPFR_RNDN);
        mpfr_init(r10044016);
        mpfr_init(r10044017);
        mpfr_init(r10044018);
        mpfr_init(r10044019);
        mpfr_init_set_str(r10044020, "28493592.89095", 10, MPFR_RNDN);
        mpfr_init(r10044021);
        mpfr_init(r10044022);
        mpfr_init(r10044023);
        mpfr_init(r10044024);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10043956, x, MPFR_RNDN);
        mpfr_mul(r10043957, r10043956, r10043956, MPFR_RNDN);
        mpfr_mul(r10043958, r10043955, r10043957, MPFR_RNDN);
        mpfr_add(r10043959, r10043954, r10043958, MPFR_RNDN);
        ;
        mpfr_mul(r10043961, r10043957, r10043956, MPFR_RNDN);
        mpfr_mul(r10043962, r10043961, r10043956, MPFR_RNDN);
        mpfr_mul(r10043963, r10043960, r10043962, MPFR_RNDN);
        mpfr_add(r10043964, r10043959, r10043963, MPFR_RNDN);
        ;
        mpfr_mul(r10043966, r10043962, r10043956, MPFR_RNDN);
        mpfr_mul(r10043967, r10043966, r10043956, MPFR_RNDN);
        mpfr_mul(r10043968, r10043965, r10043967, MPFR_RNDN);
        mpfr_add(r10043969, r10043964, r10043968, MPFR_RNDN);
        ;
        mpfr_mul(r10043971, r10043967, r10043956, MPFR_RNDN);
        mpfr_mul(r10043972, r10043971, r10043956, MPFR_RNDN);
        mpfr_mul(r10043973, r10043970, r10043972, MPFR_RNDN);
        mpfr_add(r10043974, r10043969, r10043973, MPFR_RNDN);
        ;
        mpfr_mul(r10043976, r10043972, r10043956, MPFR_RNDN);
        mpfr_mul(r10043977, r10043976, r10043956, MPFR_RNDN);
        mpfr_mul(r10043978, r10043975, r10043977, MPFR_RNDN);
        mpfr_add(r10043979, r10043974, r10043978, MPFR_RNDN);
        ;
        mpfr_mul(r10043981, r10043977, r10043956, MPFR_RNDN);
        mpfr_mul(r10043982, r10043981, r10043956, MPFR_RNDN);
        mpfr_mul(r10043983, r10043980, r10043982, MPFR_RNDN);
        mpfr_add(r10043984, r10043979, r10043983, MPFR_RNDN);
        ;
        mpfr_mul(r10043986, r10043982, r10043956, MPFR_RNDN);
        mpfr_mul(r10043987, r10043986, r10043956, MPFR_RNDN);
        mpfr_mul(r10043988, r10043985, r10043987, MPFR_RNDN);
        mpfr_add(r10043989, r10043984, r10043988, MPFR_RNDN);
        ;
        mpfr_mul(r10043991, r10043987, r10043956, MPFR_RNDN);
        mpfr_mul(r10043992, r10043991, r10043956, MPFR_RNDN);
        mpfr_mul(r10043993, r10043990, r10043992, MPFR_RNDN);
        mpfr_add(r10043994, r10043989, r10043993, MPFR_RNDN);
        ;
        mpfr_mul(r10043996, r10043992, r10043956, MPFR_RNDN);
        mpfr_mul(r10043997, r10043996, r10043956, MPFR_RNDN);
        mpfr_mul(r10043998, r10043995, r10043997, MPFR_RNDN);
        mpfr_add(r10043999, r10043994, r10043998, MPFR_RNDN);
        ;
        mpfr_mul(r10044001, r10043997, r10043956, MPFR_RNDN);
        mpfr_mul(r10044002, r10044001, r10043956, MPFR_RNDN);
        mpfr_mul(r10044003, r10044000, r10044002, MPFR_RNDN);
        mpfr_add(r10044004, r10043999, r10044003, MPFR_RNDN);
        ;
        mpfr_mul(r10044006, r10044002, r10043956, MPFR_RNDN);
        mpfr_mul(r10044007, r10044006, r10043956, MPFR_RNDN);
        mpfr_mul(r10044008, r10044005, r10044007, MPFR_RNDN);
        mpfr_add(r10044009, r10044004, r10044008, MPFR_RNDN);
        ;
        mpfr_mul(r10044011, r10044007, r10043956, MPFR_RNDN);
        mpfr_mul(r10044012, r10044011, r10043956, MPFR_RNDN);
        mpfr_mul(r10044013, r10044010, r10044012, MPFR_RNDN);
        mpfr_add(r10044014, r10044009, r10044013, MPFR_RNDN);
        ;
        mpfr_mul(r10044016, r10044012, r10043956, MPFR_RNDN);
        mpfr_mul(r10044017, r10044016, r10043956, MPFR_RNDN);
        mpfr_mul(r10044018, r10044015, r10044017, MPFR_RNDN);
        mpfr_add(r10044019, r10044014, r10044018, MPFR_RNDN);
        ;
        mpfr_mul(r10044021, r10044017, r10043956, MPFR_RNDN);
        mpfr_mul(r10044022, r10044021, r10043956, MPFR_RNDN);
        mpfr_mul(r10044023, r10044020, r10044022, MPFR_RNDN);
        mpfr_add(r10044024, r10044019, r10044023, MPFR_RNDN);
        return mpfr_get_d(r10044024, MPFR_RNDN);
}

static mpfr_t r10044025, r10044026, r10044027, r10044028, r10044029, r10044030, r10044031, r10044032, r10044033, r10044034, r10044035, r10044036, r10044037, r10044038, r10044039, r10044040, r10044041, r10044042, r10044043, r10044044, r10044045, r10044046, r10044047, r10044048, r10044049, r10044050, r10044051, r10044052, r10044053, r10044054, r10044055, r10044056, r10044057, r10044058, r10044059, r10044060, r10044061, r10044062, r10044063, r10044064, r10044065, r10044066, r10044067, r10044068, r10044069, r10044070, r10044071, r10044072, r10044073, r10044074, r10044075, r10044076, r10044077, r10044078, r10044079, r10044080, r10044081, r10044082, r10044083, r10044084, r10044085, r10044086, r10044087, r10044088, r10044089, r10044090, r10044091, r10044092, r10044093, r10044094, r10044095, r10044096, r10044097, r10044098, r10044099, r10044100, r10044101, r10044102, r10044103, r10044104, r10044105;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10044025);
        mpfr_init(r10044026);
        mpfr_init_set_str(r10044027, "-1083107273.306063", 10, MPFR_RNDN);
        mpfr_init(r10044028);
        mpfr_init(r10044029);
        mpfr_init(r10044030);
        mpfr_init(r10044031);
        mpfr_init(r10044032);
        mpfr_init(r10044033);
        mpfr_init_set_str(r10044034, "600418162.376187", 10, MPFR_RNDN);
        mpfr_init(r10044035);
        mpfr_init(r10044036);
        mpfr_init(r10044037);
        mpfr_init(r10044038);
        mpfr_init(r10044039);
        mpfr_init_set_str(r10044040, "3", 10, MPFR_RNDN);
        mpfr_init(r10044041);
        mpfr_init(r10044042);
        mpfr_init_set_str(r10044043, "28493592.89095", 10, MPFR_RNDN);
        mpfr_init(r10044044);
        mpfr_init(r10044045);
        mpfr_init(r10044046);
        mpfr_init(r10044047);
        mpfr_init_set_str(r10044048, "-195828692.959618", 10, MPFR_RNDN);
        mpfr_init(r10044049);
        mpfr_init(r10044050);
        mpfr_init(r10044051);
        mpfr_init(r10044052);
        mpfr_init(r10044053);
        mpfr_init(r10044054);
        mpfr_init_set_str(r10044055, "-12163537.663655", 10, MPFR_RNDN);
        mpfr_init(r10044056);
        mpfr_init(r10044057);
        mpfr_init(r10044058);
        mpfr_init_set_str(r10044059, "64687904.84762", 10, MPFR_RNDN);
        mpfr_init(r10044060);
        mpfr_init(r10044061);
        mpfr_init(r10044062);
        mpfr_init(r10044063);
        mpfr_init(r10044064);
        mpfr_init_set_str(r10044065, "-60.675068", 10, MPFR_RNDN);
        mpfr_init(r10044066);
        mpfr_init_set_str(r10044067, "4075.342081", 10, MPFR_RNDN);
        mpfr_init(r10044068);
        mpfr_init(r10044069);
        mpfr_init(r10044070);
        mpfr_init(r10044071);
        mpfr_init_set_str(r10044072, "0.149446", 10, MPFR_RNDN);
        mpfr_init(r10044073);
        mpfr_init_set_str(r10044074, "1479349.175309", 10, MPFR_RNDN);
        mpfr_init(r10044075);
        mpfr_init(r10044076);
        mpfr_init(r10044077);
        mpfr_init_set_str(r10044078, "-107589.030932", 10, MPFR_RNDN);
        mpfr_init(r10044079);
        mpfr_init(r10044080);
        mpfr_init(r10044081);
        mpfr_init(r10044082);
        mpfr_init(r10044083);
        mpfr_init_set_str(r10044084, "-233160799.890321", 10, MPFR_RNDN);
        mpfr_init(r10044085);
        mpfr_init(r10044086);
        mpfr_init(r10044087);
        mpfr_init(r10044088);
        mpfr_init_set_str(r10044089, "584845006.391556", 10, MPFR_RNDN);
        mpfr_init(r10044090);
        mpfr_init(r10044091);
        mpfr_init(r10044092);
        mpfr_init(r10044093);
        mpfr_init(r10044094);
        mpfr_init_set_str(r10044095, "1276519286.396431", 10, MPFR_RNDN);
        mpfr_init(r10044096);
        mpfr_init_set_str(r10044097, "-1032079423.043923", 10, MPFR_RNDN);
        mpfr_init(r10044098);
        mpfr_init(r10044099);
        mpfr_init(r10044100);
        mpfr_init(r10044101);
        mpfr_init(r10044102);
        mpfr_init(r10044103);
        mpfr_init(r10044104);
        mpfr_init(r10044105);
}

double f_fm(double x) {
        mpfr_set_d(r10044025, x, MPFR_RNDN);
        mpfr_mul(r10044026, r10044025, r10044025, MPFR_RNDN);
        ;
        mpfr_mul(r10044028, r10044026, r10044027, MPFR_RNDN);
        mpfr_mul(r10044029, r10044026, r10044026, MPFR_RNDN);
        mpfr_mul(r10044030, r10044028, r10044029, MPFR_RNDN);
        mpfr_mul(r10044031, r10044029, r10044029, MPFR_RNDN);
        mpfr_mul(r10044032, r10044031, r10044031, MPFR_RNDN);
        mpfr_mul(r10044033, r10044030, r10044032, MPFR_RNDN);
        ;
        mpfr_mul(r10044035, r10044034, r10044026, MPFR_RNDN);
        mpfr_mul(r10044036, r10044029, r10044035, MPFR_RNDN);
        mpfr_mul(r10044037, r10044026, r10044036, MPFR_RNDN);
        mpfr_mul(r10044038, r10044032, r10044037, MPFR_RNDN);
        mpfr_add(r10044039, r10044033, r10044038, MPFR_RNDN);
        ;
        mpfr_pow(r10044041, r10044029, r10044040, MPFR_RNDN);
        mpfr_mul(r10044042, r10044031, r10044041, MPFR_RNDN);
        ;
        mpfr_mul(r10044044, r10044043, r10044026, MPFR_RNDN);
        mpfr_mul(r10044045, r10044044, r10044029, MPFR_RNDN);
        mpfr_mul(r10044046, r10044026, r10044045, MPFR_RNDN);
        mpfr_mul(r10044047, r10044042, r10044046, MPFR_RNDN);
        ;
        mpfr_mul(r10044049, r10044025, r10044048, MPFR_RNDN);
        mpfr_mul(r10044050, r10044049, r10044025, MPFR_RNDN);
        mpfr_mul(r10044051, r10044031, r10044050, MPFR_RNDN);
        mpfr_mul(r10044052, r10044032, r10044051, MPFR_RNDN);
        mpfr_add(r10044053, r10044047, r10044052, MPFR_RNDN);
        mpfr_add(r10044054, r10044039, r10044053, MPFR_RNDN);
        ;
        mpfr_mul(r10044056, r10044026, r10044055, MPFR_RNDN);
        mpfr_mul(r10044057, r10044056, r10044029, MPFR_RNDN);
        mpfr_mul(r10044058, r10044057, r10044029, MPFR_RNDN);
        ;
        mpfr_mul(r10044060, r10044059, r10044025, MPFR_RNDN);
        mpfr_mul(r10044061, r10044025, r10044060, MPFR_RNDN);
        mpfr_mul(r10044062, r10044026, r10044061, MPFR_RNDN);
        mpfr_mul(r10044063, r10044031, r10044062, MPFR_RNDN);
        mpfr_add(r10044064, r10044058, r10044063, MPFR_RNDN);
        ;
        mpfr_mul(r10044066, r10044065, r10044026, MPFR_RNDN);
        ;
        mpfr_mul(r10044068, r10044067, r10044025, MPFR_RNDN);
        mpfr_pow(r10044069, r10044025, r10044040, MPFR_RNDN);
        mpfr_mul(r10044070, r10044068, r10044069, MPFR_RNDN);
        mpfr_add(r10044071, r10044066, r10044070, MPFR_RNDN);
        ;
        mpfr_add(r10044073, r10044071, r10044072, MPFR_RNDN);
        ;
        mpfr_mul(r10044075, r10044074, r10044026, MPFR_RNDN);
        mpfr_mul(r10044076, r10044069, r10044069, MPFR_RNDN);
        mpfr_mul(r10044077, r10044075, r10044076, MPFR_RNDN);
        ;
        mpfr_mul(r10044079, r10044026, r10044078, MPFR_RNDN);
        mpfr_mul(r10044080, r10044029, r10044079, MPFR_RNDN);
        mpfr_add(r10044081, r10044077, r10044080, MPFR_RNDN);
        mpfr_add(r10044082, r10044073, r10044081, MPFR_RNDN);
        mpfr_add(r10044083, r10044064, r10044082, MPFR_RNDN);
        ;
        mpfr_mul(r10044085, r10044084, r10044025, MPFR_RNDN);
        mpfr_mul(r10044086, r10044085, r10044025, MPFR_RNDN);
        mpfr_mul(r10044087, r10044029, r10044086, MPFR_RNDN);
        mpfr_mul(r10044088, r10044031, r10044087, MPFR_RNDN);
        ;
        mpfr_mul(r10044090, r10044025, r10044089, MPFR_RNDN);
        mpfr_mul(r10044091, r10044090, r10044025, MPFR_RNDN);
        mpfr_mul(r10044092, r10044091, r10044076, MPFR_RNDN);
        mpfr_mul(r10044093, r10044092, r10044031, MPFR_RNDN);
        mpfr_add(r10044094, r10044088, r10044093, MPFR_RNDN);
        ;
        mpfr_mul(r10044096, r10044042, r10044095, MPFR_RNDN);
        ;
        mpfr_mul(r10044098, r10044097, r10044025, MPFR_RNDN);
        mpfr_mul(r10044099, r10044098, r10044025, MPFR_RNDN);
        mpfr_mul(r10044100, r10044099, r10044029, MPFR_RNDN);
        mpfr_mul(r10044101, r10044041, r10044100, MPFR_RNDN);
        mpfr_add(r10044102, r10044096, r10044101, MPFR_RNDN);
        mpfr_add(r10044103, r10044094, r10044102, MPFR_RNDN);
        mpfr_add(r10044104, r10044083, r10044103, MPFR_RNDN);
        mpfr_add(r10044105, r10044054, r10044104, MPFR_RNDN);
        return mpfr_get_d(r10044105, MPFR_RNDN);
}

static mpfr_t r10044106, r10044107, r10044108, r10044109, r10044110, r10044111, r10044112, r10044113, r10044114, r10044115, r10044116, r10044117, r10044118, r10044119, r10044120, r10044121, r10044122, r10044123, r10044124, r10044125, r10044126, r10044127, r10044128, r10044129, r10044130, r10044131, r10044132, r10044133, r10044134, r10044135, r10044136, r10044137, r10044138, r10044139, r10044140, r10044141, r10044142, r10044143, r10044144, r10044145, r10044146, r10044147, r10044148, r10044149, r10044150, r10044151, r10044152, r10044153, r10044154, r10044155, r10044156, r10044157, r10044158, r10044159, r10044160, r10044161, r10044162, r10044163, r10044164, r10044165, r10044166, r10044167, r10044168, r10044169, r10044170, r10044171, r10044172, r10044173, r10044174, r10044175, r10044176, r10044177, r10044178, r10044179, r10044180, r10044181, r10044182, r10044183, r10044184, r10044185, r10044186;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10044106);
        mpfr_init(r10044107);
        mpfr_init_set_str(r10044108, "-1083107273.306063", 10, MPFR_RNDN);
        mpfr_init(r10044109);
        mpfr_init(r10044110);
        mpfr_init(r10044111);
        mpfr_init(r10044112);
        mpfr_init(r10044113);
        mpfr_init(r10044114);
        mpfr_init_set_str(r10044115, "600418162.376187", 10, MPFR_RNDN);
        mpfr_init(r10044116);
        mpfr_init(r10044117);
        mpfr_init(r10044118);
        mpfr_init(r10044119);
        mpfr_init(r10044120);
        mpfr_init_set_str(r10044121, "3", 10, MPFR_RNDN);
        mpfr_init(r10044122);
        mpfr_init(r10044123);
        mpfr_init_set_str(r10044124, "28493592.89095", 10, MPFR_RNDN);
        mpfr_init(r10044125);
        mpfr_init(r10044126);
        mpfr_init(r10044127);
        mpfr_init(r10044128);
        mpfr_init_set_str(r10044129, "-195828692.959618", 10, MPFR_RNDN);
        mpfr_init(r10044130);
        mpfr_init(r10044131);
        mpfr_init(r10044132);
        mpfr_init(r10044133);
        mpfr_init(r10044134);
        mpfr_init(r10044135);
        mpfr_init_set_str(r10044136, "-12163537.663655", 10, MPFR_RNDN);
        mpfr_init(r10044137);
        mpfr_init(r10044138);
        mpfr_init(r10044139);
        mpfr_init_set_str(r10044140, "64687904.84762", 10, MPFR_RNDN);
        mpfr_init(r10044141);
        mpfr_init(r10044142);
        mpfr_init(r10044143);
        mpfr_init(r10044144);
        mpfr_init(r10044145);
        mpfr_init_set_str(r10044146, "-60.675068", 10, MPFR_RNDN);
        mpfr_init(r10044147);
        mpfr_init_set_str(r10044148, "4075.342081", 10, MPFR_RNDN);
        mpfr_init(r10044149);
        mpfr_init(r10044150);
        mpfr_init(r10044151);
        mpfr_init(r10044152);
        mpfr_init_set_str(r10044153, "0.149446", 10, MPFR_RNDN);
        mpfr_init(r10044154);
        mpfr_init_set_str(r10044155, "1479349.175309", 10, MPFR_RNDN);
        mpfr_init(r10044156);
        mpfr_init(r10044157);
        mpfr_init(r10044158);
        mpfr_init_set_str(r10044159, "-107589.030932", 10, MPFR_RNDN);
        mpfr_init(r10044160);
        mpfr_init(r10044161);
        mpfr_init(r10044162);
        mpfr_init(r10044163);
        mpfr_init(r10044164);
        mpfr_init_set_str(r10044165, "-233160799.890321", 10, MPFR_RNDN);
        mpfr_init(r10044166);
        mpfr_init(r10044167);
        mpfr_init(r10044168);
        mpfr_init(r10044169);
        mpfr_init_set_str(r10044170, "584845006.391556", 10, MPFR_RNDN);
        mpfr_init(r10044171);
        mpfr_init(r10044172);
        mpfr_init(r10044173);
        mpfr_init(r10044174);
        mpfr_init(r10044175);
        mpfr_init_set_str(r10044176, "1276519286.396431", 10, MPFR_RNDN);
        mpfr_init(r10044177);
        mpfr_init_set_str(r10044178, "-1032079423.043923", 10, MPFR_RNDN);
        mpfr_init(r10044179);
        mpfr_init(r10044180);
        mpfr_init(r10044181);
        mpfr_init(r10044182);
        mpfr_init(r10044183);
        mpfr_init(r10044184);
        mpfr_init(r10044185);
        mpfr_init(r10044186);
}

double f_dm(double x) {
        mpfr_set_d(r10044106, x, MPFR_RNDN);
        mpfr_mul(r10044107, r10044106, r10044106, MPFR_RNDN);
        ;
        mpfr_mul(r10044109, r10044107, r10044108, MPFR_RNDN);
        mpfr_mul(r10044110, r10044107, r10044107, MPFR_RNDN);
        mpfr_mul(r10044111, r10044109, r10044110, MPFR_RNDN);
        mpfr_mul(r10044112, r10044110, r10044110, MPFR_RNDN);
        mpfr_mul(r10044113, r10044112, r10044112, MPFR_RNDN);
        mpfr_mul(r10044114, r10044111, r10044113, MPFR_RNDN);
        ;
        mpfr_mul(r10044116, r10044115, r10044107, MPFR_RNDN);
        mpfr_mul(r10044117, r10044110, r10044116, MPFR_RNDN);
        mpfr_mul(r10044118, r10044107, r10044117, MPFR_RNDN);
        mpfr_mul(r10044119, r10044113, r10044118, MPFR_RNDN);
        mpfr_add(r10044120, r10044114, r10044119, MPFR_RNDN);
        ;
        mpfr_pow(r10044122, r10044110, r10044121, MPFR_RNDN);
        mpfr_mul(r10044123, r10044112, r10044122, MPFR_RNDN);
        ;
        mpfr_mul(r10044125, r10044124, r10044107, MPFR_RNDN);
        mpfr_mul(r10044126, r10044125, r10044110, MPFR_RNDN);
        mpfr_mul(r10044127, r10044107, r10044126, MPFR_RNDN);
        mpfr_mul(r10044128, r10044123, r10044127, MPFR_RNDN);
        ;
        mpfr_mul(r10044130, r10044106, r10044129, MPFR_RNDN);
        mpfr_mul(r10044131, r10044130, r10044106, MPFR_RNDN);
        mpfr_mul(r10044132, r10044112, r10044131, MPFR_RNDN);
        mpfr_mul(r10044133, r10044113, r10044132, MPFR_RNDN);
        mpfr_add(r10044134, r10044128, r10044133, MPFR_RNDN);
        mpfr_add(r10044135, r10044120, r10044134, MPFR_RNDN);
        ;
        mpfr_mul(r10044137, r10044107, r10044136, MPFR_RNDN);
        mpfr_mul(r10044138, r10044137, r10044110, MPFR_RNDN);
        mpfr_mul(r10044139, r10044138, r10044110, MPFR_RNDN);
        ;
        mpfr_mul(r10044141, r10044140, r10044106, MPFR_RNDN);
        mpfr_mul(r10044142, r10044106, r10044141, MPFR_RNDN);
        mpfr_mul(r10044143, r10044107, r10044142, MPFR_RNDN);
        mpfr_mul(r10044144, r10044112, r10044143, MPFR_RNDN);
        mpfr_add(r10044145, r10044139, r10044144, MPFR_RNDN);
        ;
        mpfr_mul(r10044147, r10044146, r10044107, MPFR_RNDN);
        ;
        mpfr_mul(r10044149, r10044148, r10044106, MPFR_RNDN);
        mpfr_pow(r10044150, r10044106, r10044121, MPFR_RNDN);
        mpfr_mul(r10044151, r10044149, r10044150, MPFR_RNDN);
        mpfr_add(r10044152, r10044147, r10044151, MPFR_RNDN);
        ;
        mpfr_add(r10044154, r10044152, r10044153, MPFR_RNDN);
        ;
        mpfr_mul(r10044156, r10044155, r10044107, MPFR_RNDN);
        mpfr_mul(r10044157, r10044150, r10044150, MPFR_RNDN);
        mpfr_mul(r10044158, r10044156, r10044157, MPFR_RNDN);
        ;
        mpfr_mul(r10044160, r10044107, r10044159, MPFR_RNDN);
        mpfr_mul(r10044161, r10044110, r10044160, MPFR_RNDN);
        mpfr_add(r10044162, r10044158, r10044161, MPFR_RNDN);
        mpfr_add(r10044163, r10044154, r10044162, MPFR_RNDN);
        mpfr_add(r10044164, r10044145, r10044163, MPFR_RNDN);
        ;
        mpfr_mul(r10044166, r10044165, r10044106, MPFR_RNDN);
        mpfr_mul(r10044167, r10044166, r10044106, MPFR_RNDN);
        mpfr_mul(r10044168, r10044110, r10044167, MPFR_RNDN);
        mpfr_mul(r10044169, r10044112, r10044168, MPFR_RNDN);
        ;
        mpfr_mul(r10044171, r10044106, r10044170, MPFR_RNDN);
        mpfr_mul(r10044172, r10044171, r10044106, MPFR_RNDN);
        mpfr_mul(r10044173, r10044172, r10044157, MPFR_RNDN);
        mpfr_mul(r10044174, r10044173, r10044112, MPFR_RNDN);
        mpfr_add(r10044175, r10044169, r10044174, MPFR_RNDN);
        ;
        mpfr_mul(r10044177, r10044123, r10044176, MPFR_RNDN);
        ;
        mpfr_mul(r10044179, r10044178, r10044106, MPFR_RNDN);
        mpfr_mul(r10044180, r10044179, r10044106, MPFR_RNDN);
        mpfr_mul(r10044181, r10044180, r10044110, MPFR_RNDN);
        mpfr_mul(r10044182, r10044122, r10044181, MPFR_RNDN);
        mpfr_add(r10044183, r10044177, r10044182, MPFR_RNDN);
        mpfr_add(r10044184, r10044175, r10044183, MPFR_RNDN);
        mpfr_add(r10044185, r10044164, r10044184, MPFR_RNDN);
        mpfr_add(r10044186, r10044135, r10044185, MPFR_RNDN);
        return mpfr_get_d(r10044186, MPFR_RNDN);
}

