# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GCRCalib/SConscript,v 1.3 2009/01/23 00:07:40 ecephas Exp $
# Authors: Claudia.Lavalley@lpta.in2p3.fr
# Version: GCRCalib-01-06-02
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
test_GCRCalib = progEnv.GaudiProgram('test_GCRCalib', listFiles(['src/test/*.cxx']), test=1)
progEnv.Tool('registerObjects', package = 'GCRCalib', libraries = [GCRCalib], testApps = [test_GCRCalib])




