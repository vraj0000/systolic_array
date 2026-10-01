SIM ?= verilator
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES = $(PWD)/control_systolic.v $(PWD)/systolic.v $(PWD)/pe.v $(PWD)/dff.v

TOPLEVEL = control_systolic
MODULE = test_systolic

include $(shell cocotb-config --makefiles)/Makefile.sim