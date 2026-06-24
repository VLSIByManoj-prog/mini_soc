verilator --binary -j 0 -Wall\
       	counter.v alu.v mux2x1.v mini_project_soc.v mini_project_soc_tb.v\
       	--top mini_project_soc_tb --timing --CFLAGS "-std=c++20" --trace 
cd obj_dir || exit 
make -f Vmini_project_soc_tb.mk Vmini_project_soc_tb
./Vmini_project_soc_tb


