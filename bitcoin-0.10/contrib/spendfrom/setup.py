from distutils.core import setup
setup(name='IMNUCspendfrom',
      version='1.0',
      description='Command-line utility for imnucoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@imnucoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
