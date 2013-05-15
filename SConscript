# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GCRCalib/SConscript,v 1.12.18.2 2012/01/26 16:22:52 heather Exp $
# Authors: Claudia.Lavalley@lpta.in2p3.fr
# Version: GCRCalib-01-07-02-gr02

Import('baseEnv')
Import('listFiles')
Import('packages')
progEnv = baseEnv.Clone()
libEnv = baseEnv.Clone()

libEnv.Tool('addLinkDeps', package='GCRCalib', toBuild='component')
libEnv.AppendUnique(CPPPATH = ['#TkrRecon/','#GCRCalib/'])
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
