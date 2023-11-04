/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vuint8mf8_t test_vnclipu_wv_u8mf8(vuint16mf4_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8(vuint16mf4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4(vuint16mf2_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4(vuint16mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2(vuint16m1_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2(vuint16m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1(vuint16m2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1(vuint16m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2(vuint16m4_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2(vuint16m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4(vuint16m8_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4(vuint16m8_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4(vuint32mf2_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4(vuint32mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2(vuint32m1_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2(vuint32m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1(vuint32m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1(vuint32m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2(vuint32m4_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2(vuint32m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4(vuint32m8_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4(vuint32m8_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2(vuint64m1_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2(vuint64m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1(vuint64m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1(vuint64m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2(vuint64m4_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2(vuint64m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4(vuint64m8_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vnclipu(vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4(vuint64m8_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wv_u8mf8_m(vbool64_t vm, vuint16mf4_t vs2, vuint8mf8_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf8_t test_vnclipu_wx_u8mf8_m(vbool64_t vm, vuint16mf4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wv_u8mf4_m(vbool32_t vm, vuint16mf2_t vs2, vuint8mf4_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf4_t test_vnclipu_wx_u8mf4_m(vbool32_t vm, vuint16mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wv_u8mf2_m(vbool16_t vm, vuint16m1_t vs2, vuint8mf2_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8mf2_t test_vnclipu_wx_u8mf2_m(vbool16_t vm, vuint16m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wv_u8m1_m(vbool8_t vm, vuint16m2_t vs2, vuint8m1_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8m1_t test_vnclipu_wx_u8m1_m(vbool8_t vm, vuint16m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wv_u8m2_m(vbool4_t vm, vuint16m4_t vs2, vuint8m2_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8m2_t test_vnclipu_wx_u8m2_m(vbool4_t vm, vuint16m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wv_u8m4_m(vbool2_t vm, vuint16m8_t vs2, vuint8m4_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint8m4_t test_vnclipu_wx_u8m4_m(vbool2_t vm, vuint16m8_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wv_u16mf4_m(vbool64_t vm, vuint32mf2_t vs2, vuint16mf4_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16mf4_t test_vnclipu_wx_u16mf4_m(vbool64_t vm, vuint32mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wv_u16mf2_m(vbool32_t vm, vuint32m1_t vs2, vuint16mf2_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16mf2_t test_vnclipu_wx_u16mf2_m(vbool32_t vm, vuint32m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wv_u16m1_m(vbool16_t vm, vuint32m2_t vs2, vuint16m1_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16m1_t test_vnclipu_wx_u16m1_m(vbool16_t vm, vuint32m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wv_u16m2_m(vbool8_t vm, vuint32m4_t vs2, vuint16m2_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16m2_t test_vnclipu_wx_u16m2_m(vbool8_t vm, vuint32m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wv_u16m4_m(vbool4_t vm, vuint32m8_t vs2, vuint16m4_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint16m4_t test_vnclipu_wx_u16m4_m(vbool4_t vm, vuint32m8_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wv_u32mf2_m(vbool64_t vm, vuint64m1_t vs2, vuint32mf2_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint32mf2_t test_vnclipu_wx_u32mf2_m(vbool64_t vm, vuint64m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wv_u32m1_m(vbool32_t vm, vuint64m2_t vs2, vuint32m1_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint32m1_t test_vnclipu_wx_u32m1_m(vbool32_t vm, vuint64m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wv_u32m2_m(vbool16_t vm, vuint64m4_t vs2, vuint32m2_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint32m2_t test_vnclipu_wx_u32m2_m(vbool16_t vm, vuint64m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wv_u32m4_m(vbool8_t vm, vuint64m8_t vs2, vuint32m4_t vs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vuint32m4_t test_vnclipu_wx_u32m4_m(vbool8_t vm, vuint64m8_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclipu(vm, vs2, rs1, __RISCV_VXRM_RNU, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vnclipu\.[ivxfswum.]+\s+} 60 } } */
