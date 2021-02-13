/*
 * Copyright (c) 2014, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef SHARE_VM_RUNTIME_PREFETCH_INLINE_HPP
#define SHARE_VM_RUNTIME_PREFETCH_INLINE_HPP

#include "runtime/prefetch.hpp"

// Linux
#ifdef TARGET_OS_ARCH_linux_x86
# include "prefetch_linux_x86.inline.hpp"
#endif
#ifdef TARGET_OS_ARCH_linux_sparc
# include "prefetch_linux_sparc.inline.hpp"
#endif
#ifdef TARGET_OS_ARCH_linux_zero
# include "prefetch_linux_zero.inline.hpp"
#endif
#ifdef TARGET_OS_ARCH_linux_arm
# include "prefetch_linux_arm.inline.hpp"
#endif
#ifdef TARGET_OS_ARCH_linux_aarch64
# include "prefetch_linux_aarch64.inline.hpp"
#endif
#ifdef TARGET_OS_ARCH_linux_ppc
# include "prefetch_linux_ppc.inline.hpp"
#endif

// Solaris
#ifdef TARGET_OS_ARCH_solaris_x86
# include "prefetch_solaris_x86.inline.hpp"
#endif
#ifdef TARGET_OS_ARCH_solaris_sparc
# include "prefetch_solaris_sparc.inline.hpp"
#endif

// Windows
#ifdef TARGET_OS_ARCH_windows_x86
# include "prefetch_windows_x86.inline.hpp"
#endif

// AIX
#ifdef TARGET_OS_ARCH_aix_ppc
# include "prefetch_aix_ppc.inline.hpp"
#endif

// BSD
#ifdef TARGET_OS_ARCH_bsd_ppc
# include "prefetch_bsd_ppc.inline.hpp"
#endif
#ifdef TARGET_OS_ARCH_bsd_x86
# include "prefetch_bsd_x86.inline.hpp"
#endif
#ifdef TARGET_OS_ARCH_bsd_zero
# include "prefetch_bsd_zero.inline.hpp"
#endif

#endif // SHARE_VM_RUNTIME_PREFETCH_INLINE_HPP
