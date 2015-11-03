logmap: logmap.cxx
	c++ logmap.cxx  -o logmap && ./logmap > data &&gnuplot
	
	gnuplotbefehl im README
