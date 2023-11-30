# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcpu.mk for the caller.

### Switches...
<<<<<<< HEAD
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
=======
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
>>>>>>> 07e1f023be4db24706a5e02e1dc67bc09c2f927b
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
<<<<<<< HEAD
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0
=======
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
>>>>>>> 07e1f023be4db24706a5e02e1dc67bc09c2f927b

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcpu \
<<<<<<< HEAD

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcpu__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcpu__Trace \
=======
	Vcpu___024root__DepSet_h2d56fd23__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcpu___024root__Slow \
	Vcpu___024root__DepSet_h2d56fd23__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcpu__Trace__0 \
>>>>>>> 07e1f023be4db24706a5e02e1dc67bc09c2f927b

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcpu__Syms \
<<<<<<< HEAD
	Vcpu__Trace__Slow \
=======
	Vcpu__Trace__0__Slow \
>>>>>>> 07e1f023be4db24706a5e02e1dc67bc09c2f927b

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
