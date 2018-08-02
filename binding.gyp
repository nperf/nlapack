{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        "routines/lineq/matfac/getrf.cc",
        # "routines/lineq/matfac/getrf2.cc",
        "routines/lineq/matfac/gbtrf.cc",
        "routines/lineq/matfac/gttrf.cc",
        # "routines/lineq/matfac/dttrfb.cc",
        "routines/lineq/matfac/potrf.cc",
        # "routines/lineq/matfac/potrf2.cc",
        "routines/lineq/matfac/pstrf.cc",
        "routines/lineq/matfac/pftrf.cc",
        "routines/lineq/matfac/pptrf.cc",
        "routines/lineq/matfac/pbtrf.cc",
        "routines/lineq/matfac/pttrf.cc",
        "routines/lineq/matfac/sytrf.cc",
        # "routines/lineq/matfac/sytrf_aa.cc",
        # "routines/lineq/matfac/sytrf_rook.cc",
        # "routines/lineq/matfac/hetrf.cc",
        # "routines/lineq/matfac/hetrf_aa.cc",
        # "routines/lineq/matfac/hetrf_rook.cc",
        "routines/lineq/matfac/sptrf.cc",

        # "routines/lineq/matfac/hptrf.cc",
        "routines/lineq/solve/getrs.cc",
        "routines/lineq/solve/gbtrs.cc",
        "routines/lineq/solve/gttrs.cc",
        # "routines/lineq/solve/dttrsb.cc",
        "routines/lineq/solve/potrs.cc",
        "routines/lineq/solve/pftrs.cc",
        "routines/lineq/solve/pptrs.cc",
        "routines/lineq/solve/pbtrs.cc",
        "routines/lineq/solve/pttrs.cc",
        "routines/lineq/solve/sytrs.cc",
        # "routines/lineq/solve/sytrs_aa.cc",
        # "routines/lineq/solve/sytrs_rook.cc",
        # "routines/lineq/solve/hetrs.cc",
        # "routines/lineq/solve/hetrs_aa.cc",
        # "routines/lineq/solve/hetrs_rook.cc",
        # "routines/lineq/solve/sytrs2.cc",
        # "routines/lineq/solve/hetrs2.cc",
        "routines/lineq/solve/sptrs.cc",
        # "routines/lineq/solve/hptrs.cc",
        "routines/lineq/solve/trtrs.cc",
        "routines/lineq/solve/tptrs.cc",
        "routines/lineq/solve/tbtrs.cc",

        "routines/lineq/cond/gecon.cc",
        "routines/lineq/cond/gbcon.cc",
        "routines/lineq/cond/gtcon.cc",
        "routines/lineq/cond/pocon.cc",
        "routines/lineq/cond/ppcon.cc",
        "routines/lineq/cond/pbcon.cc",
        "routines/lineq/cond/ptcon.cc",
        "routines/lineq/cond/sycon.cc",
        "routines/lineq/cond/spcon.cc",
        "routines/lineq/cond/trcon.cc"
      ],
      "include_dirs" : [
        "lib",
        "/usr/local/include",
        "/usr/include"
      ],
      "libraries": [
        "-llapacke",
        "-llapack",
        "-lblas"
      ]
    }
  ]
}
