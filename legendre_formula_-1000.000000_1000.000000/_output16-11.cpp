	#ifdef ORIG
	(+ (+ (+ (+ (+ (* -2.707031 x) (* 58.652344 (* (* x x) x))) (* -351.914062 (* (* (* (* x x) x) x) x))) (* 854.648438 (* (* (* (* (* (* x x) x) x) x) x) x))) (* -902.128906 (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x))) (* 344.449219 (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x)))
	#else
	 (  (  (  (  (  ( -2.707031*x ) + ( 58.652344* (  ( x*x ) *x )  )  ) + ( -351.914062* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 854.648438* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -902.128906* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 344.449219* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
