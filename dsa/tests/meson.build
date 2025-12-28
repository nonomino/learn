tests = [
  'array_test.cxx',
]

foreach t : tests
  exe = executable(
    t.split('.')[0],
    t,
    include_directories: inc
  )
  test(t.split('.')[0], exe)
endforeach