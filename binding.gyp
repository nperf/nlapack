{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        "routines/getrf.cc",
        "routines/gbtrf.cc",
        "routines/gttrf.cc",
        "routines/potrf.cc",
        "routines/pstrf.cc",
        "routines/pftrf.cc",
        "routines/pptrf.cc",
        "routines/pbtrf.cc",
        "routines/pttrf.cc",
        "routines/sytrf.cc",
        "routines/sptrf.cc",
        "routines/getrs.cc",
        "routines/gbtrs.cc",
        "routines/gttrs.cc",
        "routines/dttrsb.cc",
        "routines/potrs.cc"
      ],
      "include_dirs" : [
        "lib"
      ],
      "libraries": [
        "-llapack"
      ]
    }
  ]
}
