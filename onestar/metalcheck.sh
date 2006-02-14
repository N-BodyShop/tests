idl idl.imf.batch

/astro/net/mega-1/abrooks/NBODY/pkdgrav/gasoline onestar.param > onestar.out

grep 'feedback 0:' onestar.out | awk '{print $3,$4,$5}' > SNII.out
grep 'feedback 1:' onestar.out | awk '{print $3,$4,$5}' > SNIa.out
grep 'feedback 2:' onestar.out | awk '{print $3,$4,$5}' > winds.out

grep effectively onestar.log > eff.out

idl idl.metals.batch

