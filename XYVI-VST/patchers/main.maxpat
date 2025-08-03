{
	"patcher" : 	{
		"fileversion" : 1,
		"appversion" : 		{
			"major" : 9,
			"minor" : 0,
			"revision" : 7,
			"architecture" : "x64",
			"modernui" : 1
		}
,
		"classnamespace" : "box",
		"rect" : [ 34.0, 77.0, 1455.0, 929.0 ],
		"gridsize" : [ 15.0, 15.0 ],
		"boxes" : [ 			{
				"box" : 				{
					"id" : "obj-211",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1786.0, 1132.0, 50.0, 22.0 ],
					"text" : "-26.82"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-209",
					"maxclass" : "live.slider",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "float" ],
					"parameter_enable" : 1,
					"patching_rect" : [ 1786.0, 229.0, 55.0, 878.0 ],
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_longname" : "live.slider[3]",
							"parameter_mmax" : 136.0,
							"parameter_mmin" : -37.0,
							"parameter_modmode" : 3,
							"parameter_shortname" : "live.slider[3]",
							"parameter_steps" : 17301,
							"parameter_type" : 0,
							"parameter_unitstyle" : 1
						}

					}
,
					"varname" : "live.slider[3]"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-207",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 447.0, 966.0, 136.0, 22.0 ],
					"text" : "-1.96875"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-205",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 445.0, 835.0, 115.500000238281245, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-200",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 445.0, 927.0, 138.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-203",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 445.0, 884.0, 117.0, 22.0 ],
					"text" : "scale -1 0 0 0.03125"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-196",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 673.5, 1347.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-193",
					"maxclass" : "number",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 673.5, 1253.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-185",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 673.5, 1298.0, 143.0, 22.0 ],
					"text" : "scale 0. 127. 0. 15.875 4."
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-263",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 42.999999761718755, 1107.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-262",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "float", "float" ],
					"patching_rect" : [ 327.0, 1039.0, 29.5, 22.0 ],
					"text" : "t f f"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-261",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 452.000000238281245, 1107.0, 101.0, 22.0 ],
					"text" : "scale 0 1 -0.75 1."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-260",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 333.5, 1102.0, 109.0, 22.0 ],
					"text" : "scale -1. 0 -1 -0.75"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-259",
					"maxclass" : "newobj",
					"numinlets" : 3,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 332.0, 1148.0, 62.0, 22.0 ],
					"text" : "switch 2 2"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-258",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 265.0, 1071.0, 114.0, 22.0 ],
					"text" : "expr ( $f1 >= 0 ) + 1"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-257",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 42.999999761718755, 1136.0, 150.0, 22.0 ],
					"text" : "scale 0. 100. 100. 0.78125"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-255",
					"maxclass" : "newobj",
					"numinlets" : 5,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 42.999999761718755, 1074.5, 118.0, 22.0 ],
					"text" : "zmap 0. 127. 0. 100."
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-254",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 76.499999761718755, 1279.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-252",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 42.999999761718755, 1204.0, 181.0, 22.0 ],
					"text" : "scale 0.78125 100. -0.984375 1."
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-251",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 414.0, 1039.0, 138.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-249",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 414.0, 996.0, 107.0, 22.0 ],
					"text" : "scale -1. 1. 0. 100."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-244",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 419.25, 1320.0, 29.5, 22.0 ],
					"text" : "+ 1."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-243",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 384.25, 1286.0, 52.0, 22.0 ],
					"text" : "gate 2 2"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-242",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 342.5, 1226.0, 107.0, 22.0 ],
					"text" : "expr ( $f1 > 0 ) + 1"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-238",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 384.75, 1194.0, 65.0, 22.0 ],
					"text" : "expr 1./24."
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-237",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 327.0, 930.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-235",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 414.0, 1258.0, 52.0, 22.0 ],
					"text" : "gate 2 2"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-234",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 327.0, 978.0, 32.0, 22.0 ],
					"text" : "/ 64."
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-231",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 364.25, 1425.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-229",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 395.75, 1377.0, 33.0, 22.0 ],
					"text" : "* 24."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-226",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 332.0, 1202.0, 41.0, 22.0 ],
					"text" : "abs 0."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-225",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 384.25, 1320.0, 29.5, 22.0 ],
					"text" : "!- 1."
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-220",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 299.0, 1014.0, 73.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-218",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 362.75, 1353.0, 52.0, 22.0 ],
					"text" : "gate 2 2"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-217",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "float", "float", "bang" ],
					"patching_rect" : [ 332.0, 1178.0, 40.0, 22.0 ],
					"text" : "t f f b"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-216",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 374.5, 1226.0, 117.0, 22.0 ],
					"text" : "expr ( $f1 > $f2 ) + 1"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-212",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 180.5, 987.0, 110.0, 22.0 ],
					"text" : "scale 0 127 0. 25.4"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-208",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 813.0, 895.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-204",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 705.0, 900.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-202",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "bang", "float" ],
					"patching_rect" : [ 269.750000238281245, 890.0, 29.5, 22.0 ],
					"text" : "t b f"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-201",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 276.499999761718755, 827.0, 115.500000238281245, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-199",
					"maxclass" : "number",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 218.0, 890.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-194",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 92.999999761718755, 953.0, 104.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-114",
					"maxclass" : "newobj",
					"numinlets" : 6,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 227.0, 936.0, 83.0, 22.0 ],
					"text" : "scale 0 1 0. 1."
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-195",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1123.38153076171875, 358.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-191",
					"linecount" : 2,
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1150.0, 657.0, 50.0, 36.0 ],
					"text" : "0.92126"
				}

			}
, 			{
				"box" : 				{
					"attr" : "optimization",
					"id" : "obj-173",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1224.0, 139.0, 382.5, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-168",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "in1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "in2",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 3,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "list" ],
					"patching_rect" : [ 1224.0, 163.0, 607.0, 22.0 ],
					"rnboattrcache" : 					{
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PositionX" : 						{
							"label" : "PositionX",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PositionY" : 						{
							"label" : "PositionY",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Mirror" : 						{
							"label" : "Mirror",
							"isEnum" : 1,
							"parsestring" : "\"Pre-Position\" \"Post-Position\""
						}
,
						"Position" : 						{
							"label" : "Position",
							"isEnum" : 1,
							"parsestring" : "\"Pre-Rotation\" \"Post-Rotation\""
						}
,
						"MirrorY" : 						{
							"label" : "MirrorY",
							"isEnum" : 1,
							"parsestring" : "\"Off\" \"On\""
						}
,
						"MirrorX" : 						{
							"label" : "MirrorX",
							"isEnum" : 1,
							"parsestring" : "\"Off\" \"On\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[12]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[11]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Position-FX",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "3ce2341b-fa58-11ed-b41b-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"MirrorY" : 							{
								"value" : 0.0
							}
,
							"__presetid" : "Position-FX",
							"PositionX" : 							{
								"value" : 0.0
							}
,
							"Mirror" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"MirrorX" : 							{
								"value" : 0.0
							}
,
							"Position" : 							{
								"value" : 0.0
							}
,
							"PositionY" : 							{
								"value" : 0.0
							}
,
							"Rotation" : 							{
								"value" : 0.0
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Position-FX.rnbopat",
									"origin" : "Position-FX",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"MirrorY" : 										{
											"value" : 0.0
										}
,
										"__presetid" : "Position-FX",
										"PositionX" : 										{
											"value" : 0.0
										}
,
										"Mirror" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"MirrorX" : 										{
											"value" : 0.0
										}
,
										"Position" : 										{
											"value" : 0.0
										}
,
										"PositionY" : 										{
											"value" : 0.0
										}
,
										"Rotation" : 										{
											"value" : 0.0
										}

									}
,
									"fileref" : 									{
										"name" : "Position-FX.rnbopat",
										"filename" : "Position-FX.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "100af29ba9083e24dfe0e4a0cbf34fb6"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Position-FX.rnbopat @autosave 1 @title Position-FX @exportname Position-FX @parameter_mappable 1",
					"varname" : "rnbo~[12]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-192",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1225.0, 612.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-190",
					"int" : 1,
					"maxclass" : "gswitch2",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1319.841463029384613, 454.524389088153839, 39.0, 32.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-181",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1424.0, 564.10975581407547, 72.0, 22.0 ],
					"text" : "prepend set"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-179",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1368.5, 564.10975581407547, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-178",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1368.5, 493.134146392345428, 72.0, 22.0 ],
					"text" : "prepend set"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-174",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1315.5, 493.134146392345428, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-172",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1407.5, 435.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-156",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1418.0, 519.0, 173.0, 22.0 ],
					"text" : "prepend _parameter_exponent"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-147",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "bang", "float" ],
					"patching_rect" : [ 1407.5, 469.0, 29.5, 22.0 ],
					"text" : "t b f"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-146",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1315.5, 519.0, 98.0, 22.0 ],
					"text" : "prepend rawfloat"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-139",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "signal" ],
					"patching_rect" : [ 1320.0, 564.10975581407547, 43.0, 22.0 ],
					"text" : "cycle~"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-138",
					"interval" : 1,
					"logfreq" : 1,
					"maxclass" : "spectroscope~",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1320.0, 590.0, 300.0, 100.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-75",
					"maxclass" : "live.slider",
					"numinlets" : 1,
					"numoutlets" : 2,
					"orientation" : 1,
					"outlettype" : [ "", "float" ],
					"parameter_enable" : 1,
					"patching_rect" : [ 1313.5, 679.0, 312.0, 41.0 ],
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_exponent" : 7.6,
							"parameter_longname" : "live.slider[2]",
							"parameter_mmax" : 22050.0,
							"parameter_modmode" : 0,
							"parameter_shortname" : "live.slider[2]",
							"parameter_type" : 0,
							"parameter_unitstyle" : 0
						}

					}
,
					"varname" : "live.slider[2]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-182",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1211.5, 83.0, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-170",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1865.666666666666515, 139.0, 95.5, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-167",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1833.0, 163.0, 95.5, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-152",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1800.333333333333258, 187.0, 95.5, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-41",
					"maxclass" : "newobj",
					"numinlets" : 4,
					"numoutlets" : 4,
					"outlettype" : [ "", "", "", "" ],
					"patching_rect" : [ 1800.333333333333258, 115.0, 117.0, 22.0 ],
					"text" : "route freq midi delay"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-316",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 824.0, 1030.0, 134.0, 22.0 ],
					"text" : "6."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-315",
					"maxclass" : "gswitch",
					"numinlets" : 3,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 694.0, 996.0, 41.0, 32.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-314",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 806.5, 996.0, 29.5, 22.0 ],
					"text" : "- 0."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-313",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "int" ],
					"patching_rect" : [ 673.5, 972.0, 29.5, 22.0 ],
					"text" : "< 0"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-312",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "float" ],
					"patching_rect" : [ 817.0, 948.0, 29.5, 22.0 ],
					"text" : "- 1."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-310",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 817.0, 972.0, 110.0, 22.0 ],
					"text" : "expr log($f1)/log(2)"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-296",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 862.5, 1158.0, 134.0, 22.0 ],
					"text" : "1."
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-292",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "int" ],
					"patching_rect" : [ 705.0, 948.0, 28.0, 22.0 ],
					"text" : "abs"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-291",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 878.499999761718755, 1054.0, 63.0, 22.0 ],
					"text" : "prepend 0"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-290",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 878.499999761718755, 1078.0, 47.0, 22.0 ],
					"text" : "list.sort"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-289",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 878.499999761718755, 1102.0, 155.0, 22.0 ],
					"text" : "prepend _parameter_range"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-286",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "float", "float", "float" ],
					"patching_rect" : [ 705.0, 924.0, 40.0, 22.0 ],
					"text" : "t f f f"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-282",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 9,
							"minor" : 0,
							"revision" : 7,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 433.0, 106.0, 640.0, 480.0 ],
						"gridsize" : [ 15.0, 15.0 ],
						"boxes" : [ 							{
								"box" : 								{
									"id" : "obj-281",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 387.0, 323.228515625, 41.0, 22.0 ],
									"text" : "sig~ 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-280",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 345.0, 344.228515625, 88.0, 22.0 ],
									"text" : "scale~ -1 1 0 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-279",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 437.0, 344.228515625, 88.0, 22.0 ],
									"text" : "scale~ -1 1 0 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-278",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 428.75, 369.228515625, 29.5, 22.0 ],
									"text" : "+~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-277",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 338.0, 373.228515625, 29.5, 22.0 ],
									"text" : "+~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-265",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 50.0, 332.228515625, 43.0, 22.0 ],
									"text" : "+~ 0.5"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-263",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 50.0, 308.228515625, 29.5, 22.0 ],
									"text" : "/~ 2"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-261",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 50.0, 284.228515625, 75.0, 22.0 ],
									"text" : "triangle~ 0.5"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-260",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 333.0, 74.228515625, 29.5, 22.0 ],
									"text" : "0 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-256",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 475.0, 510.228515625, 84.0, 22.0 ],
									"text" : "scale~ 0 1 0 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-255",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 253.5, 510.228515625, 84.0, 22.0 ],
									"text" : "scale~ 0 1 0 0"
								}

							}
, 							{
								"box" : 								{
									"format" : 6,
									"id" : "obj-252",
									"maxclass" : "flonum",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 50.0, 234.228515625, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-250",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 550.0, 285.228515625, 41.0, 22.0 ],
									"text" : "sig~ 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-249",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 484.0, 285.228515625, 41.0, 22.0 ],
									"text" : "sig~ 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-248",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 403.0, 285.228515625, 41.0, 22.0 ],
									"text" : "sig~ 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-247",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 328.0, 278.228515625, 41.0, 22.0 ],
									"text" : "sig~ 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-246",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 254.0, 285.228515625, 41.0, 22.0 ],
									"text" : "sig~ 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-245",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 183.0, 285.228515625, 41.0, 22.0 ],
									"text" : "sig~ 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-244",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 523.0, 410.228515625, 84.0, 22.0 ],
									"text" : "scale~ 0 1 0 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-243",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 437.0, 410.228515625, 84.0, 22.0 ],
									"text" : "scale~ 0 1 0 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-242",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 282.0, 410.228515625, 84.0, 22.0 ],
									"text" : "scale~ 0 1 0 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-241",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 194.5, 410.228515625, 84.0, 22.0 ],
									"text" : "scale~ 0 1 0 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-232",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 550.0, 231.228515625, 39.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-233",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 484.0, 231.228515625, 39.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"bottomvalue" : -100,
									"id" : "obj-235",
									"leftvalue" : -100,
									"maxclass" : "pictslider",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "int", "int" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 484.0, 109.228515625, 100.0, 100.0 ],
									"rightvalue" : 100,
									"topvalue" : 100
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-228",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 409.0, 243.228515625, 39.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-229",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 328.0, 243.228515625, 39.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"bottomvalue" : -200,
									"id" : "obj-231",
									"leftvalue" : -200,
									"maxclass" : "pictslider",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "int", "int" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 333.0, 109.228515625, 100.0, 100.0 ],
									"rightvalue" : 200,
									"topvalue" : 200
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-227",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 249.0, 235.228515625, 39.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-226",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 183.0, 235.228515625, 39.0, 22.0 ],
									"text" : "/ 100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-221",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 50.0, 258.228515625, 62.0, 22.0 ],
									"text" : "phasor~ 0"
								}

							}
, 							{
								"box" : 								{
									"bottomvalue" : -100,
									"id" : "obj-220",
									"leftvalue" : -100,
									"maxclass" : "pictslider",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "int", "int" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 183.0, 113.228515625, 100.0, 100.0 ],
									"rightvalue" : 100,
									"topvalue" : 100
								}

							}
, 							{
								"box" : 								{
									"bufsize" : 256,
									"calccount" : 4,
									"displaychan" : 2,
									"id" : "obj-218",
									"maxclass" : "scope~",
									"numinlets" : 2,
									"numoutlets" : 0,
									"patching_rect" : [ 253.5, 534.228515625, 240.0, 240.0 ],
									"range" : [ -2.0, 2.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-226", 0 ],
									"source" : [ "obj-220", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-227", 0 ],
									"source" : [ "obj-220", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-261", 0 ],
									"source" : [ "obj-221", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-245", 0 ],
									"source" : [ "obj-226", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-246", 0 ],
									"source" : [ "obj-227", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-248", 0 ],
									"source" : [ "obj-228", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-247", 0 ],
									"source" : [ "obj-229", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-228", 0 ],
									"source" : [ "obj-231", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-229", 0 ],
									"source" : [ "obj-231", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-250", 0 ],
									"source" : [ "obj-232", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-249", 0 ],
									"source" : [ "obj-233", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-232", 0 ],
									"source" : [ "obj-235", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-233", 0 ],
									"source" : [ "obj-235", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-255", 3 ],
									"source" : [ "obj-241", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-256", 3 ],
									"source" : [ "obj-242", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-255", 4 ],
									"source" : [ "obj-243", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-256", 4 ],
									"source" : [ "obj-244", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-241", 3 ],
									"order" : 1,
									"source" : [ "obj-245", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-280", 3 ],
									"order" : 0,
									"source" : [ "obj-245", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-242", 3 ],
									"order" : 1,
									"source" : [ "obj-246", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-279", 3 ],
									"order" : 0,
									"source" : [ "obj-246", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-277", 1 ],
									"source" : [ "obj-247", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-278", 1 ],
									"source" : [ "obj-248", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-243", 4 ],
									"order" : 0,
									"source" : [ "obj-249", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-280", 4 ],
									"order" : 1,
									"source" : [ "obj-249", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-244", 4 ],
									"order" : 0,
									"source" : [ "obj-250", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-279", 4 ],
									"order" : 1,
									"source" : [ "obj-250", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-221", 0 ],
									"source" : [ "obj-252", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-218", 0 ],
									"source" : [ "obj-255", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-218", 1 ],
									"source" : [ "obj-256", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-231", 0 ],
									"source" : [ "obj-260", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-263", 0 ],
									"source" : [ "obj-261", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-265", 0 ],
									"source" : [ "obj-263", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-241", 0 ],
									"order" : 5,
									"source" : [ "obj-265", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-242", 0 ],
									"order" : 3,
									"source" : [ "obj-265", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-243", 0 ],
									"order" : 2,
									"source" : [ "obj-265", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-244", 0 ],
									"order" : 0,
									"source" : [ "obj-265", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-255", 0 ],
									"order" : 4,
									"source" : [ "obj-265", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-256", 0 ],
									"order" : 1,
									"source" : [ "obj-265", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-241", 4 ],
									"order" : 1,
									"source" : [ "obj-277", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-243", 3 ],
									"order" : 0,
									"source" : [ "obj-277", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-242", 4 ],
									"order" : 1,
									"source" : [ "obj-278", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-244", 3 ],
									"order" : 0,
									"source" : [ "obj-278", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-278", 0 ],
									"source" : [ "obj-279", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-277", 0 ],
									"source" : [ "obj-280", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-279", 0 ],
									"order" : 0,
									"source" : [ "obj-281", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-280", 0 ],
									"order" : 1,
									"source" : [ "obj-281", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 265.0, 736.223632216453552, 127.0, 22.0 ],
					"text" : "p QuadraticBèzierTest"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-189",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 705.0, 972.0, 110.0, 22.0 ],
					"text" : "expr log($f1)/log(2)"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-188",
					"maxclass" : "flonum",
					"numdecimalplaces" : 15,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 694.0, 1030.0, 128.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-187",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "float", "float" ],
					"patching_rect" : [ 694.0, 1054.0, 39.0, 22.0 ],
					"text" : "t 0.5 f"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-186",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 704.499999761718755, 1102.0, 173.0, 22.0 ],
					"text" : "prepend _parameter_exponent"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"hidden" : 1,
					"id" : "obj-184",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 603.499999761718755, 1078.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-183",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 603.499999761718755, 1102.0, 98.0, 22.0 ],
					"text" : "prepend rawfloat"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-180",
					"maxclass" : "live.slider",
					"numinlets" : 1,
					"numoutlets" : 2,
					"orientation" : 1,
					"outlettype" : [ "", "float" ],
					"parameter_enable" : 1,
					"patching_rect" : [ 603.499999761718755, 1153.0, 260.0, 41.0 ],
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_exponent" : 6.0,
							"parameter_longname" : "live.slider[1]",
							"parameter_mmax" : 64.0,
							"parameter_modmode" : 0,
							"parameter_shortname" : "1 in center",
							"parameter_type" : 0,
							"parameter_unitstyle" : 1
						}

					}
,
					"varname" : "live.slider[1]"
				}

			}
, 			{
				"box" : 				{
					"attr" : "Channel",
					"id" : "obj-177",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1308.5, 11.0, 382.5, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"attr" : "Delay",
					"id" : "obj-176",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1308.5, 83.0, 382.5, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"attr" : "MIDI",
					"id" : "obj-175",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1308.5, 59.0, 382.5, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"attr" : "Frequency",
					"id" : "obj-149",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1308.5, 35.0, 382.5, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"bufsize" : 256,
					"calccount" : 4,
					"id" : "obj-76",
					"maxclass" : "scope~",
					"numinlets" : 2,
					"numoutlets" : 0,
					"patching_rect" : [ 1483.5, 297.0, 240.0, 240.0 ],
					"range" : [ -2.0, 2.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-74",
					"maxclass" : "ezadc~",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "signal" ],
					"patching_rect" : [ 1261.5, 62.0, 45.0, 45.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-59",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "in1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "in2",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 3,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "list" ],
					"patching_rect" : [ 1224.0, 115.0, 570.0, 22.0 ],
					"rnboattrcache" : 					{
						"Delay" : 						{
							"label" : "Delay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"MIDI" : 						{
							"label" : "MIDI",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Smoothing" : 						{
							"label" : "Smoothing",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Framesize" : 						{
							"label" : "Framesize",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Frequency" : 						{
							"label" : "Frequency",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DelayTuning" : 						{
							"label" : "DelayTuning",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Channel" : 						{
							"label" : "Channel",
							"isEnum" : 1,
							"parsestring" : "\"Bypass\" \"L\" \"R\" \"L+R\" \"R+L\""
						}
,
						"Mode" : 						{
							"label" : "Mode",
							"isEnum" : 1,
							"parsestring" : "\"Auto\" \"Manual\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[11]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[11]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Circle-FX",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "3ce2341b-fa58-11ed-b41b-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"__presetid" : "Circle-FX",
							"Channel" : 							{
								"value" : 0.0
							}
,
							"MIDI" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"Framesize" : 							{
								"value" : 12.0
							}
,
							"Rotation" : 							{
								"value" : 0.0
							}
,
							"Frequency" : 							{
								"value" : 1.0
							}
,
							"Smoothing" : 							{
								"value" : 100.0
							}
,
							"Mode" : 							{
								"value" : 0.0
							}
,
							"Delay" : 							{
								"value" : 250.0
							}
,
							"DelayTuning" : 							{
								"value" : 0.0
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Circle-FX.rnbopat",
									"origin" : "Circle-FX",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"__presetid" : "Circle-FX",
										"Channel" : 										{
											"value" : 0.0
										}
,
										"MIDI" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"Framesize" : 										{
											"value" : 12.0
										}
,
										"Rotation" : 										{
											"value" : 0.0
										}
,
										"Frequency" : 										{
											"value" : 1.0
										}
,
										"Smoothing" : 										{
											"value" : 100.0
										}
,
										"Mode" : 										{
											"value" : 0.0
										}
,
										"Delay" : 										{
											"value" : 250.0
										}
,
										"DelayTuning" : 										{
											"value" : 0.0
										}

									}
,
									"fileref" : 									{
										"name" : "Circle-FX.rnbopat",
										"filename" : "Circle-FX.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "dd26b4b7e4f090657b602f123703de3b"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Circle-FX.rnbopat @autosave 1 @title Circle-FX @exportname Circle-FX @parameter_mappable 1",
					"varname" : "rnbo~[11]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-35",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 14.999999999999989, 520.223632335662842, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-37",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 14.999999999999986, 568.223632216453552, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"attr" : "Exponent",
					"id" : "obj-38",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999761718755, 520.223632335662842, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-39",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 14.999999999999989, 544.223632335662842, 512.0, 22.0 ],
					"rnboattrcache" : 					{
						"Exponent" : 						{
							"label" : "Exponent",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Size" : 						{
							"label" : "Size",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[10]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[4]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Spiral",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "95521287-f117-11ed-9287-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"__presetid" : "Spiral",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.48
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"Exponent" : 							{
								"value" : 1.0
							}
,
							"__sps" : 							{
								"Fermat's Spiral" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Spiral.rnbopat",
									"origin" : "Spiral",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"__presetid" : "Spiral",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.48
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"Exponent" : 										{
											"value" : 1.0
										}
,
										"__sps" : 										{
											"Fermat's Spiral" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "Spiral.rnbopat",
										"filename" : "Spiral.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "bdab07d0e167d87390570aceed8a7525"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Spiral.rnbopat @autosave 1 @title Spiral @exportname Spiral @parameter_mappable 1",
					"varname" : "rnbo~[10]"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-4",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 14.999999761718755, 592.223632335662842, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-24",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 14.999999761718751, 640.223632216453552, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"attr" : "Leaves",
					"hidden" : 1,
					"id" : "obj-25",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999523437523, 592.223632335662842, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"hidden" : 1,
					"id" : "obj-33",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 14.999999761718755, 616.223632335662842, 573.0, 22.0 ],
					"rnboattrcache" : 					{
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Leaves" : 						{
							"label" : "Leaves",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"LeavesType" : 						{
							"label" : "LeavesType",
							"isEnum" : 1,
							"parsestring" : "\"Float\" \"Int\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[9]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[4]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Cannabis",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "95521287-f117-11ed-9287-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"__presetid" : "Cannabis",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"__sps" : 							{
								"Cannabis" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ]
							}
,
							"LeavesType" : 							{
								"value" : 1.0
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Cannabis.rnbopat",
									"origin" : "Cannabis",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"__presetid" : "Cannabis",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"__sps" : 										{
											"Cannabis" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ]
										}
,
										"LeavesType" : 										{
											"value" : 1.0
										}

									}
,
									"fileref" : 									{
										"name" : "Cannabis.rnbopat",
										"filename" : "Cannabis.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "4dcd9af31e0f6e7d678efa032919c0c3"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Cannabis.rnbopat @autosave 1 @title Cannabis @exportname Cannabis @parameter_mappable 1",
					"varname" : "rnbo~[9]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-171",
					"maxclass" : "number",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1256.0, 285.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-169",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1302.0, 311.0, 50.0, 22.0 ],
					"text" : "1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-166",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 14.999999999999996, 736.223632216453552, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-165",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 14.999999999999993, 448.223632454872131, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-164",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 14.999999999999993, 376.223632574081421, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-163",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 14.999999999999996, 304.22363269329071, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-162",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 15.0, 232.2236328125, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-161",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 15.0, 15.0, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-160",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 14.999999761718751, 664.223632216453552, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-159",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 15.0, 88.2236328125, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-158",
					"maxclass" : "textbutton",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "", "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 15.0, 160.2236328125, 44.0, 22.0 ],
					"text" : "reset"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-157",
					"maxclass" : "number",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1248.5, 334.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-155",
					"maxclass" : "newobj",
					"numinlets" : 5,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1248.5, 261.0, 95.0, 22.0 ],
					"text" : "zmap -1 1 0 127"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-154",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "int" ],
					"patching_rect" : [ 1248.5, 237.0, 33.0, 22.0 ],
					"text" : "% 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-153",
					"maxclass" : "number",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1196.0, 310.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-151",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "int" ],
					"patching_rect" : [ 1238.0, 310.0, 37.0, 22.0 ],
					"text" : "* 127"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-150",
					"maxclass" : "toggle",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "int" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1238.0, 285.0, 22.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-148",
					"maxclass" : "flonum",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1196.0, 237.0, 50.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-145",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1196.0, 261.0, 59.0, 22.0 ],
					"text" : "ftom 440."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-144",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1196.0, 334.0, 61.0, 22.0 ],
					"text" : "pak 0 127"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-143",
					"maxclass" : "newobj",
					"numinlets" : 7,
					"numoutlets" : 2,
					"outlettype" : [ "int", "" ],
					"patching_rect" : [ 1196.0, 358.0, 82.0, 22.0 ],
					"text" : "midiformat"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-140",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 14.999999999999989, 496.223632335662842, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"attr" : "P1",
					"id" : "obj-141",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999761718769, 448.223632454872131, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-142",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 14.999999999999993, 472.223632454872131, 552.0, 22.0 ],
					"rnboattrcache" : 					{
						"P3" : 						{
							"label" : "P3",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Wings" : 						{
							"label" : "Wings",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P2" : 						{
							"label" : "P2",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P1" : 						{
							"label" : "P1",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"WingsType" : 						{
							"label" : "WingsType",
							"isEnum" : 1,
							"parsestring" : "\"Float\" \"Int\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[8]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[4]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Butterfly",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "95521287-f117-11ed-9287-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"WingsType" : 							{
								"value" : 1.0
							}
,
							"__presetid" : "Butterfly",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"P3" : 							{
								"value" : 0.0
							}
,
							"__sps" : 							{
								"Butterfly" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ],
								"scale" : 								{

								}

							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Butterfly.rnbopat",
									"origin" : "Butterfly",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"WingsType" : 										{
											"value" : 1.0
										}
,
										"__presetid" : "Butterfly",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"P3" : 										{
											"value" : 0.0
										}
,
										"__sps" : 										{
											"Butterfly" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ],
											"scale" : 											{

											}

										}

									}
,
									"fileref" : 									{
										"name" : "Butterfly.rnbopat",
										"filename" : "Butterfly.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "30cb6eb861fab3ef0e0a99580a40ebcc"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Butterfly.rnbopat @autosave 1 @title Butterfly @exportname Butterfly @parameter_mappable 1",
					"varname" : "rnbo~[8]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-77",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 14.999999999999993, 424.223632454872131, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"attr" : "Radius",
					"id" : "obj-78",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999761718769, 376.223632574081421, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-137",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 14.999999999999993, 400.223632574081421, 506.0, 22.0 ],
					"rnboattrcache" : 					{
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Teeth" : 						{
							"label" : "Teeth",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Radius" : 						{
							"label" : "Radius",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"TeethType" : 						{
							"label" : "TeethType",
							"isEnum" : 1,
							"parsestring" : "\"Float\" \"Int\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[7]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[4]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Gears",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "95521287-f117-11ed-9287-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"TeethType" : 							{
								"value" : 1.0
							}
,
							"__presetid" : "Gear",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"__sps" : 							{
								"Gear" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Gears.rnbopat",
									"origin" : "Gear",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"TeethType" : 										{
											"value" : 1.0
										}
,
										"__presetid" : "Gear",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"__sps" : 										{
											"Gear" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "Gears.rnbopat",
										"filename" : "Gears.rnbopat_20230822.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "8e43de66e0f90d80b50b265e36ed3452"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Gear.rnbopat @autosave 1 @title Gear @exportname Gears @parameter_mappable 1",
					"varname" : "rnbo~[7]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-67",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 15.000000238281231, 784.223632216453552, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"attr" : "Curvature",
					"id" : "obj-68",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 61.0, 736.223632216453552, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-73",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 15.000000238281231, 760.223632216453552, 539.0, 22.0 ],
					"rnboattrcache" : 					{
						"B1R" : 						{
							"label" : "B1R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B5T" : 						{
							"label" : "B5T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P3X" : 						{
							"label" : "P3X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B9R" : 						{
							"label" : "B9R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B4R" : 						{
							"label" : "B4R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B3T" : 						{
							"label" : "B3T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P6X" : 						{
							"label" : "P6X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P9Y" : 						{
							"label" : "P9Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B8R" : 						{
							"label" : "B8R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B5R" : 						{
							"label" : "B5R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P0Y" : 						{
							"label" : "P0Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P2X" : 						{
							"label" : "P2X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B6T" : 						{
							"label" : "B6T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B8T" : 						{
							"label" : "B8T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P5Y" : 						{
							"label" : "P5Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B3R" : 						{
							"label" : "B3R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B7T" : 						{
							"label" : "B7T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P0X" : 						{
							"label" : "P0X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P1Y" : 						{
							"label" : "P1Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B1T" : 						{
							"label" : "B1T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Curvature" : 						{
							"label" : "Curvature",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Points" : 						{
							"label" : "Points",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B6R" : 						{
							"label" : "B6R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B9T" : 						{
							"label" : "B9T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P1X" : 						{
							"label" : "P1X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P8Y" : 						{
							"label" : "P8Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B4T" : 						{
							"label" : "B4T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P6Y" : 						{
							"label" : "P6Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P3Y" : 						{
							"label" : "P3Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P9X" : 						{
							"label" : "P9X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P8X" : 						{
							"label" : "P8X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B2R" : 						{
							"label" : "B2R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P7X" : 						{
							"label" : "P7X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B7R" : 						{
							"label" : "B7R",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P7Y" : 						{
							"label" : "P7Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P2Y" : 						{
							"label" : "P2Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P4Y" : 						{
							"label" : "P4Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P4X" : 						{
							"label" : "P4X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"B2T" : 						{
							"label" : "B2T",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"P5X" : 						{
							"label" : "P5X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Mode" : 						{
							"label" : "Mode",
							"isEnum" : 1,
							"parsestring" : "\"Cardinal\" \"Bezier\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[6]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[4]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Splines",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "95521287-f117-11ed-9287-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"__presetid" : "Splines",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"Mode" : 							{
								"value" : 0.0
							}
,
							"Points" : 							{
								"value" : 10.0
							}
,
							"Curvature" : 							{
								"value" : 0.0
							}
,
							"__sps" : 							{
								"Splines" : [ 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"P1" : 											{

											}
,
											"Cardinal" : 											{
												"__sps" : 												{
													"fx(t)" : 													{

													}
,
													"fy(t)" : 													{

													}

												}

											}
,
											"P0" : 											{

											}
,
											"V1" : 											{

											}
,
											"V0" : 											{

											}
,
											"Bezier" : 											{

											}
,
											"PCurve" : 											{

											}

										}

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Splines.rnbopat",
									"origin" : "Splines",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"__presetid" : "Splines",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"Mode" : 										{
											"value" : 0.0
										}
,
										"Points" : 										{
											"value" : 10.0
										}
,
										"Curvature" : 										{
											"value" : 0.0
										}
,
										"__sps" : 										{
											"Splines" : [ 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"P1" : 														{

														}
,
														"Cardinal" : 														{
															"__sps" : 															{
																"fx(t)" : 																{

																}
,
																"fy(t)" : 																{

																}

															}

														}
,
														"P0" : 														{

														}
,
														"V1" : 														{

														}
,
														"V0" : 														{

														}
,
														"Bezier" : 														{

														}
,
														"PCurve" : 														{

														}

													}

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "Splines.rnbopat",
										"filename" : "Splines.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "94bf1b572876d210dd009a6b26a0fb97"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Splines.rnbopat @autosave 1 @title Splines @exportname Splines @parameter_mappable 1",
					"varname" : "rnbo~[6]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-70",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 14.999999999999993, 352.223632574081421, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"attr" : "K",
					"id" : "obj-71",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999761718769, 304.22363269329071, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-72",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 14.999999999999996, 328.22363269329071, 504.0, 22.0 ],
					"rnboattrcache" : 					{
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Petals" : 						{
							"label" : "Petals",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PetalsType" : 						{
							"label" : "PetalsType",
							"isEnum" : 1,
							"parsestring" : "\"Float\" \"Int\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[5]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[4]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Rose",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "95521287-f117-11ed-9287-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"__presetid" : "Rose",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"PetalsType" : 							{
								"value" : 1.0
							}
,
							"__sps" : 							{
								"Rose" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Rose.rnbopat",
									"origin" : "Rose",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"__presetid" : "Rose",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"PetalsType" : 										{
											"value" : 1.0
										}
,
										"__sps" : 										{
											"Rose" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "Rose.rnbopat",
										"filename" : "Rose.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "98e8159c3b7817774b6a33ad6bd6bc49"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Rose.rnbopat @autosave 1 @title Rose @exportname Rose @parameter_mappable 1",
					"varname" : "rnbo~[5]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-69",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 927.0, 479.0, 96.0, 22.0 ],
					"text" : "54 0"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-44",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 8,
					"outlettype" : [ "", "", "", "int", "int", "", "int", "" ],
					"patching_rect" : [ 927.0, 455.0, 96.5, 22.0 ],
					"text" : "midiparse"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-66",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 14.999999999999996, 280.22363269329071, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"attr" : "Radius",
					"id" : "obj-62",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999761718769, 232.2236328125, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-32",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 15.0, 256.2236328125, 559.0, 22.0 ],
					"rnboattrcache" : 					{
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Cycles" : 						{
							"label" : "Cycles",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Radius" : 						{
							"label" : "Radius",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"CyclesType" : 						{
							"label" : "CyclesType",
							"isEnum" : 1,
							"parsestring" : "\"Float\" \"Int\""
						}
,
						"Mode" : 						{
							"label" : "Mode",
							"isEnum" : 1,
							"parsestring" : "\"Hypo\" \"Epi\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[4]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[4]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Trochoid",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "95521287-f117-11ed-9287-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"Radius" : 							{
								"value" : 1.0
							}
,
							"__presetid" : "Trochoid",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.97
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"CyclesType" : 							{
								"value" : 0.0
							}
,
							"Cycles" : 							{
								"value" : 3.0
							}
,
							"Mode" : 							{
								"value" : 0.0
							}
,
							"__sps" : 							{
								"Trochoid" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Trochoid.rnbopat",
									"origin" : "Trochoid",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"Radius" : 										{
											"value" : 1.0
										}
,
										"__presetid" : "Trochoid",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.97
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"CyclesType" : 										{
											"value" : 0.0
										}
,
										"Cycles" : 										{
											"value" : 3.0
										}
,
										"Mode" : 										{
											"value" : 0.0
										}
,
										"__sps" : 										{
											"Trochoid" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "Trochoid.rnbopat",
										"filename" : "Trochoid.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "daef2f8ba31c0e84057bf203186f56d5"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Trochoid.rnbopat @autosave 1 @title Trochoid @exportname Trochoid @parameter_mappable 1",
					"varname" : "rnbo~[4]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-111",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 667.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-113",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 619.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-115",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 643.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-118",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 739.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-119",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 763.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-120",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 691.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-121",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 715.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-122",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 835.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-123",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 859.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-124",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 787.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-125",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 811.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-126",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 619.0, 220.0, 22.0 ],
					"text" : "22. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-127",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 859.0, 220.0, 22.0 ],
					"text" : "32. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-128",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 835.0, 220.0, 22.0 ],
					"text" : "31. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-129",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 811.0, 220.0, 22.0 ],
					"text" : "30. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-130",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 787.0, 220.0, 22.0 ],
					"text" : "29. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-131",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 763.0, 220.0, 22.0 ],
					"text" : "28. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-132",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 739.0, 220.0, 22.0 ],
					"text" : "27. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-133",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 715.0, 220.0, 22.0 ],
					"text" : "26. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-134",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 691.0, 220.0, 22.0 ],
					"text" : "25. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-135",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 667.0, 220.0, 22.0 ],
					"text" : "24. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-136",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 643.0, 220.0, 22.0 ],
					"text" : "23. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-79",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 403.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-80",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 355.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-81",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 379.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-82",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 475.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-85",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 499.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-86",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 427.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-87",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 451.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-88",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 571.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-89",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 595.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-90",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 523.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-91",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 547.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-92",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 355.0, 220.0, 22.0 ],
					"text" : "11. 0. 0. 1. 2."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-95",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 595.0, 220.0, 22.0 ],
					"text" : "21. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-96",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 571.0, 220.0, 22.0 ],
					"text" : "20. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-97",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 547.0, 220.0, 22.0 ],
					"text" : "19. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-98",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 523.0, 220.0, 22.0 ],
					"text" : "18. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-99",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 499.0, 220.0, 22.0 ],
					"text" : "17. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-101",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 475.0, 220.0, 22.0 ],
					"text" : "16. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-103",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 451.0, 220.0, 22.0 ],
					"text" : "15. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-105",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 427.0, 220.0, 22.0 ],
					"text" : "14. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-106",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 403.0, 220.0, 22.0 ],
					"text" : "13. 0. 0. 0. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-110",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 379.0, 220.0, 22.0 ],
					"text" : "12. 0. 0. 1. 2."
				}

			}
, 			{
				"box" : 				{
					"attr" : "calccount",
					"id" : "obj-63",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1040.38153076171875, 91.0, 150.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-61",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 15.0, 208.2236328125, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-60",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 15.0, 184.2236328125, 508.0, 22.0 ],
					"rnboattrcache" : 					{
						"Yt1" : 						{
							"label" : "Yt1",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Yt4" : 						{
							"label" : "Yt4",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Y1" : 						{
							"label" : "Y1",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Yt3" : 						{
							"label" : "Yt3",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Y3" : 						{
							"label" : "Y3",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Delta" : 						{
							"label" : "Delta",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"X" : 						{
							"label" : "X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Y2" : 						{
							"label" : "Y2",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Y4" : 						{
							"label" : "Y4",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Yt2" : 						{
							"label" : "Yt2",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[3]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[3]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Heart",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "54f51d1b-edf6-11ed-9d1b-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"__presetid" : "Heart",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.97
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"__sps" : 							{
								"Heart" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Heart.rnbopat",
									"origin" : "Heart",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"__presetid" : "Heart",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.97
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"__sps" : 										{
											"Heart" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "Heart.rnbopat",
										"filename" : "Heart.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "7de1428641f3c5973c829f191d5ddc74"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Heart.rnbopat @autosave 1 @title Heart @exportname Heart @parameter_mappable 1",
					"varname" : "rnbo~[3]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-43",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 15.0, 136.2236328125, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-42",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 15.0, 112.2236328125, 571.0, 22.0 ],
					"rnboattrcache" : 					{
						"Y" : 						{
							"label" : "Y",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Delta" : 						{
							"label" : "Delta",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"X" : 						{
							"label" : "X",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[2]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[2]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "Lissajous",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "fc5dd163-edee-11ed-9163-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"__presetid" : "Lissajous",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"__sps" : 							{
								"Lissajous" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Lissajous.rnbopat",
									"origin" : "Lissajous",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"__presetid" : "Lissajous",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"__sps" : 										{
											"Lissajous" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "Lissajous.rnbopat",
										"filename" : "Lissajous.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "730a193bd0fdf2a21bfaef9f727be32f"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Lissajous.rnbopat @autosave 1 @title Lissajous @exportname Lissajous @parameter_mappable 1",
					"varname" : "rnbo~[2]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-36",
					"maxclass" : "newobj",
					"numinlets" : 12,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 15.0, 134.5, 22.0 ],
					"text" : "switch 11 0"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-28",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 14.999999761718747, 712.223632216453552, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-27",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 11,
					"outlettype" : [ "", "", "", "", "", "", "", "", "", "", "" ],
					"patching_rect" : [ 927.0, 430.0, 124.0, 22.0 ],
					"text" : "gate 11 0"
				}

			}
, 			{
				"box" : 				{
					"disabled" : [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ],
					"id" : "obj-22",
					"itemtype" : 0,
					"maxclass" : "radiogroup",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 927.0, 115.0, 18.0, 194.0 ],
					"size" : 12,
					"value" : 2
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-109",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "signal" ],
					"patching_rect" : [ 954.0, 91.0, 84.0, 22.0 ],
					"text" : "mc.unpack~ 2"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-107",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "signal" ],
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 9,
							"minor" : 0,
							"revision" : 7,
							"architecture" : "x64",
							"modernui" : 1
						}
,
						"classnamespace" : "box",
						"rect" : [ 311.0, 298.0, 761.0, 603.0 ],
						"gridsize" : [ 15.0, 15.0 ],
						"boxes" : [ 							{
								"box" : 								{
									"fontface" : 0,
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-56",
									"maxclass" : "number~",
									"mode" : 1,
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "float" ],
									"patching_rect" : [ 458.95001220703125, 147.0, 56.0, 22.0 ],
									"sig" : 1.0
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-55",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 774.900000000000091, 162.0, 40.0, 22.0 ],
									"text" : "%~ 1."
								}

							}
, 							{
								"box" : 								{
									"fontface" : 0,
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-54",
									"maxclass" : "number~",
									"mode" : 1,
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "float" ],
									"patching_rect" : [ 468.0, 90.0, 56.0, 22.0 ],
									"sig" : 1.0
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-50",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 799.0, 322.63671875, 29.5, 22.0 ],
									"text" : "%~"
								}

							}
, 							{
								"box" : 								{
									"fontface" : 0,
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-49",
									"maxclass" : "number~",
									"mode" : 2,
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "float" ],
									"patching_rect" : [ 563.0, 399.7236328125, 56.0, 22.0 ],
									"sig" : 0.0
								}

							}
, 							{
								"box" : 								{
									"fontface" : 0,
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-48",
									"maxclass" : "number~",
									"mode" : 2,
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "float" ],
									"patching_rect" : [ 563.0, 371.0, 56.0, 22.0 ],
									"sig" : 0.0
								}

							}
, 							{
								"box" : 								{
									"fontface" : 0,
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-46",
									"maxclass" : "number~",
									"mode" : 2,
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "float" ],
									"patching_rect" : [ 566.0, 337.0, 56.0, 22.0 ],
									"sig" : 0.0
								}

							}
, 							{
								"box" : 								{
									"fontface" : 0,
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-41",
									"maxclass" : "number~",
									"mode" : 2,
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "float" ],
									"patching_rect" : [ 549.0, 300.2236328125, 56.0, 22.0 ],
									"sig" : 0.0
								}

							}
, 							{
								"box" : 								{
									"fontface" : 0,
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-39",
									"maxclass" : "number~",
									"mode" : 2,
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "float" ],
									"patching_rect" : [ 578.0, 241.0, 56.0, 22.0 ],
									"sig" : 0.0
								}

							}
, 							{
								"box" : 								{
									"fontface" : 0,
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-37",
									"maxclass" : "number~",
									"mode" : 2,
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "float" ],
									"patching_rect" : [ 584.0, 204.0, 56.0, 22.0 ],
									"sig" : 0.0
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-31",
									"maxclass" : "number",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 607.0, 287.0, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-29",
									"maxclass" : "number",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 656.0, 133.0, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"format" : 6,
									"id" : "obj-24",
									"maxclass" : "flonum",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 566.0, 133.0, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-19",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 752.899999999999977, 76.0, 70.0, 22.0 ],
									"text" : "loadmess 2"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-8",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 752.899999999999977, 100.0, 29.5, 22.0 ],
									"text" : "pi"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-6",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 752.899999999999977, 124.0, 31.0, 22.0 ],
									"text" : "sig~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-3",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 593.0, 181.0, 62.0, 22.0 ],
									"text" : "phasor~ 0"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 742.399999999999977, 212.0, 29.5, 22.0 ],
									"text" : "/~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-45",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 702.399999999999977, 162.0, 44.0, 22.0 ],
									"text" : "sig~ 1."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-42",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "signal" ],
									"patching_rect" : [ 717.200000000000045, 312.0, 59.0, 22.0 ],
									"text" : "poltocar~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-1",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "signal" ],
									"patching_rect" : [ 702.399999999999977, 262.0, 59.0, 22.0 ],
									"text" : "poltocar~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-38",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 698.0, 362.0, 97.0, 22.0 ],
									"text" : "scale~ 0. 1. 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-2",
									"maxclass" : "newobj",
									"numinlets" : 6,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 658.0, 337.0, 97.0, 22.0 ],
									"text" : "scale~ 0. 1. 0. 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-23",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 757.200000000000045, 287.0, 29.5, 22.0 ],
									"text" : "*~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-18",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 742.399999999999977, 186.0, 29.5, 22.0 ],
									"text" : "!-~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-14",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 658.0, 312.0, 40.0, 22.0 ],
									"text" : "%~ 1."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-12",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 767.700000000000045, 262.0, 41.0, 22.0 ],
									"text" : "sig~ 2"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-7",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 647.0, 228.0, 29.5, 22.0 ],
									"text" : "*~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-4",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 668.5, 186.0, 48.0, 22.0 ],
									"text" : "sig~ 10"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-20",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 742.399999999999977, 237.0, 29.5, 22.0 ],
									"text" : "*~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-71",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "int" ],
									"patching_rect" : [ 472.20001220703125, 293.36328125, 29.5, 22.0 ],
									"text" : "+ 1"
								}

							}
, 							{
								"box" : 								{
									"disabled" : [ 0, 0, 0 ],
									"id" : "obj-70",
									"itemtype" : 0,
									"maxclass" : "radiogroup",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 472.20001220703125, 241.0, 18.0, 50.0 ],
									"size" : 3,
									"value" : 0
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-66",
									"maxclass" : "newobj",
									"numinlets" : 4,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patcher" : 									{
										"fileversion" : 1,
										"appversion" : 										{
											"major" : 9,
											"minor" : 0,
											"revision" : 7,
											"architecture" : "x64",
											"modernui" : 1
										}
,
										"classnamespace" : "box",
										"rect" : [ 646.0, 279.0, 187.0, 369.0 ],
										"gridsize" : [ 15.0, 15.0 ],
										"boxes" : [ 											{
												"box" : 												{
													"id" : "obj-5",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 3,
													"outlettype" : [ "signal", "signal", "signal" ],
													"patching_rect" : [ 14.0, 255.36328125, 59.0, 22.0 ],
													"text" : "gate~ 3 1"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-4",
													"maxclass" : "number",
													"numinlets" : 1,
													"numoutlets" : 2,
													"outlettype" : [ "", "bang" ],
													"parameter_enable" : 0,
													"patching_rect" : [ 44.11309814453125, 178.36328125, 50.0, 22.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-2",
													"index" : 1,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "int" ],
													"patching_rect" : [ 18.0, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-1",
													"maxclass" : "newobj",
													"numinlets" : 4,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 44.11309814453125, 218.0, 78.0, 22.0 ],
													"text" : "selector~ 3 1"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-61",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 50.56842041015625, 117.0, 31.0, 22.0 ],
													"text" : "sig~"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-56",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 103.6815185546875, 178.36328125, 29.5, 22.0 ],
													"text" : "-~"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-55",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 113.61309814453125, 154.36328125, 36.0, 22.0 ],
													"text" : "%~ 1"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-54",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 98.1815185546875, 129.0, 30.0, 22.0 ],
													"text" : "*~ 5"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-51",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 98.1815185546875, 100.0, 60.0, 22.0 ],
													"text" : "cycle~ 10"
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-62",
													"index" : 2,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "" ],
													"patching_rect" : [ 50.56842041015625, 40.0, 30.0, 30.0 ],
													"varname" : "u362001795"
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-63",
													"index" : 3,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "" ],
													"patching_rect" : [ 98.1815185546875, 40.0, 30.0, 30.0 ],
													"varname" : "u886001797"
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-64",
													"index" : 4,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "" ],
													"patching_rect" : [ 137.1815185546875, 40.0, 30.0, 30.0 ],
													"varname" : "u438001799"
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-65",
													"index" : 1,
													"maxclass" : "outlet",
													"numinlets" : 1,
													"numoutlets" : 0,
													"patching_rect" : [ 76.11309814453125, 327.36328125, 30.0, 30.0 ],
													"varname" : "u809001801"
												}

											}
 ],
										"lines" : [ 											{
												"patchline" : 												{
													"destination" : [ "obj-5", 1 ],
													"source" : [ "obj-1", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-4", 0 ],
													"source" : [ "obj-2", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-1", 0 ],
													"order" : 0,
													"source" : [ "obj-4", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-5", 0 ],
													"order" : 1,
													"source" : [ "obj-4", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-65", 0 ],
													"source" : [ "obj-5", 2 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-65", 0 ],
													"source" : [ "obj-5", 1 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-65", 0 ],
													"source" : [ "obj-5", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-54", 0 ],
													"source" : [ "obj-51", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-1", 3 ],
													"order" : 1,
													"source" : [ "obj-54", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-55", 0 ],
													"order" : 0,
													"source" : [ "obj-54", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-56", 0 ],
													"order" : 2,
													"source" : [ "obj-54", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-56", 1 ],
													"source" : [ "obj-55", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-1", 2 ],
													"source" : [ "obj-56", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-1", 1 ],
													"source" : [ "obj-61", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-61", 0 ],
													"source" : [ "obj-62", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-51", 0 ],
													"source" : [ "obj-63", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-54", 1 ],
													"source" : [ "obj-64", 0 ]
												}

											}
 ]
									}
,
									"patching_rect" : [ 486.38153076171875, 322.63671875, 40.0, 22.0 ],
									"text" : "p sel"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-59",
									"maxclass" : "number",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 513.20001220703125, 269.36328125, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"format" : 6,
									"id" : "obj-57",
									"maxclass" : "flonum",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 500.38153076171875, 241.0, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-28",
									"maxclass" : "newobj",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 50.0, 124.0, 71.0, 22.0 ],
									"text" : "r frecuencia"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-22",
									"maxclass" : "newobj",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 145.399993896484375, 131.0, 56.0, 22.0 ],
									"text" : "r tamaño"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-27",
									"maxclass" : "newobj",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 372.79998779296875, 124.0, 31.0, 22.0 ],
									"text" : "r #x"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-32",
									"maxclass" : "newobj",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 301.0, 124.0, 61.0, 22.0 ],
									"text" : "r rotacion"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-36",
									"maxclass" : "newobj",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 88.20001220703125, 100.0, 61.0, 22.0 ],
									"text" : "r #puntos"
								}

							}
, 							{
								"box" : 								{
									"format" : 6,
									"id" : "obj-40",
									"maxclass" : "flonum",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 490.9053955078125, 217.0, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-43",
									"maxclass" : "number",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 409.20001220703125, 217.0, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-44",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 486.38153076171875, 346.63671875, 31.0, 22.0 ],
									"text" : "s #x"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-96",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 409.20001220703125, 241.0, 61.0, 22.0 ],
									"text" : "s #puntos"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-60",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patcher" : 									{
										"fileversion" : 1,
										"appversion" : 										{
											"major" : 9,
											"minor" : 0,
											"revision" : 7,
											"architecture" : "x64",
											"modernui" : 1
										}
,
										"classnamespace" : "box",
										"rect" : [ 219.0, 591.0, 449.0, 347.0 ],
										"gridsize" : [ 15.0, 15.0 ],
										"boxes" : [ 											{
												"box" : 												{
													"id" : "obj-4",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "" ],
													"patching_rect" : [ 279.0, 163.0, 28.0, 22.0 ],
													"text" : "in 2"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-11",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 2.0, 170.0, 30.0, 22.0 ],
													"text" : "-~ 1"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-9",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 2.0, 218.0, 35.0, 22.0 ],
													"text" : "abs~"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-2",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 2.0, 98.0, 40.0, 22.0 ],
													"text" : "%~ 2."
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-1",
													"index" : 2,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "" ],
													"patching_rect" : [ 34.0, 18.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-161",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 2.0, 194.0, 32.0, 22.0 ],
													"text" : "/~ 2."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-155",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 2.0, 146.0, 40.0, 22.0 ],
													"text" : "cosx~"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-154",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 55.0, 98.0, 34.0, 22.0 ],
													"text" : "*~ 2."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-153",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 2.0, 122.0, 34.0, 22.0 ],
													"text" : "*~ 1."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-147",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 55.0, 74.0, 38.0, 22.0 ],
													"text" : "asin~"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-146",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 55.0, 50.0, 41.0, 22.0 ],
													"text" : "sig~ 1"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-145",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 2.0, 74.0, 51.0, 22.0 ],
													"text" : "*~ 2."
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-162",
													"index" : 1,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 2.0, 18.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-163",
													"index" : 1,
													"maxclass" : "outlet",
													"numinlets" : 1,
													"numoutlets" : 0,
													"patching_rect" : [ 2.0, 242.0, 30.0, 30.0 ]
												}

											}
 ],
										"lines" : [ 											{
												"patchline" : 												{
													"destination" : [ "obj-145", 1 ],
													"source" : [ "obj-1", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-161", 0 ],
													"source" : [ "obj-11", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-2", 0 ],
													"source" : [ "obj-145", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-147", 0 ],
													"source" : [ "obj-146", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-154", 0 ],
													"source" : [ "obj-147", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-155", 0 ],
													"source" : [ "obj-153", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-153", 1 ],
													"source" : [ "obj-154", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-11", 0 ],
													"source" : [ "obj-155", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-9", 0 ],
													"source" : [ "obj-161", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-145", 0 ],
													"source" : [ "obj-162", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-153", 0 ],
													"source" : [ "obj-2", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-163", 0 ],
													"source" : [ "obj-9", 0 ]
												}

											}
 ]
									}
,
									"patching_rect" : [ 99.0, 459.2236328125, 108.0, 22.0 ],
									"text" : "p phasor2coscycle"
								}

							}
, 							{
								"box" : 								{
									"format" : 6,
									"id" : "obj-185",
									"maxclass" : "flonum",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 178.0, 237.2236328125, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-139",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 308.0, 531.2236328125, 29.5, 22.0 ],
									"text" : "-~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-138",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 228.0, 531.2236328125, 29.5, 22.0 ],
									"text" : "-~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-61",
									"maxclass" : "button",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 65.0, 196.2236328125, 24.0, 24.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-98",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 138.0, 556.2236328125, 29.5, 22.0 ],
									"text" : "+~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-89",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 99.0, 556.2236328125, 29.5, 22.0 ],
									"text" : "+~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-78",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 138.0, 506.2236328125, 29.5, 22.0 ],
									"text" : "*~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-77",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 99.0, 506.2236328125, 29.5, 22.0 ],
									"text" : "*~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-72",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 337.5, 172.2236328125, 33.0, 22.0 ],
									"text" : "* 0.2"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-68",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "bang", "float" ],
									"patching_rect" : [ 178.0, 268.2236328125, 29.5, 22.0 ],
									"text" : "t b f"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-67",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 170.75, 300.2236328125, 50.0, 22.0 ],
									"text" : "100."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-64",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "float" ],
									"patching_rect" : [ 178.0, 172.2236328125, 37.0, 22.0 ],
									"text" : "* -10."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-63",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 327.0, 405.2236328125, 29.5, 22.0 ],
									"text" : "*~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-69",
									"maxclass" : "newobj",
									"numinlets" : 4,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "signal" ],
									"patcher" : 									{
										"fileversion" : 1,
										"appversion" : 										{
											"major" : 9,
											"minor" : 0,
											"revision" : 7,
											"architecture" : "x64",
											"modernui" : 1
										}
,
										"classnamespace" : "box",
										"rect" : [ 109.0, 266.0, 640.0, 480.0 ],
										"gridsize" : [ 15.0, 15.0 ],
										"boxes" : [ 											{
												"box" : 												{
													"id" : "obj-13",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 99.5, 101.0, 31.0, 22.0 ],
													"text" : "sig~"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-6",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 156.0, 29.5, 22.0 ],
													"text" : "*~"
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-4",
													"index" : 3,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "float" ],
													"patching_rect" : [ 129.5, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-2",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 99.5, 125.0, 46.0, 22.0 ],
													"text" : "!/~ 360"
												}

											}
, 											{
												"box" : 												{
													"fontname" : "Arial",
													"fontsize" : 13.0,
													"id" : "obj-46",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 242.0, 36.0, 23.0 ],
													"text" : "*~ 1."
												}

											}
, 											{
												"box" : 												{
													"fontname" : "Arial",
													"fontsize" : 13.0,
													"id" : "obj-45",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 208.0, 49.0, 23.0 ],
													"text" : "/~ 180."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-44",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 2,
													"outlettype" : [ "float", "bang" ],
													"patching_rect" : [ 129.5, 72.0, 29.5, 22.0 ],
													"text" : "t f b"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-42",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 184.0, 49.0, 22.0 ],
													"text" : "+~ 180."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-39",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "float" ],
													"patching_rect" : [ 140.0, 208.0, 29.5, 22.0 ],
													"text" : "* 2."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-34",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "float" ],
													"patching_rect" : [ 140.0, 184.0, 41.0, 22.0 ],
													"text" : "asin 1"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-1",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 2,
													"outlettype" : [ "signal", "signal" ],
													"patching_rect" : [ 50.0, 271.0, 58.0, 22.0 ],
													"text" : "poltocar~"
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-3",
													"index" : 1,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 50.0, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-5",
													"index" : 2,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-8",
													"index" : 4,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "" ],
													"patching_rect" : [ 161.5, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-9",
													"index" : 1,
													"maxclass" : "outlet",
													"numinlets" : 1,
													"numoutlets" : 0,
													"patching_rect" : [ 50.0, 353.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-10",
													"index" : 2,
													"maxclass" : "outlet",
													"numinlets" : 1,
													"numoutlets" : 0,
													"patching_rect" : [ 89.0, 353.0, 30.0, 30.0 ]
												}

											}
 ],
										"lines" : [ 											{
												"patchline" : 												{
													"destination" : [ "obj-10", 0 ],
													"source" : [ "obj-1", 1 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-9", 0 ],
													"source" : [ "obj-1", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-2", 0 ],
													"source" : [ "obj-13", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-6", 1 ],
													"source" : [ "obj-2", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-1", 0 ],
													"source" : [ "obj-3", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-39", 0 ],
													"source" : [ "obj-34", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-46", 1 ],
													"source" : [ "obj-39", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-44", 0 ],
													"source" : [ "obj-4", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-45", 0 ],
													"source" : [ "obj-42", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-13", 0 ],
													"source" : [ "obj-44", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-34", 0 ],
													"source" : [ "obj-44", 1 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-46", 0 ],
													"source" : [ "obj-45", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-1", 1 ],
													"source" : [ "obj-46", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-6", 0 ],
													"source" : [ "obj-5", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-42", 0 ],
													"source" : [ "obj-6", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-42", 1 ],
													"source" : [ "obj-8", 0 ]
												}

											}
 ]
									}
,
									"patching_rect" : [ 308.0, 459.2236328125, 76.0, 22.0 ],
									"text" : "p Pol2Card~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-73",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 3,
									"outlettype" : [ "float", "float", "int" ],
									"patching_rect" : [ 171.0, 327.2236328125, 40.0, 22.0 ],
									"text" : "t f f i"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-74",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "float", "bang" ],
									"patching_rect" : [ 105.0, 268.2236328125, 29.5, 22.0 ],
									"text" : "t f b"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-75",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 53.5, 157.2236328125, 81.0, 22.0 ],
									"text" : "loadmess -10"
								}

							}
, 							{
								"box" : 								{
									"format" : 6,
									"id" : "obj-76",
									"maxclass" : "flonum",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "bang" ],
									"parameter_enable" : 0,
									"patching_rect" : [ 105.0, 237.2236328125, 50.0, 22.0 ]
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-79",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 105.0, 381.2236328125, 29.5, 22.0 ],
									"text" : "-~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-80",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 115.5, 357.2236328125, 36.0, 22.0 ],
									"text" : "%~ 1"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-81",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 105.0, 327.2236328125, 44.0, 22.0 ],
									"text" : "*~ 100"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-82",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 105.0, 300.2236328125, 69.0, 22.0 ],
									"text" : "phasor~ 10"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-85",
									"maxclass" : "newobj",
									"numinlets" : 4,
									"numoutlets" : 2,
									"outlettype" : [ "signal", "signal" ],
									"patcher" : 									{
										"fileversion" : 1,
										"appversion" : 										{
											"major" : 9,
											"minor" : 0,
											"revision" : 7,
											"architecture" : "x64",
											"modernui" : 1
										}
,
										"classnamespace" : "box",
										"rect" : [ 684.0, 167.0, 640.0, 480.0 ],
										"gridsize" : [ 15.0, 15.0 ],
										"boxes" : [ 											{
												"box" : 												{
													"id" : "obj-13",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 99.5, 101.0, 31.0, 22.0 ],
													"text" : "sig~"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-6",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 156.0, 29.5, 22.0 ],
													"text" : "*~"
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-4",
													"index" : 3,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "float" ],
													"patching_rect" : [ 129.5, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-2",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 99.5, 125.0, 46.0, 22.0 ],
													"text" : "!/~ 360"
												}

											}
, 											{
												"box" : 												{
													"fontname" : "Arial",
													"fontsize" : 13.0,
													"id" : "obj-46",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 242.0, 36.0, 23.0 ],
													"text" : "*~ 1."
												}

											}
, 											{
												"box" : 												{
													"fontname" : "Arial",
													"fontsize" : 13.0,
													"id" : "obj-45",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 208.0, 49.0, 23.0 ],
													"text" : "/~ 180."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-44",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 2,
													"outlettype" : [ "float", "bang" ],
													"patching_rect" : [ 129.5, 72.0, 29.5, 22.0 ],
													"text" : "t f b"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-42",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 184.0, 49.0, 22.0 ],
													"text" : "+~ 180."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-39",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 1,
													"outlettype" : [ "float" ],
													"patching_rect" : [ 140.0, 208.0, 29.5, 22.0 ],
													"text" : "* 2."
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-34",
													"maxclass" : "newobj",
													"numinlets" : 1,
													"numoutlets" : 1,
													"outlettype" : [ "float" ],
													"patching_rect" : [ 140.0, 184.0, 41.0, 22.0 ],
													"text" : "asin 1"
												}

											}
, 											{
												"box" : 												{
													"id" : "obj-1",
													"maxclass" : "newobj",
													"numinlets" : 2,
													"numoutlets" : 2,
													"outlettype" : [ "signal", "signal" ],
													"patching_rect" : [ 50.0, 271.0, 58.0, 22.0 ],
													"text" : "poltocar~"
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-3",
													"index" : 1,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 50.0, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-5",
													"index" : 2,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "signal" ],
													"patching_rect" : [ 89.0, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-8",
													"index" : 4,
													"maxclass" : "inlet",
													"numinlets" : 0,
													"numoutlets" : 1,
													"outlettype" : [ "" ],
													"patching_rect" : [ 161.5, 40.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-9",
													"index" : 1,
													"maxclass" : "outlet",
													"numinlets" : 1,
													"numoutlets" : 0,
													"patching_rect" : [ 50.0, 353.0, 30.0, 30.0 ]
												}

											}
, 											{
												"box" : 												{
													"comment" : "",
													"id" : "obj-10",
													"index" : 2,
													"maxclass" : "outlet",
													"numinlets" : 1,
													"numoutlets" : 0,
													"patching_rect" : [ 89.0, 353.0, 30.0, 30.0 ]
												}

											}
 ],
										"lines" : [ 											{
												"patchline" : 												{
													"destination" : [ "obj-10", 0 ],
													"source" : [ "obj-1", 1 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-9", 0 ],
													"source" : [ "obj-1", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-2", 0 ],
													"source" : [ "obj-13", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-6", 1 ],
													"source" : [ "obj-2", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-1", 0 ],
													"source" : [ "obj-3", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-39", 0 ],
													"source" : [ "obj-34", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-46", 1 ],
													"source" : [ "obj-39", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-44", 0 ],
													"source" : [ "obj-4", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-45", 0 ],
													"source" : [ "obj-42", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-13", 0 ],
													"source" : [ "obj-44", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-34", 0 ],
													"source" : [ "obj-44", 1 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-46", 0 ],
													"source" : [ "obj-45", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-1", 1 ],
													"source" : [ "obj-46", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-6", 0 ],
													"source" : [ "obj-5", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-42", 0 ],
													"source" : [ "obj-6", 0 ]
												}

											}
, 											{
												"patchline" : 												{
													"destination" : [ "obj-42", 1 ],
													"source" : [ "obj-8", 0 ]
												}

											}
 ]
									}
,
									"patching_rect" : [ 228.0, 455.2236328125, 76.0, 22.0 ],
									"text" : "p Pol2Card~"
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-86",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 264.0, 300.2236328125, 36.0, 22.0 ],
									"text" : "+~ 0."
								}

							}
, 							{
								"box" : 								{
									"id" : "obj-92",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "signal" ],
									"patching_rect" : [ 236.0, 268.2236328125, 41.0, 22.0 ],
									"text" : "sig~ 1"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-105",
									"index" : 1,
									"maxclass" : "outlet",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 99.000000238281245, 638.22363299999995, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-106",
									"index" : 2,
									"maxclass" : "outlet",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 138.000000238281245, 638.22363299999995, 30.0, 30.0 ]
								}

							}
, 							{
								"box" : 								{
									"bufsize" : 256,
									"calccount" : 2,
									"drawstyle" : 1,
									"id" : "obj-5",
									"maxclass" : "scope~",
									"numinlets" : 2,
									"numoutlets" : 0,
									"patching_rect" : [ 563.0, 440.0, 255.0, 255.0 ],
									"range" : [ -2.0, 2.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 3 ],
									"source" : [ "obj-1", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-38", 3 ],
									"source" : [ "obj-1", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-23", 1 ],
									"source" : [ "obj-12", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-77", 1 ],
									"source" : [ "obj-138", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-78", 1 ],
									"source" : [ "obj-139", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 0 ],
									"order" : 1,
									"source" : [ "obj-14", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-38", 0 ],
									"order" : 0,
									"source" : [ "obj-14", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-41", 0 ],
									"order" : 2,
									"source" : [ "obj-14", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"order" : 1,
									"source" : [ "obj-18", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"order" : 0,
									"source" : [ "obj-18", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-68", 0 ],
									"source" : [ "obj-185", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-8", 0 ],
									"source" : [ "obj-19", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-5", 0 ],
									"source" : [ "obj-2", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-1", 1 ],
									"order" : 1,
									"source" : [ "obj-20", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-23", 0 ],
									"order" : 0,
									"source" : [ "obj-20", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-48", 0 ],
									"order" : 2,
									"source" : [ "obj-20", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-92", 0 ],
									"source" : [ "obj-22", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-42", 1 ],
									"source" : [ "obj-23", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-3", 0 ],
									"source" : [ "obj-24", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 1 ],
									"source" : [ "obj-27", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-76", 0 ],
									"source" : [ "obj-28", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-4", 0 ],
									"source" : [ "obj-29", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-37", 0 ],
									"order" : 1,
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-7", 0 ],
									"order" : 0,
									"source" : [ "obj-3", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-12", 0 ],
									"source" : [ "obj-31", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-69", 3 ],
									"order" : 0,
									"source" : [ "obj-32", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-85", 3 ],
									"order" : 1,
									"source" : [ "obj-32", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-185", 0 ],
									"source" : [ "obj-36", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-5", 1 ],
									"source" : [ "obj-38", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 1 ],
									"order" : 0,
									"source" : [ "obj-4", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-7", 1 ],
									"order" : 1,
									"source" : [ "obj-4", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-66", 1 ],
									"source" : [ "obj-40", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-2", 4 ],
									"source" : [ "obj-42", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-50", 0 ],
									"source" : [ "obj-42", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-96", 0 ],
									"source" : [ "obj-43", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-1", 0 ],
									"order" : 1,
									"source" : [ "obj-45", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-42", 0 ],
									"order" : 0,
									"source" : [ "obj-45", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-20", 0 ],
									"source" : [ "obj-47", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-38", 4 ],
									"source" : [ "obj-50", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-55", 1 ],
									"source" : [ "obj-54", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-18", 0 ],
									"source" : [ "obj-55", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-14", 1 ],
									"source" : [ "obj-56", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-66", 2 ],
									"source" : [ "obj-57", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-66", 3 ],
									"source" : [ "obj-59", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-20", 1 ],
									"order" : 1,
									"source" : [ "obj-6", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-49", 0 ],
									"order" : 2,
									"source" : [ "obj-6", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-50", 1 ],
									"order" : 0,
									"source" : [ "obj-6", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-77", 0 ],
									"order" : 1,
									"source" : [ "obj-60", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-78", 0 ],
									"order" : 0,
									"source" : [ "obj-60", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-75", 0 ],
									"source" : [ "obj-61", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-69", 1 ],
									"source" : [ "obj-63", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-185", 0 ],
									"source" : [ "obj-64", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-44", 0 ],
									"source" : [ "obj-66", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-73", 0 ],
									"source" : [ "obj-67", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-67", 1 ],
									"source" : [ "obj-68", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-67", 0 ],
									"source" : [ "obj-68", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-138", 0 ],
									"source" : [ "obj-69", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-139", 0 ],
									"source" : [ "obj-69", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-14", 0 ],
									"order" : 2,
									"source" : [ "obj-7", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-18", 1 ],
									"order" : 1,
									"source" : [ "obj-7", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-39", 0 ],
									"order" : 3,
									"source" : [ "obj-7", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-55", 0 ],
									"order" : 0,
									"source" : [ "obj-7", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-71", 0 ],
									"source" : [ "obj-70", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-66", 0 ],
									"source" : [ "obj-71", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 1 ],
									"source" : [ "obj-72", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-69", 2 ],
									"source" : [ "obj-73", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-81", 1 ],
									"source" : [ "obj-73", 2 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-85", 2 ],
									"source" : [ "obj-73", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-67", 0 ],
									"source" : [ "obj-74", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-82", 0 ],
									"source" : [ "obj-74", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-64", 0 ],
									"order" : 1,
									"source" : [ "obj-75", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-72", 0 ],
									"order" : 0,
									"source" : [ "obj-75", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-76", 0 ],
									"order" : 2,
									"source" : [ "obj-75", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-74", 0 ],
									"source" : [ "obj-76", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-89", 0 ],
									"source" : [ "obj-77", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-98", 0 ],
									"source" : [ "obj-78", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"order" : 0,
									"source" : [ "obj-79", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-85", 1 ],
									"order" : 1,
									"source" : [ "obj-79", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-6", 0 ],
									"source" : [ "obj-8", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-60", 0 ],
									"order" : 1,
									"source" : [ "obj-80", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-79", 1 ],
									"order" : 0,
									"source" : [ "obj-80", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-79", 0 ],
									"order" : 1,
									"source" : [ "obj-81", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-80", 0 ],
									"order" : 0,
									"source" : [ "obj-81", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-81", 0 ],
									"source" : [ "obj-82", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-138", 1 ],
									"order" : 0,
									"source" : [ "obj-85", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-139", 1 ],
									"order" : 0,
									"source" : [ "obj-85", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-89", 1 ],
									"order" : 1,
									"source" : [ "obj-85", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-98", 1 ],
									"order" : 1,
									"source" : [ "obj-85", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-69", 0 ],
									"order" : 0,
									"source" : [ "obj-86", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-85", 0 ],
									"order" : 1,
									"source" : [ "obj-86", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-105", 0 ],
									"source" : [ "obj-89", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-86", 0 ],
									"source" : [ "obj-92", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-106", 0 ],
									"source" : [ "obj-98", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 86.999999761718755, 712.223632216453552, 110.0, 22.0 ],
					"text" : "p TimesTableCircle"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-100",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 15.0, 64.2236328125, 70.0, 22.0 ],
					"text" : "mc.pack~ 2"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-93",
					"maxclass" : "newobj",
					"numinlets" : 12,
					"numoutlets" : 1,
					"outlettype" : [ "multichannelsignal" ],
					"patching_rect" : [ 927.0, 379.0, 160.0, 22.0 ],
					"text" : "mc.selector~ 11 0 @chans 2"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-65",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1021.5, 403.0, 22.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-56",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 14.999999761718747, 688.223632216453552, 558.0, 22.0 ],
					"rnboattrcache" : 					{
						"Sustract" : 						{
							"label" : "Sustract",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"CurvatureMag" : 						{
							"label" : "CurvatureMag",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Straight" : 						{
							"label" : "Straight",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Points" : 						{
							"label" : "Points",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Multiplier" : 						{
							"label" : "Multiplier",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"CurvatureAngle" : 						{
							"label" : "CurvatureAngle",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PointsType" : 						{
							"label" : "PointsType",
							"isEnum" : 1,
							"parsestring" : "\"Float\" \"Int\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~[1]",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~[1]",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "TTable",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "1681ce6f-ead3-11ed-8e6f-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"__presetid" : "MMCircle",
							"PitchBendRange" : 							{
								"value" : 2.0
							}
,
							"PitchBend" : 							{
								"value" : 0.0
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"PointsType" : 							{
								"value" : 1.0
							}
,
							"__sps" : 							{
								"MMCircle" : [ 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
, 									{
										"__sps" : 										{
											"Bezier" : 											{

											}

										}

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "TTable.rnbopat",
									"origin" : "MMCircle",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"__presetid" : "MMCircle",
										"PitchBendRange" : 										{
											"value" : 2.0
										}
,
										"PitchBend" : 										{
											"value" : 0.0
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"PointsType" : 										{
											"value" : 1.0
										}
,
										"__sps" : 										{
											"MMCircle" : [ 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
, 												{
													"__sps" : 													{
														"Bezier" : 														{

														}

													}

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "TTable.rnbopat",
										"filename" : "TTable.rnbopat_20230822.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "8a6f86b1707bd7fd91cfe3d532d05a0e"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ MMCircle.rnbopat @autosave 1 @title MMCircle @exportname TTable @parameter_mappable 1",
					"varname" : "rnbo~[1]"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-117",
					"maxclass" : "mc.ezdac~",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 1079.38153076171875, 644.0, 45.0, 45.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-116",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1208.0, 442.0, 97.0, 22.0 ],
					"text" : "0.5"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-112",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 1015.88153076171875, 519.0, 150.0, 34.0 ],
					"text" : "_____________________\n"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-108",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1048.88153076171875, 469.0, 173.0, 22.0 ],
					"text" : "prepend _parameter_exponent"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-104",
					"lastchannelcount" : 2,
					"livemode" : 1,
					"maxclass" : "mc.live.gain~",
					"mode" : 1,
					"numinlets" : 1,
					"numoutlets" : 4,
					"outlettype" : [ "multichannelsignal", "", "float", "list" ],
					"parameter_enable" : 1,
					"patching_rect" : [ 1078.88153076171875, 504.0, 48.0, 136.0 ],
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_longname" : "live.gain~",
							"parameter_mmax" : 6.0,
							"parameter_mmin" : -70.0,
							"parameter_modmode" : 0,
							"parameter_shortname" : "mc.live.gain~",
							"parameter_type" : 0,
							"parameter_unitstyle" : 4
						}

					}
,
					"varname" : "live.gain~"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-102",
					"maxclass" : "live.slider",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "float" ],
					"parameter_enable" : 1,
					"patching_rect" : [ 1032.881530999999995, 500.5, 41.0, 142.0 ],
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_exponent" : 0.5,
							"parameter_longname" : "live.slider",
							"parameter_mmax" : 6.0,
							"parameter_mmin" : -70.0,
							"parameter_modmode" : 0,
							"parameter_shortname" : "live.slider",
							"parameter_type" : 0,
							"parameter_unitstyle" : 0
						}

					}
,
					"varname" : "live.slider"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-94",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1123.38153076171875, 382.0, 110.0, 22.0 ],
					"text" : "expr log($f1)/log(2)"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-84",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "bang", "float" ],
					"patching_rect" : [ 1152.88153076171875, 430.0, 29.5, 22.0 ],
					"text" : "t b f"
				}

			}
, 			{
				"box" : 				{
					"format" : 6,
					"id" : "obj-83",
					"maxclass" : "flonum",
					"numdecimalplaces" : 15,
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 1123.38153076171875, 406.0, 125.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-58",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 660.0, 39.0, 67.0, 22.0 ],
					"text" : "route voice"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-53",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 139.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-54",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 91.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-55",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 115.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-49",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 211.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-50",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 235.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-51",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 163.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-52",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 187.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-47",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 307.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-48",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 331.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-46",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 259.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-45",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 283.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-34",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 91.0, 220.0, 22.0 ],
					"text" : "32. 0. 0. 1. 0."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-31",
					"maxclass" : "button",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "bang" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 633.0, 63.0, 24.0, 24.0 ]
				}

			}
, 			{
				"box" : 				{
					"attr" : "Vertices",
					"id" : "obj-26",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999761718769, 15.0, 202.0, 22.0 ],
					"varname" : "attrui"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-20",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 331.0, 220.0, 22.0 ],
					"text" : "10. 0. 0. 1. 2."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-21",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 307.0, 220.0, 22.0 ],
					"text" : "9. 0. 0. 1. 2."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-15",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 283.0, 220.0, 22.0 ],
					"text" : "8. 0. 0. 1. 2."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-16",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 259.0, 220.0, 22.0 ],
					"text" : "7. 0. 0. 1. 2."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-17",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 235.0, 220.0, 22.0 ],
					"text" : "6. 0. 0. 1. 2."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-18",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 211.0, 220.0, 22.0 ],
					"text" : "5. 0. 0. 1. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-13",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 187.0, 220.0, 22.0 ],
					"text" : "4. 0. 0. 1. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-14",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 163.0, 220.0, 22.0 ],
					"text" : "3. 0. 0. 1. 0."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-9",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 139.0, 220.0, 22.0 ],
					"text" : "2. 0. 0. 1. 1."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-8",
					"maxclass" : "newobj",
					"numinlets" : 33,
					"numoutlets" : 33,
					"outlettype" : [ "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" ],
					"patching_rect" : [ 660.0, 63.0, 534.0, 22.0 ],
					"text" : "routepass 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32"
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-7",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 660.0, 115.0, 220.0, 22.0 ],
					"text" : "1. 0. 0. 1. 0."
				}

			}
, 			{
				"box" : 				{
					"id" : "obj-29",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "int" ],
					"patching_rect" : [ 979.5, 403.0, 40.0, 22.0 ],
					"text" : "midiin"
				}

			}
, 			{
				"box" : 				{
					"bufsize" : 256,
					"calccount" : 4,
					"id" : "obj-23",
					"maxclass" : "scope~",
					"numinlets" : 2,
					"numoutlets" : 0,
					"patching_rect" : [ 954.0, 115.0, 240.0, 240.0 ],
					"range" : [ -2.0, 2.0 ]
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-30",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 927.0, 811.0, 248.0, 22.0 ],
					"text" : "jstrigger (a[0].replace('patchers'\\,'export/gen'))"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-19",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 927.0, 835.0, 128.0, 22.0 ],
					"text" : "prepend exportfolder"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-12",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 927.0, 763.0, 87.0, 22.0 ],
					"text" : "loadmess path"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-11",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 927.0, 787.0, 67.0, 22.0 ],
					"save" : [ "#N", "thispatcher", ";", "#Q", "end", ";" ],
					"text" : "thispatcher"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-10",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 1177.0, 739.0, 68.0, 22.0 ],
					"text" : "exportcode"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-6",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "signal" ],
					"patching_rect" : [ 1177.0, 835.0, 523.0, 22.0 ],
					"saved_object_attributes" : 					{
						"exportfolder" : "C:/Users/JxM92/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/export/gen/",
						"exportname" : "ButterflyCurve"
					}
,
					"text" : "gen~ @gen ButterflyCurve @exportname ButterflyCurve @title \"Butterfly Curve\" @autoexport 1"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-5",
					"maxclass" : "newobj",
					"numinlets" : 4,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "signal" ],
					"patching_rect" : [ 1177.0, 763.0, 346.0, 22.0 ],
					"saved_object_attributes" : 					{
						"exportfolder" : "C:/Users/JxM92/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/export/gen/",
						"exportname" : "Star"
					}
,
					"text" : "gen~ @gen Star @exportname Star @title Star @autoexport 1"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-3",
					"maxclass" : "newobj",
					"numinlets" : 4,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "signal" ],
					"patching_rect" : [ 1177.0, 811.0, 500.0, 22.0 ],
					"saved_object_attributes" : 					{
						"exportfolder" : "C:/Users/JxM92/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/export/gen/",
						"exportname" : "Hypotrochoid"
					}
,
					"text" : "gen~ @gen Hypotrochoid @exportname Hypotrochoid @title Hypotrochoid @autoexport 1"
				}

			}
, 			{
				"box" : 				{
					"hidden" : 1,
					"id" : "obj-2",
					"maxclass" : "newobj",
					"numinlets" : 7,
					"numoutlets" : 2,
					"outlettype" : [ "signal", "signal" ],
					"patching_rect" : [ 1177.0, 787.0, 534.0, 22.0 ],
					"saved_object_attributes" : 					{
						"exportfolder" : "C:/Users/JxM92/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/export/gen/",
						"exportname" : "LissajousCurve"
					}
,
					"text" : "gen~ @gen LissajousCurve @exportname LissajousCurve @title \"Lissajous Curve\" @autoexport 1"
				}

			}
, 			{
				"box" : 				{
					"autosave" : 1,
					"id" : "obj-1",
					"inletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 4,
					"outletInfo" : 					{
						"IOInfo" : [ 							{
								"type" : "signal",
								"index" : 1,
								"tag" : "out1",
								"comment" : ""
							}
, 							{
								"type" : "signal",
								"index" : 2,
								"tag" : "out2",
								"comment" : ""
							}
, 							{
								"type" : "midi",
								"index" : -1,
								"tag" : "",
								"comment" : ""
							}
 ]
					}
,
					"outlettype" : [ "signal", "signal", "int", "list" ],
					"patching_rect" : [ 15.0, 40.2236328125, 585.0, 22.0 ],
					"rnboattrcache" : 					{
						"Rigidity" : 						{
							"label" : "Rigidity",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBendRange" : 						{
							"label" : "PitchBendRange",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Rotation" : 						{
							"label" : "Rotation",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleMin" : 						{
							"label" : "DutyCycleMin",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Release" : 						{
							"label" : "Release",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"PitchBend" : 						{
							"label" : "PitchBend",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sharpness" : 						{
							"label" : "Sharpness",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Decay" : 						{
							"label" : "Decay",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleMax" : 						{
							"label" : "DutyCycleMax",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Output" : 						{
							"label" : "Output",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Sustain" : 						{
							"label" : "Sustain",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Vertices" : 						{
							"label" : "Vertices",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Cycles" : 						{
							"label" : "Cycles",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"DutyCycleOffset" : 						{
							"label" : "DutyCycleOffset",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"Attack" : 						{
							"label" : "Attack",
							"isEnum" : 0,
							"parsestring" : ""
						}
,
						"VerticesType" : 						{
							"label" : "VerticesType",
							"isEnum" : 1,
							"parsestring" : "\"Float\" \"Steps\""
						}

					}
,
					"rnboversion" : "1.3.4",
					"saved_attribute_attributes" : 					{
						"valueof" : 						{
							"parameter_invisible" : 1,
							"parameter_longname" : "rnbo~",
							"parameter_modmode" : 0,
							"parameter_shortname" : "rnbo~",
							"parameter_type" : 3
						}

					}
,
					"saved_object_attributes" : 					{
						"exportname" : "XY-Star",
						"optimization" : "O1",
						"parameter_enable" : 1,
						"uuid" : "62a861b9-e2ef-11ed-a1b9-ec2e98d415ce"
					}
,
					"snapshot" : 					{
						"filetype" : "C74Snapshot",
						"version" : 2,
						"minorversion" : 0,
						"name" : "snapshotlist",
						"origin" : "rnbo~",
						"type" : "list",
						"subtype" : "Undefined",
						"embed" : 1,
						"snapshot" : 						{
							"DutyCycleMin" : 							{
								"value" : 0.0
							}
,
							"__presetid" : "Star",
							"PitchBendRange" : 							{
								"value" : 36.0
							}
,
							"DutyCycleMax" : 							{
								"value" : 100.0
							}
,
							"PitchBend" : 							{
								"value" : 0.56
							}
,
							"Output" : 							{
								"value" : 0.0
							}
,
							"VerticesType" : 							{
								"value" : 1.0
							}
,
							"__sps" : 							{
								"Star" : [ 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
, 									{

									}
 ]
							}

						}
,
						"snapshotlist" : 						{
							"current_snapshot" : 0,
							"entries" : [ 								{
									"filetype" : "C74Snapshot",
									"version" : 2,
									"minorversion" : 0,
									"name" : "Star.rnbopat",
									"origin" : "Star",
									"type" : "rnbo",
									"subtype" : "",
									"embed" : 1,
									"snapshot" : 									{
										"DutyCycleMin" : 										{
											"value" : 0.0
										}
,
										"__presetid" : "Star",
										"PitchBendRange" : 										{
											"value" : 36.0
										}
,
										"DutyCycleMax" : 										{
											"value" : 100.0
										}
,
										"PitchBend" : 										{
											"value" : 0.56
										}
,
										"Output" : 										{
											"value" : 0.0
										}
,
										"VerticesType" : 										{
											"value" : 1.0
										}
,
										"__sps" : 										{
											"Star" : [ 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
, 												{

												}
 ]
										}

									}
,
									"fileref" : 									{
										"name" : "Star.rnbopat",
										"filename" : "Star.rnbopat.maxsnap",
										"filepath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
										"filepos" : -1,
										"snapshotfileid" : "d310927ccd252482970115b01f076a92"
									}

								}
 ]
						}

					}
,
					"text" : "rnbo~ Star.rnbopat @autosave 1 @title Star @exportname XY-Star @polyphony 0 @parameter_mappable 1",
					"varname" : "rnbo~"
				}

			}
, 			{
				"box" : 				{
					"attr" : "Multiplier",
					"id" : "obj-40",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999523437523, 664.223632216453552, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"attr" : "Y",
					"id" : "obj-57",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999761718769, 88.2236328125, 202.0, 22.0 ]
				}

			}
, 			{
				"box" : 				{
					"attr" : "Yp4",
					"id" : "obj-64",
					"maxclass" : "attrui",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"parameter_enable" : 0,
					"patching_rect" : [ 60.999999761718769, 160.2236328125, 202.0, 22.0 ]
				}

			}
 ],
		"lines" : [ 			{
				"patchline" : 				{
					"destination" : [ "obj-100", 1 ],
					"source" : [ "obj-1", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-100", 0 ],
					"source" : [ "obj-1", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 1 ],
					"source" : [ "obj-1", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-2", 0 ],
					"order" : 2,
					"source" : [ "obj-10", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-3", 0 ],
					"order" : 1,
					"source" : [ "obj-10", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-5", 0 ],
					"order" : 3,
					"source" : [ "obj-10", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-6", 0 ],
					"order" : 0,
					"source" : [ "obj-10", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 1 ],
					"source" : [ "obj-100", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-102", 0 ],
					"source" : [ "obj-104", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-117", 0 ],
					"source" : [ "obj-104", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-191", 1 ],
					"source" : [ "obj-104", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-102", 0 ],
					"source" : [ "obj-108", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-23", 1 ],
					"source" : [ "obj-109", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-23", 0 ],
					"source" : [ "obj-109", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-30", 0 ],
					"source" : [ "obj-11", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-194", 0 ],
					"source" : [ "obj-114", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-11", 0 ],
					"source" : [ "obj-12", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 6 ],
					"source" : [ "obj-137", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-77", 1 ],
					"source" : [ "obj-137", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-77", 0 ],
					"source" : [ "obj-137", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-138", 0 ],
					"source" : [ "obj-139", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 7 ],
					"source" : [ "obj-140", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-142", 0 ],
					"source" : [ "obj-141", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-140", 1 ],
					"source" : [ "obj-142", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-140", 0 ],
					"source" : [ "obj-142", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 7 ],
					"source" : [ "obj-142", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-27", 1 ],
					"source" : [ "obj-143", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-143", 0 ],
					"source" : [ "obj-144", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-153", 0 ],
					"order" : 1,
					"source" : [ "obj-145", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-154", 0 ],
					"order" : 0,
					"source" : [ "obj-145", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-75", 0 ],
					"source" : [ "obj-146", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-156", 0 ],
					"source" : [ "obj-147", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-190", 1 ],
					"source" : [ "obj-147", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-145", 0 ],
					"source" : [ "obj-148", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 0 ],
					"source" : [ "obj-149", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-151", 0 ],
					"source" : [ "obj-150", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-144", 1 ],
					"source" : [ "obj-151", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-144", 0 ],
					"source" : [ "obj-153", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-155", 0 ],
					"order" : 1,
					"source" : [ "obj-154", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-169", 1 ],
					"order" : 0,
					"source" : [ "obj-154", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-157", 0 ],
					"source" : [ "obj-155", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-75", 0 ],
					"source" : [ "obj-156", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-143", 5 ],
					"source" : [ "obj-157", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-60", 0 ],
					"source" : [ "obj-158", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-42", 0 ],
					"source" : [ "obj-159", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-56", 0 ],
					"source" : [ "obj-160", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-1", 0 ],
					"source" : [ "obj-161", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-32", 0 ],
					"source" : [ "obj-162", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-72", 0 ],
					"source" : [ "obj-163", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-137", 0 ],
					"source" : [ "obj-164", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-142", 0 ],
					"source" : [ "obj-165", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-73", 0 ],
					"source" : [ "obj-166", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-76", 1 ],
					"source" : [ "obj-168", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-76", 0 ],
					"source" : [ "obj-168", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-151", 1 ],
					"source" : [ "obj-171", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-147", 0 ],
					"source" : [ "obj-172", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-168", 0 ],
					"source" : [ "obj-173", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-146", 0 ],
					"source" : [ "obj-174", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 0 ],
					"source" : [ "obj-175", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 0 ],
					"source" : [ "obj-176", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 0 ],
					"source" : [ "obj-177", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-174", 0 ],
					"source" : [ "obj-178", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-75", 0 ],
					"source" : [ "obj-179", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-296", 1 ],
					"source" : [ "obj-180", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-179", 0 ],
					"source" : [ "obj-181", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 0 ],
					"source" : [ "obj-182", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-180", 0 ],
					"source" : [ "obj-183", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-183", 0 ],
					"source" : [ "obj-184", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-196", 0 ],
					"source" : [ "obj-185", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-180", 0 ],
					"source" : [ "obj-186", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-184", 0 ],
					"source" : [ "obj-187", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-186", 0 ],
					"source" : [ "obj-187", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-187", 0 ],
					"order" : 1,
					"source" : [ "obj-188", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-316", 1 ],
					"order" : 0,
					"source" : [ "obj-188", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-314", 0 ],
					"order" : 0,
					"source" : [ "obj-189", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-315", 1 ],
					"order" : 1,
					"source" : [ "obj-189", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-2", 0 ],
					"order" : 2,
					"source" : [ "obj-19", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-3", 0 ],
					"order" : 1,
					"source" : [ "obj-19", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-5", 0 ],
					"order" : 3,
					"source" : [ "obj-19", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-6", 0 ],
					"order" : 0,
					"source" : [ "obj-19", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-174", 0 ],
					"source" : [ "obj-190", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-179", 0 ],
					"source" : [ "obj-190", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-75", 0 ],
					"source" : [ "obj-192", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-185", 0 ],
					"source" : [ "obj-193", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-94", 0 ],
					"source" : [ "obj-195", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-114", 0 ],
					"source" : [ "obj-199", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-207", 1 ],
					"source" : [ "obj-200", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-202", 0 ],
					"source" : [ "obj-201", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-114", 2 ],
					"source" : [ "obj-202", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-199", 0 ],
					"source" : [ "obj-202", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-200", 0 ],
					"source" : [ "obj-203", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-286", 0 ],
					"source" : [ "obj-204", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-203", 0 ],
					"source" : [ "obj-205", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-204", 0 ],
					"source" : [ "obj-208", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-211", 1 ],
					"source" : [ "obj-209", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-218", 0 ],
					"order" : 1,
					"source" : [ "obj-216", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-235", 0 ],
					"order" : 0,
					"source" : [ "obj-216", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-216", 0 ],
					"order" : 0,
					"source" : [ "obj-217", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-226", 0 ],
					"source" : [ "obj-217", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-238", 0 ],
					"source" : [ "obj-217", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-242", 0 ],
					"order" : 1,
					"source" : [ "obj-217", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-229", 0 ],
					"source" : [ "obj-218", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-231", 0 ],
					"source" : [ "obj-218", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-27", 0 ],
					"order" : 0,
					"source" : [ "obj-22", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 0 ],
					"order" : 2,
					"source" : [ "obj-22", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 0 ],
					"order" : 1,
					"source" : [ "obj-22", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-262", 0 ],
					"source" : [ "obj-220", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-218", 1 ],
					"source" : [ "obj-225", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-235", 1 ],
					"source" : [ "obj-226", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-231", 0 ],
					"source" : [ "obj-229", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-218", 1 ],
					"source" : [ "obj-235", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-243", 1 ],
					"source" : [ "obj-235", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-255", 0 ],
					"source" : [ "obj-237", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-216", 1 ],
					"source" : [ "obj-238", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 9 ],
					"source" : [ "obj-24", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-243", 0 ],
					"source" : [ "obj-242", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-225", 0 ],
					"source" : [ "obj-243", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-244", 0 ],
					"source" : [ "obj-243", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-218", 1 ],
					"source" : [ "obj-244", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-251", 0 ],
					"source" : [ "obj-249", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-33", 0 ],
					"hidden" : 1,
					"source" : [ "obj-25", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-220", 0 ],
					"order" : 1,
					"source" : [ "obj-252", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-249", 0 ],
					"order" : 0,
					"source" : [ "obj-252", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-254", 0 ],
					"order" : 2,
					"source" : [ "obj-252", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-263", 0 ],
					"source" : [ "obj-255", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-252", 0 ],
					"source" : [ "obj-257", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-259", 0 ],
					"source" : [ "obj-258", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-217", 0 ],
					"source" : [ "obj-259", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-1", 0 ],
					"source" : [ "obj-26", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-259", 1 ],
					"source" : [ "obj-260", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-259", 2 ],
					"source" : [ "obj-261", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-258", 0 ],
					"source" : [ "obj-262", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-260", 0 ],
					"order" : 1,
					"source" : [ "obj-262", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-261", 0 ],
					"order" : 0,
					"source" : [ "obj-262", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-257", 0 ],
					"source" : [ "obj-263", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-1", 1 ],
					"source" : [ "obj-27", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-137", 1 ],
					"source" : [ "obj-27", 5 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-142", 1 ],
					"source" : [ "obj-27", 6 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-32", 1 ],
					"source" : [ "obj-27", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-33", 1 ],
					"hidden" : 1,
					"source" : [ "obj-27", 8 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-39", 1 ],
					"source" : [ "obj-27", 7 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-42", 1 ],
					"source" : [ "obj-27", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-56", 1 ],
					"source" : [ "obj-27", 9 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-60", 1 ],
					"source" : [ "obj-27", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-72", 1 ],
					"source" : [ "obj-27", 4 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-73", 1 ],
					"source" : [ "obj-27", 10 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 10 ],
					"source" : [ "obj-28", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-291", 0 ],
					"source" : [ "obj-286", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-292", 0 ],
					"source" : [ "obj-286", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-313", 0 ],
					"source" : [ "obj-286", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-180", 0 ],
					"source" : [ "obj-289", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-27", 1 ],
					"order" : 0,
					"source" : [ "obj-29", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-44", 0 ],
					"order" : 2,
					"source" : [ "obj-29", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-65", 0 ],
					"order" : 1,
					"source" : [ "obj-29", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-289", 0 ],
					"source" : [ "obj-290", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-290", 0 ],
					"source" : [ "obj-291", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-189", 0 ],
					"order" : 1,
					"source" : [ "obj-292", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-312", 0 ],
					"order" : 0,
					"source" : [ "obj-292", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-19", 0 ],
					"source" : [ "obj-30", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-314", 1 ],
					"source" : [ "obj-310", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-310", 0 ],
					"source" : [ "obj-312", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-315", 0 ],
					"source" : [ "obj-313", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-315", 2 ],
					"source" : [ "obj-314", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-188", 0 ],
					"source" : [ "obj-315", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 4 ],
					"source" : [ "obj-32", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-66", 1 ],
					"source" : [ "obj-32", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-66", 0 ],
					"source" : [ "obj-32", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-24", 1 ],
					"hidden" : 1,
					"source" : [ "obj-33", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-24", 0 ],
					"hidden" : 1,
					"source" : [ "obj-33", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 9 ],
					"hidden" : 1,
					"source" : [ "obj-33", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-39", 0 ],
					"source" : [ "obj-35", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-58", 0 ],
					"source" : [ "obj-36", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 8 ],
					"source" : [ "obj-37", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-39", 0 ],
					"source" : [ "obj-38", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 8 ],
					"source" : [ "obj-39", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-37", 1 ],
					"source" : [ "obj-39", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-37", 0 ],
					"source" : [ "obj-39", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-33", 0 ],
					"hidden" : 1,
					"source" : [ "obj-4", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-56", 0 ],
					"source" : [ "obj-40", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-152", 0 ],
					"source" : [ "obj-41", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-167", 0 ],
					"source" : [ "obj-41", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-170", 0 ],
					"source" : [ "obj-41", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 2 ],
					"source" : [ "obj-42", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-43", 1 ],
					"source" : [ "obj-42", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-43", 0 ],
					"source" : [ "obj-42", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 2 ],
					"source" : [ "obj-43", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-69", 1 ],
					"source" : [ "obj-44", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-28", 1 ],
					"source" : [ "obj-56", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-28", 0 ],
					"source" : [ "obj-56", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 10 ],
					"source" : [ "obj-56", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-42", 0 ],
					"source" : [ "obj-57", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-8", 0 ],
					"source" : [ "obj-58", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-168", 1 ],
					"source" : [ "obj-59", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-168", 0 ],
					"source" : [ "obj-59", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-41", 0 ],
					"source" : [ "obj-59", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 3 ],
					"source" : [ "obj-60", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-61", 1 ],
					"source" : [ "obj-60", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-61", 0 ],
					"source" : [ "obj-60", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 3 ],
					"source" : [ "obj-61", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-32", 0 ],
					"source" : [ "obj-62", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-23", 0 ],
					"source" : [ "obj-63", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-60", 0 ],
					"source" : [ "obj-64", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 4 ],
					"source" : [ "obj-66", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 11 ],
					"source" : [ "obj-67", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-73", 0 ],
					"source" : [ "obj-68", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 5 ],
					"source" : [ "obj-70", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-72", 0 ],
					"source" : [ "obj-71", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 5 ],
					"source" : [ "obj-72", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-70", 1 ],
					"source" : [ "obj-72", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-70", 0 ],
					"source" : [ "obj-72", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-36", 11 ],
					"source" : [ "obj-73", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-67", 1 ],
					"source" : [ "obj-73", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-67", 0 ],
					"source" : [ "obj-73", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 1 ],
					"source" : [ "obj-74", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 0 ],
					"source" : [ "obj-74", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-139", 0 ],
					"order" : 1,
					"source" : [ "obj-75", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-178", 0 ],
					"source" : [ "obj-75", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-181", 0 ],
					"order" : 0,
					"source" : [ "obj-75", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-93", 6 ],
					"source" : [ "obj-77", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-137", 0 ],
					"source" : [ "obj-78", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-101", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 15 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-103", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 14 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-105", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 13 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-106", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 12 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-110", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 11 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-111", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 23 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-113", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 21 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-115", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 22 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-118", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 26 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-119", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 27 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-120", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 24 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-121", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 25 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-122", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 30 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-123", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 31 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-124", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 28 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-125", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 29 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-126", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 21 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-127", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 31 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-128", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 30 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-129", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 29 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-13", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-130", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 28 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-131", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 27 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-132", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 26 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-133", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 25 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-134", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 24 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-135", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 23 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-136", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 22 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-14", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-15", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 7 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-16", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 6 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-17", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 5 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-18", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 4 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-20", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 9 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-21", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 8 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-34", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 32 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-45", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 7 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-46", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 6 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-47", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 8 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-48", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 9 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-49", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 4 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-50", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 5 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-51", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 2 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-52", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 3 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-53", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-54", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 32 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-55", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-7", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-79", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 12 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-80", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 10 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-81", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 11 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-82", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 15 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-85", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 16 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-86", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 13 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-87", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 14 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-88", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 19 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-89", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 20 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-9", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-90", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 17 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-91", 0 ],
					"order" : 1,
					"source" : [ "obj-8", 18 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-92", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 10 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-95", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 20 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-96", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 19 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-97", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 18 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-98", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 17 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-99", 1 ],
					"order" : 0,
					"source" : [ "obj-8", 16 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-116", 1 ],
					"order" : 0,
					"source" : [ "obj-83", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-84", 0 ],
					"order" : 1,
					"source" : [ "obj-83", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-104", 0 ],
					"source" : [ "obj-84", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-108", 0 ],
					"source" : [ "obj-84", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-104", 0 ],
					"order" : 0,
					"source" : [ "obj-93", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-109", 0 ],
					"order" : 1,
					"source" : [ "obj-93", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-83", 0 ],
					"source" : [ "obj-94", 0 ]
				}

			}
 ],
		"parameters" : 		{
			"obj-1" : [ "rnbo~", "rnbo~", 0 ],
			"obj-102" : [ "live.slider", "live.slider", 0 ],
			"obj-104" : [ "live.gain~", "mc.live.gain~", 0 ],
			"obj-137" : [ "rnbo~[7]", "rnbo~[4]", 0 ],
			"obj-142" : [ "rnbo~[8]", "rnbo~[4]", 0 ],
			"obj-168" : [ "rnbo~[12]", "rnbo~[11]", 0 ],
			"obj-180" : [ "live.slider[1]", "1 in center", 0 ],
			"obj-209" : [ "live.slider[3]", "live.slider[3]", 0 ],
			"obj-32" : [ "rnbo~[4]", "rnbo~[4]", 0 ],
			"obj-33" : [ "rnbo~[9]", "rnbo~[4]", 0 ],
			"obj-39" : [ "rnbo~[10]", "rnbo~[4]", 0 ],
			"obj-42" : [ "rnbo~[2]", "rnbo~[2]", 0 ],
			"obj-56" : [ "rnbo~[1]", "rnbo~[1]", 0 ],
			"obj-59" : [ "rnbo~[11]", "rnbo~[11]", 0 ],
			"obj-60" : [ "rnbo~[3]", "rnbo~[3]", 0 ],
			"obj-72" : [ "rnbo~[5]", "rnbo~[4]", 0 ],
			"obj-73" : [ "rnbo~[6]", "rnbo~[4]", 0 ],
			"obj-75" : [ "live.slider[2]", "live.slider[2]", 0 ],
			"parameterbanks" : 			{
				"0" : 				{
					"index" : 0,
					"name" : "",
					"parameters" : [ "-", "-", "-", "-", "-", "-", "-", "-" ]
				}

			}
,
			"inherited_shortname" : 1
		}
,
		"parameter_map" : 		{
			"midi" : 			{
				"number" : 				{
					"srcname" : "21.ctrl.2.chan.midi",
					"min" : 0.0,
					"max" : 127.0,
					"flags" : 2
				}
,
				"number[1]" : 				{
					"srcname" : "22.ctrl.2.chan.midi",
					"min" : 0.0,
					"max" : 127.0,
					"flags" : 2
				}
,
				"number[2]" : 				{
					"srcname" : "23.ctrl.2.chan.midi",
					"min" : 0.0,
					"max" : 127.0,
					"flags" : 2
				}

			}

		}
,
		"dependency_cache" : [ 			{
				"name" : "Butterfly.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Butterfly.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "ButterflyCurve.gendsp",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/code",
				"patcherrelativepath" : "../code",
				"type" : "gDSP",
				"implicit" : 1
			}
, 			{
				"name" : "Cannabis.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Cannabis.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Circle-FX.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Circle-FX.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Gear.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Gears.rnbopat_20230822.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Heart.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Heart.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Hypotrochoid.gendsp",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/code",
				"patcherrelativepath" : "../code",
				"type" : "gDSP",
				"implicit" : 1
			}
, 			{
				"name" : "Lissajous.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Lissajous.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "LissajousCurve.gendsp",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/code",
				"patcherrelativepath" : "../code",
				"type" : "gDSP",
				"implicit" : 1
			}
, 			{
				"name" : "MMCircle.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Position-FX.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Position-FX.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Rose.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Rose.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Spiral.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Spiral.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Splines.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Splines.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Star.gendsp",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/code",
				"patcherrelativepath" : "../code",
				"type" : "gDSP",
				"implicit" : 1
			}
, 			{
				"name" : "Star.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Star.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "TTable.rnbopat_20230822.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
, 			{
				"name" : "Trochoid.rnbopat",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/patchers",
				"patcherrelativepath" : ".",
				"type" : "RBOP",
				"implicit" : 1
			}
, 			{
				"name" : "Trochoid.rnbopat.maxsnap",
				"bootpath" : "~/OneDrive - Universidad de las Artes/2023/Tesis/XYVI/XYVI-VST/data",
				"patcherrelativepath" : "../data",
				"type" : "mx@s",
				"implicit" : 1
			}
 ],
		"autosave" : 0
	}

}
