# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GCRCalib/SConscript,v 1.20 2012/05/24 22:30:51 jrb Exp $
# Authors: Claudia.Lavalley@lpta.in2p3.fr
# Version: GCRCalib-01-10-00

Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('addLinkDeps', package='GCRCalib', toBuild='component')
libEnv.AppendUnique(CPPPATH = ['#GCRCalib/'])
GCRCalib = libEnv.ComponentLibrary('GCRCalib',
				   listFiles(['src/GCRRecon/*.cxx',
					      'src/GCRSelect/*.cxx']))

if baseEnv['PLATFORM'] == 'win32':
	progEnv.AppendUnique(CPPDEFINES = ['__i386'])

progEnv.Tool('GCRCalibLib')
##test_GCRCalib = progEnv.GaudiProgram('test_GCRCalib',
##                                     listFiles(['src/test/*.cxx']), test=1,
##				     package='GCRCalib')
progEnv.Tool('registerTargets', package = 'GCRCalib',
             libraryCxts = [[GCRCalib, libEnv]])
             ##testAppCxts = [[test_GCRCalib, progEnv]])
