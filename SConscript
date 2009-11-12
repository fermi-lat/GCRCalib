# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/GCRCalib/SConscript,v 1.6 2009/11/12 01:05:22 jrb Exp $
# Authors: Claudia.Lavalley@lpta.in2p3.fr
# Version: GCRCalib-01-06-04
Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('GCRCalibLib', depsOnly = 1)
libEnv.AppendUnique(CPPPATH = ['#TkrRecon/','#GCRCalib/'])
GCRCalib = libEnv.SharedLibrary('GCRCalib', listFiles(['src/Dll/*.cxx']) + listFiles(['src/GCRRecon/*.cxx']) + listFiles(['src/GCRSelect/*.cxx']))

if baseEnv['PLATFORM'] == 'win32':
	progEnv.AppendUnique(CPPDEFINES = ['__i386'])

progEnv.Tool('GCRCalibLib')
test_GCRCalib = progEnv.GaudiProgram('test_GCRCalib',
                                     listFiles(['src/test/*.cxx']), test=1)
progEnv.Tool('registerTargets', package = 'GCRCalib',
             libraryCxts = [[GCRCalib, libEnv]],
             testAppCxts = [[test_GCRCalib, progEnv]])
