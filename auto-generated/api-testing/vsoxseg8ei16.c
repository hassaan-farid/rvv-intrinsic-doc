#include <riscv_vector.h>
#include <stdint.h>

void test_vsoxseg8ei16_v_f16mf4x8(_Float16 *rs1, vuint16mf4_t vs2,
                                  vfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f16mf4x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f16mf2x8(_Float16 *rs1, vuint16mf2_t vs2,
                                  vfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f16mf2x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f16m1x8(_Float16 *rs1, vuint16m1_t vs2,
                                 vfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f16m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f32mf2x8(float *rs1, vuint16mf4_t vs2,
                                  vfloat32mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f32mf2x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f32m1x8(float *rs1, vuint16mf2_t vs2,
                                 vfloat32m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f32m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f64m1x8(double *rs1, vuint16mf4_t vs2,
                                 vfloat64m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f64m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i8mf8x8(int8_t *rs1, vuint16mf4_t vs2,
                                 vint8mf8x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i8mf8x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i8mf4x8(int8_t *rs1, vuint16mf2_t vs2,
                                 vint8mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i8mf4x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i8mf2x8(int8_t *rs1, vuint16m1_t vs2, vint8mf2x8_t vs3,
                                 size_t vl) {
  return __riscv_vsoxseg8ei16_v_i8mf2x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i8m1x8(int8_t *rs1, vuint16m2_t vs2, vint8m1x8_t vs3,
                                size_t vl) {
  return __riscv_vsoxseg8ei16_v_i8m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i16mf4x8(int16_t *rs1, vuint16mf4_t vs2,
                                  vint16mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i16mf4x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i16mf2x8(int16_t *rs1, vuint16mf2_t vs2,
                                  vint16mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i16mf2x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i16m1x8(int16_t *rs1, vuint16m1_t vs2,
                                 vint16m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i16m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i32mf2x8(int32_t *rs1, vuint16mf4_t vs2,
                                  vint32mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i32mf2x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i32m1x8(int32_t *rs1, vuint16mf2_t vs2,
                                 vint32m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i32m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i64m1x8(int64_t *rs1, vuint16mf4_t vs2,
                                 vint64m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i64m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u8mf8x8(uint8_t *rs1, vuint16mf4_t vs2,
                                 vuint8mf8x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u8mf8x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u8mf4x8(uint8_t *rs1, vuint16mf2_t vs2,
                                 vuint8mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u8mf4x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u8mf2x8(uint8_t *rs1, vuint16m1_t vs2,
                                 vuint8mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u8mf2x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u8m1x8(uint8_t *rs1, vuint16m2_t vs2, vuint8m1x8_t vs3,
                                size_t vl) {
  return __riscv_vsoxseg8ei16_v_u8m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u16mf4x8(uint16_t *rs1, vuint16mf4_t vs2,
                                  vuint16mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u16mf4x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u16mf2x8(uint16_t *rs1, vuint16mf2_t vs2,
                                  vuint16mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u16mf2x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u16m1x8(uint16_t *rs1, vuint16m1_t vs2,
                                 vuint16m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u16m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u32mf2x8(uint32_t *rs1, vuint16mf4_t vs2,
                                  vuint32mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u32mf2x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u32m1x8(uint32_t *rs1, vuint16mf2_t vs2,
                                 vuint32m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u32m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u64m1x8(uint64_t *rs1, vuint16mf4_t vs2,
                                 vuint64m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u64m1x8(rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f16mf4x8_m(vbool64_t vm, _Float16 *rs1,
                                    vuint16mf4_t vs2, vfloat16mf4x8_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg8ei16_v_f16mf4x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f16mf2x8_m(vbool32_t vm, _Float16 *rs1,
                                    vuint16mf2_t vs2, vfloat16mf2x8_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg8ei16_v_f16mf2x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f16m1x8_m(vbool16_t vm, _Float16 *rs1, vuint16m1_t vs2,
                                   vfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f16m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f32mf2x8_m(vbool64_t vm, float *rs1, vuint16mf4_t vs2,
                                    vfloat32mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f32mf2x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f32m1x8_m(vbool32_t vm, float *rs1, vuint16mf2_t vs2,
                                   vfloat32m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f32m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_f64m1x8_m(vbool64_t vm, double *rs1, vuint16mf4_t vs2,
                                   vfloat64m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_f64m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i8mf8x8_m(vbool64_t vm, int8_t *rs1, vuint16mf4_t vs2,
                                   vint8mf8x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i8mf8x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i8mf4x8_m(vbool32_t vm, int8_t *rs1, vuint16mf2_t vs2,
                                   vint8mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i8mf4x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i8mf2x8_m(vbool16_t vm, int8_t *rs1, vuint16m1_t vs2,
                                   vint8mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i8mf2x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i8m1x8_m(vbool8_t vm, int8_t *rs1, vuint16m2_t vs2,
                                  vint8m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i8m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i16mf4x8_m(vbool64_t vm, int16_t *rs1,
                                    vuint16mf4_t vs2, vint16mf4x8_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg8ei16_v_i16mf4x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i16mf2x8_m(vbool32_t vm, int16_t *rs1,
                                    vuint16mf2_t vs2, vint16mf2x8_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg8ei16_v_i16mf2x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i16m1x8_m(vbool16_t vm, int16_t *rs1, vuint16m1_t vs2,
                                   vint16m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i16m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i32mf2x8_m(vbool64_t vm, int32_t *rs1,
                                    vuint16mf4_t vs2, vint32mf2x8_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg8ei16_v_i32mf2x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i32m1x8_m(vbool32_t vm, int32_t *rs1, vuint16mf2_t vs2,
                                   vint32m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i32m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_i64m1x8_m(vbool64_t vm, int64_t *rs1, vuint16mf4_t vs2,
                                   vint64m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_i64m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u8mf8x8_m(vbool64_t vm, uint8_t *rs1, vuint16mf4_t vs2,
                                   vuint8mf8x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u8mf8x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u8mf4x8_m(vbool32_t vm, uint8_t *rs1, vuint16mf2_t vs2,
                                   vuint8mf4x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u8mf4x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u8mf2x8_m(vbool16_t vm, uint8_t *rs1, vuint16m1_t vs2,
                                   vuint8mf2x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u8mf2x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u8m1x8_m(vbool8_t vm, uint8_t *rs1, vuint16m2_t vs2,
                                  vuint8m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u8m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u16mf4x8_m(vbool64_t vm, uint16_t *rs1,
                                    vuint16mf4_t vs2, vuint16mf4x8_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg8ei16_v_u16mf4x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u16mf2x8_m(vbool32_t vm, uint16_t *rs1,
                                    vuint16mf2_t vs2, vuint16mf2x8_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg8ei16_v_u16mf2x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u16m1x8_m(vbool16_t vm, uint16_t *rs1, vuint16m1_t vs2,
                                   vuint16m1x8_t vs3, size_t vl) {
  return __riscv_vsoxseg8ei16_v_u16m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u32mf2x8_m(vbool64_t vm, uint32_t *rs1,
                                    vuint16mf4_t vs2, vuint32mf2x8_t vs3,
                                    size_t vl) {
  return __riscv_vsoxseg8ei16_v_u32mf2x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u32m1x8_m(vbool32_t vm, uint32_t *rs1,
                                   vuint16mf2_t vs2, vuint32m1x8_t vs3,
                                   size_t vl) {
  return __riscv_vsoxseg8ei16_v_u32m1x8_m(vm, rs1, vs2, vs3, vl);
}

void test_vsoxseg8ei16_v_u64m1x8_m(vbool64_t vm, uint64_t *rs1,
                                   vuint16mf4_t vs2, vuint64m1x8_t vs3,
                                   size_t vl) {
  return __riscv_vsoxseg8ei16_v_u64m1x8_m(vm, rs1, vs2, vs3, vl);
}
