// Pixel shader data auto-generated by Asuka from VFBlendLayers.vdshaders. DO NOT EDIT!

static const uint32 kVDVFBlendLayersFP_Lerp[]={
	//     ps_2_0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     lrp_pp r2, c0.x, r1, r0
	//     mov_pp oC0, r2
	// 
	// // approximately 4 instruction slots used (2 texture, 2 arithmetic)
	// 
	0xffff0200,0x0200001f,0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,
	0x90000000,0xa00f0800,0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40000,
	0xa0e40800,0x03000042,0x802f0001,0xb0e40001,0xa0e40801,0x04000012,0x802f0002,0xa0000000,
	0x80e40001,0x80e40000,0x02000001,0x802f0800,0x80e40002,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_Min[]={
	//     ps_2_0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     min_pp r2, r0, r1
	//     lrp_pp r0, c0.x, r2, r1
	//     mov_pp oC0, r0
	// 
	// // approximately 5 instruction slots used (2 texture, 3 arithmetic)
	// 
	0xffff0200,0x0200001f,0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,
	0x90000000,0xa00f0800,0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,
	0xa0e40801,0x03000042,0x802f0001,0xb0e40000,0xa0e40800,0x0300000a,0x802f0002,0x80e40000,
	0x80e40001,0x04000012,0x802f0000,0xa0000000,0x80e40002,0x80e40001,0x02000001,0x802f0800,
	0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_Max[]={
	//     ps_2_0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     max_pp r2, r1, r0
	//     lrp_pp r0, c0.x, r2, r1
	//     mov_pp oC0, r0
	// 
	// // approximately 5 instruction slots used (2 texture, 3 arithmetic)
	// 
	0xffff0200,0x0200001f,0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,
	0x90000000,0xa00f0800,0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,
	0xa0e40801,0x03000042,0x802f0001,0xb0e40000,0xa0e40800,0x0300000b,0x802f0002,0x80e40001,
	0x80e40000,0x04000012,0x802f0000,0xa0000000,0x80e40002,0x80e40001,0x02000001,0x802f0800,
	0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_Add[]={
	//     ps_2_0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     mad_pp r0, r1, c0.x, r0
	//     mov_pp oC0, r0
	// 
	// // approximately 4 instruction slots used (2 texture, 2 arithmetic)
	// 
	0xffff0200,0x0200001f,0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,
	0x90000000,0xa00f0800,0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40000,
	0xa0e40800,0x03000042,0x802f0001,0xb0e40001,0xa0e40801,0x04000004,0x802f0000,0x80e40001,
	0xa0000000,0x80e40000,0x02000001,0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_Multiply[]={
	//     ps_2_0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     mad_pp r0, r1, r0, -r1
	//     mad_pp r0, c0.x, r0, r1
	//     mov_pp oC0, r0
	// 
	// // approximately 5 instruction slots used (2 texture, 3 arithmetic)
	// 
	0xffff0200,0x0200001f,0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,
	0x90000000,0xa00f0800,0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,
	0xa0e40801,0x03000042,0x802f0001,0xb0e40000,0xa0e40800,0x04000004,0x802f0000,0x80e40001,
	0x80e40000,0x81e40001,0x04000004,0x802f0000,0xa0000000,0x80e40000,0x80e40001,0x02000001,
	0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_LinearBurn[]={
	//     ps_2_0
	//     def c1, -1, 0, 0, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     add_pp r0, r0, c1.x
	//     mad_pp r0, r0, c0.x, r1
	//     mov_pp oC0, r0
	// 
	// // approximately 5 instruction slots used (2 texture, 3 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0001,0xbf800000,0x00000000,0x00000000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,0xa0e40801,0x03000042,
	0x802f0001,0xb0e40000,0xa0e40800,0x03000002,0x802f0000,0x80e40000,0xa0000001,0x04000004,
	0x802f0000,0x80e40000,0xa0000000,0x80e40001,0x02000001,0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_ColorBurn[]={
	//     ps_2_0
	//     def c1, 1, 9.99999975e-006, 0, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     add_pp r2, -r0, c1.x
	//     max_pp r3, r1, c1.y
	//     rcp r1.x, r3.x
	//     rcp r1.y, r3.y
	//     rcp r1.z, r3.z
	//     rcp r1.w, r3.w
	//     mad_pp r1, r2, -r1, -r0
	//     add_pp r1, r1, c1.x
	//     mad_pp r0, c0.x, r1, r0
	//     mov_pp oC0, r0
	// 
	// // approximately 12 instruction slots used (2 texture, 10 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0001,0x3f800000,0x3727c5ac,0x00000000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40000,0xa0e40800,0x03000042,
	0x802f0001,0xb0e40001,0xa0e40801,0x03000002,0x802f0002,0x81e40000,0xa0000001,0x0300000b,
	0x802f0003,0x80e40001,0xa0550001,0x02000006,0x80010001,0x80000003,0x02000006,0x80020001,
	0x80550003,0x02000006,0x80040001,0x80aa0003,0x02000006,0x80080001,0x80ff0003,0x04000004,
	0x802f0001,0x80e40002,0x81e40001,0x81e40000,0x03000002,0x802f0001,0x80e40001,0xa0000001,
	0x04000004,0x802f0000,0xa0000000,0x80e40001,0x80e40000,0x02000001,0x802f0800,0x80e40000,
	0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_Screen[]={
	//     ps_2_0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     mad_pp r0, r1, -r0, r0
	//     mad_pp r0, r0, c0.x, r1
	//     mov_pp oC0, r0
	// 
	// // approximately 5 instruction slots used (2 texture, 3 arithmetic)
	// 
	0xffff0200,0x0200001f,0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,
	0x90000000,0xa00f0800,0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,
	0xa0e40801,0x03000042,0x802f0001,0xb0e40000,0xa0e40800,0x04000004,0x802f0000,0x80e40001,
	0x81e40000,0x80e40000,0x04000004,0x802f0000,0x80e40000,0xa0000000,0x80e40001,0x02000001,
	0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_ColorDodge[]={
	//     ps_2_0
	//     def c1, 1, 9.99999975e-006, 0, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     add_pp r0, -r0, c1.x
	//     max_pp r2, c1.y, r0
	//     rcp r0.x, r2.x
	//     rcp r0.y, r2.y
	//     rcp r0.z, r2.z
	//     rcp r0.w, r2.w
	//     mad_pp r0, r1, r0, -r1
	//     mad_pp r0, c0.x, r0, r1
	//     mov_pp oC0, r0
	// 
	// // approximately 11 instruction slots used (2 texture, 9 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0001,0x3f800000,0x3727c5ac,0x00000000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,0xa0e40801,0x03000042,
	0x802f0001,0xb0e40000,0xa0e40800,0x03000002,0x802f0000,0x81e40000,0xa0000001,0x0300000b,
	0x802f0002,0xa0550001,0x80e40000,0x02000006,0x80010000,0x80000002,0x02000006,0x80020000,
	0x80550002,0x02000006,0x80040000,0x80aa0002,0x02000006,0x80080000,0x80ff0002,0x04000004,
	0x802f0000,0x80e40001,0x80e40000,0x81e40001,0x04000004,0x802f0000,0xa0000000,0x80e40000,
	0x80e40001,0x02000001,0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_Overlay[]={
	//     ps_2_0
	//     def c1, -0.5, 2, -1, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     add_pp r2, r0, r1
	//     mad_pp r2, r1, -r0, r2
	//     mul_pp r0, r0, r1
	//     add_pp r0, r0, r0
	//     mad_pp r2, r2, c1.y, c1.z
	//     add r3, r1, c1.x
	//     cmp_pp r0, r3, r2, r0
	//     lrp_pp r2, c0.x, r0, r1
	//     mov_pp oC0, r2
	// 
	// // approximately 11 instruction slots used (2 texture, 9 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0001,0xbf000000,0x40000000,0xbf800000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,0xa0e40801,0x03000042,
	0x802f0001,0xb0e40000,0xa0e40800,0x03000002,0x802f0002,0x80e40000,0x80e40001,0x04000004,
	0x802f0002,0x80e40001,0x81e40000,0x80e40002,0x03000005,0x802f0000,0x80e40000,0x80e40001,
	0x03000002,0x802f0000,0x80e40000,0x80e40000,0x04000004,0x802f0002,0x80e40002,0xa0550001,
	0xa0aa0001,0x03000002,0x800f0003,0x80e40001,0xa0000001,0x04000058,0x802f0000,0x80e40003,
	0x80e40002,0x80e40000,0x04000012,0x802f0002,0xa0000000,0x80e40000,0x80e40001,0x02000001,
	0x802f0800,0x80e40002,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_SoftLight[]={
	//     ps_2_0
	//     def c1, 0.5, 1, 0.25, 3
	//     def c2, 16, -12, 2, -1
	//     def c3, 0, 0, 0, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     rsq r0.w, r0.x
	//     rcp r2.x, r0.w
	//     rsq r0.w, r0.y
	//     rcp r2.y, r0.w
	//     rsq r0.w, r0.z
	//     rcp r2.z, r0.w
	//     add_pp r2.xyz, -r0, r2
	//     mad_pp r3.xyz, r0, c2.x, c2.y
	//     mad_pp r3.xyz, r3, r0, c1.w
	//     mul_pp r3.xyz, r0, r3
	//     add r4.xyz, -r0, c1.z
	//     cmp_pp r2.xyz, r4, r3, r2
	//     add r3.xyz, -r1, c1.x
	//     mad_pp r1.xyz, r1, c2.z, c2.w
	//     add_pp r4.xyz, -r0, c1.y
	//     mul_pp r4.xyz, r0, r4
	//     cmp_pp r2.xyz, r3, r4, r2
	//     mul_pp r1.xyz, r1, r2
	//     mad_pp r0.xyz, r1, c0.x, r0
	//     mov_pp r0.w, c3.x
	//     mov_pp oC0, r0
	// 
	// // approximately 23 instruction slots used (2 texture, 21 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0001,0x3f000000,0x3f800000,0x3e800000,0x40400000,0x05000051,
	0xa00f0002,0x41800000,0xc1400000,0x40000000,0xbf800000,0x05000051,0xa00f0003,0x00000000,
	0x00000000,0x00000000,0x00000000,0x0200001f,0x80000000,0xb0030000,0x0200001f,0x80000000,
	0xb0030001,0x0200001f,0x90000000,0xa00f0800,0x0200001f,0x90000000,0xa00f0801,0x03000042,
	0x802f0000,0xb0e40000,0xa0e40800,0x03000042,0x802f0001,0xb0e40001,0xa0e40801,0x02000007,
	0x80080000,0x80000000,0x02000006,0x80010002,0x80ff0000,0x02000007,0x80080000,0x80550000,
	0x02000006,0x80020002,0x80ff0000,0x02000007,0x80080000,0x80aa0000,0x02000006,0x80040002,
	0x80ff0000,0x03000002,0x80270002,0x81e40000,0x80e40002,0x04000004,0x80270003,0x80e40000,
	0xa0000002,0xa0550002,0x04000004,0x80270003,0x80e40003,0x80e40000,0xa0ff0001,0x03000005,
	0x80270003,0x80e40000,0x80e40003,0x03000002,0x80070004,0x81e40000,0xa0aa0001,0x04000058,
	0x80270002,0x80e40004,0x80e40003,0x80e40002,0x03000002,0x80070003,0x81e40001,0xa0000001,
	0x04000004,0x80270001,0x80e40001,0xa0aa0002,0xa0ff0002,0x03000002,0x80270004,0x81e40000,
	0xa0550001,0x03000005,0x80270004,0x80e40000,0x80e40004,0x04000058,0x80270002,0x80e40003,
	0x80e40004,0x80e40002,0x03000005,0x80270001,0x80e40001,0x80e40002,0x04000004,0x80270000,
	0x80e40001,0xa0000000,0x80e40000,0x02000001,0x80280000,0xa0000003,0x02000001,0x802f0800,
	0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_HardLight[]={
	//     ps_2_0
	//     def c0, -0.5, 2, -1, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     add_pp r2.xyz, r0, r1
	//     mad_pp r2.xyz, r0, -r1, r2
	//     mul_pp r0.xyz, r0, r1
	//     add r1.xyz, r1, c0.x
	//     add_pp r0.xyz, r0, r0
	//     mad_pp r2.xyz, r2, c0.y, c0.z
	//     cmp_pp r0.xyz, r1, r2, r0
	//     mov_pp r0.w, c0.w
	//     mov_pp oC0, r0
	// 
	// // approximately 11 instruction slots used (2 texture, 9 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0000,0xbf000000,0x40000000,0xbf800000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40000,0xa0e40800,0x03000042,
	0x802f0001,0xb0e40001,0xa0e40801,0x03000002,0x80270002,0x80e40000,0x80e40001,0x04000004,
	0x80270002,0x80e40000,0x81e40001,0x80e40002,0x03000005,0x80270000,0x80e40000,0x80e40001,
	0x03000002,0x80070001,0x80e40001,0xa0000000,0x03000002,0x80270000,0x80e40000,0x80e40000,
	0x04000004,0x80270002,0x80e40002,0xa0550000,0xa0aa0000,0x04000058,0x80270000,0x80e40001,
	0x80e40002,0x80e40000,0x02000001,0x80280000,0xa0ff0000,0x02000001,0x802f0800,0x80e40000,
	0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_VividLight[]={
	//     ps_2_0
	//     def c0, -0.5, 1, 9.99999975e-006, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     add_pp r2.xyz, -r0, c0.y
	//     add r3.xyz, r0, c0.x
	//     cmp_pp r0.xyz, r3, r2, r0
	//     add_pp r0.xyz, r0, r0
	//     max_pp r2.xyz, r0, c0.z
	//     rcp r0.x, r2.x
	//     rcp r0.y, r2.y
	//     rcp r0.z, r2.z
	//     add_pp r2.xyz, -r1, c0.y
	//     cmp_pp r2.xyz, r3, r1, r2
	//     mul_pp r1.xyz, r0, r1
	//     mad_pp r0.xyz, r2, -r0, c0.y
	//     cmp_pp r0.xyz, r3, r1, r0
	//     mov_pp r0.w, c0.w
	//     mov_pp oC0, r0
	// 
	// // approximately 17 instruction slots used (2 texture, 15 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0000,0xbf000000,0x3f800000,0x3727c5ac,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,0xa0e40801,0x03000042,
	0x802f0001,0xb0e40000,0xa0e40800,0x03000002,0x80270002,0x81e40000,0xa0550000,0x03000002,
	0x80070003,0x80e40000,0xa0000000,0x04000058,0x80270000,0x80e40003,0x80e40002,0x80e40000,
	0x03000002,0x80270000,0x80e40000,0x80e40000,0x0300000b,0x80270002,0x80e40000,0xa0aa0000,
	0x02000006,0x80010000,0x80000002,0x02000006,0x80020000,0x80550002,0x02000006,0x80040000,
	0x80aa0002,0x03000002,0x80270002,0x81e40001,0xa0550000,0x04000058,0x80270002,0x80e40003,
	0x80e40001,0x80e40002,0x03000005,0x80270001,0x80e40000,0x80e40001,0x04000004,0x80270000,
	0x80e40002,0x81e40000,0xa0550000,0x04000058,0x80270000,0x80e40003,0x80e40001,0x80e40000,
	0x02000001,0x80280000,0xa0ff0000,0x02000001,0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_LinearLight[]={
	//     ps_2_0
	//     def c0, 2, -1, 0, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     mad_pp r0.xyz, r1, c0.x, r0
	//     add_pp r0.xyz, r0, c0.y
	//     mov_pp r0.w, c0.z
	//     mov_pp oC0, r0
	// 
	// // approximately 6 instruction slots used (2 texture, 4 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0000,0x40000000,0xbf800000,0x00000000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40000,0xa0e40800,0x03000042,
	0x802f0001,0xb0e40001,0xa0e40801,0x04000004,0x80270000,0x80e40001,0xa0000000,0x80e40000,
	0x03000002,0x80270000,0x80e40000,0xa0550000,0x02000001,0x80280000,0xa0aa0000,0x02000001,
	0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_PinLight[]={
	//     ps_2_0
	//     def c0, -0.5, 2, -1, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     add_pp r2.xyz, r1, r1
	//     min_pp r3.xyz, r2, r0
	//     mad_pp r2.xyz, r1, c0.y, c0.z
	//     add r1.xyz, r1, c0.x
	//     max_pp r4.xyz, r0, r2
	//     cmp_pp r0.xyz, r1, r4, r3
	//     mov_pp r0.w, c0.w
	//     mov_pp oC0, r0
	// 
	// // approximately 10 instruction slots used (2 texture, 8 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0000,0xbf000000,0x40000000,0xbf800000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40000,0xa0e40800,0x03000042,
	0x802f0001,0xb0e40001,0xa0e40801,0x03000002,0x80270002,0x80e40001,0x80e40001,0x0300000a,
	0x80270003,0x80e40002,0x80e40000,0x04000004,0x80270002,0x80e40001,0xa0550000,0xa0aa0000,
	0x03000002,0x80070001,0x80e40001,0xa0000000,0x0300000b,0x80270004,0x80e40000,0x80e40002,
	0x04000058,0x80270000,0x80e40001,0x80e40004,0x80e40003,0x02000001,0x80280000,0xa0ff0000,
	0x02000001,0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_HardMix[]={
	//     ps_2_0
	//     def c0, 1, 0, 0, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     add_pp r0.xyz, r0, r1
	//     add r0.xyz, -r0, c0.x
	//     cmp_pp r0.xyz, r0, c0.y, c0.x
	//     mov r0.w, c0.y
	//     mov_pp oC0, r0
	// 
	// // approximately 7 instruction slots used (2 texture, 5 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0000,0x3f800000,0x00000000,0x00000000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40000,0xa0e40800,0x03000042,
	0x802f0001,0xb0e40001,0xa0e40801,0x03000002,0x80270000,0x80e40000,0x80e40001,0x03000002,
	0x80070000,0x81e40000,0xa0000000,0x04000058,0x80270000,0x80e40000,0xa0550000,0xa0000000,
	0x02000001,0x80080000,0xa0550000,0x02000001,0x802f0800,0x80e40000,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_Difference[]={
	//     ps_2_0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t1, s1
	//     texld_pp r1, t0, s0
	//     add_pp r0, -r0, r1
	//     abs_pp r0, r0
	//     lrp_pp r2, c0.x, r0, r1
	//     mov_pp oC0, r2
	// 
	// // approximately 6 instruction slots used (2 texture, 4 arithmetic)
	// 
	0xffff0200,0x0200001f,0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,
	0x90000000,0xa00f0800,0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40001,
	0xa0e40801,0x03000042,0x802f0001,0xb0e40000,0xa0e40800,0x03000002,0x802f0000,0x81e40000,
	0x80e40001,0x02000023,0x802f0000,0x80e40000,0x04000012,0x802f0002,0xa0000000,0x80e40000,
	0x80e40001,0x02000001,0x802f0800,0x80e40002,0x0000ffff,
};

static const uint32 kVDVFBlendLayersFP_Exclusion[]={
	//     ps_2_0
	//     def c1, 2, 0, 0, 0
	//     dcl t0.xy
	//     dcl t1.xy
	//     dcl_2d s0
	//     dcl_2d s1
	//     texld_pp r0, t0, s0
	//     texld_pp r1, t1, s1
	//     mul_pp r2, r0, r1
	//     mad_pp r1, r2, -c1.x, r1
	//     mad_pp r0, r1, c0.x, r0
	//     mov_pp oC0, r0
	// 
	// // approximately 6 instruction slots used (2 texture, 4 arithmetic)
	// 
	0xffff0200,0x05000051,0xa00f0001,0x40000000,0x00000000,0x00000000,0x00000000,0x0200001f,
	0x80000000,0xb0030000,0x0200001f,0x80000000,0xb0030001,0x0200001f,0x90000000,0xa00f0800,
	0x0200001f,0x90000000,0xa00f0801,0x03000042,0x802f0000,0xb0e40000,0xa0e40800,0x03000042,
	0x802f0001,0xb0e40001,0xa0e40801,0x03000005,0x802f0002,0x80e40000,0x80e40001,0x04000004,
	0x802f0001,0x80e40002,0xa1000001,0x80e40001,0x04000004,0x802f0000,0x80e40001,0xa0000000,
	0x80e40000,0x02000001,0x802f0800,0x80e40000,0x0000ffff,
};
