/*
    Version information of the TRTK library.

    Copyright (C) 2010, 2011 Christoph Haenisch

    Chair of Medical Engineering (mediTEC)
    RWTH Aachen University
    Pauwelsstr. 20
    52074 Aachen
    Germany

    Version 0.2.0 (2014-07-02)
*/

// NOTE: This file is automatically generated from Version.hpp.in.

/** \file Version.hpp
  * \brief This file contains some version information of the TRTK library.
  *
  * There might be moments where you need to rely on a certain version of TRTK.
  * To be able to check for a specific version use the following macros:
  *
  * - \ref TRTK_MAJOR_VERSION
  * - \ref TRTK_MINOR_VERSION
  * - \ref TRTK_PATCH_LEVEL
  *
  * If you want to prevent the code from compiling in the case of a differing
  * version (i.e. due to the [rare] case of an API change), you can use some
  * code like this:
  *
  * \code
  * #if (TRTK_MAJOR_VERSION != 1 || TRTK_MINOR_VERSION != 4)
  * #  error "TRTK VERSION 1.4 REQUIRED!"
  * #endif
  * \endcode
  *
  * This code requires a major version of 1 and a minor version of 4. The
  * patch level is ignored (which makes sense, since this is only intended
  * for bug-fix releases).
  *
  * So the version numbering scheme is X.Y.Z (Major.Minor.Patch). Bug fixes
  * that do not affect the API increment the patch version, backwards
  * compatible API additions/changes increment the minor version, and
  * backwards incompatible API changes increment the major version. See also
  * "Semantic Versioning" on http://semver.org/.
  *
  * \author Christoph Haenisch
  * \version 0.2.0
  * \date last changed on 2014-07-02
  */


#ifndef VERSION_HPP_8641455825
#define VERSION_HPP_8641455825


/** \brief %TRTK Major Version Number
  *
  * This version number is only increased if some fundamental changes to the
  * code base are made (e.g. a complete code rewrite, API changes, etc.).
  *
  */

#define TRTK_MAJOR_VERSION 0


/** \brief %TRTK Minor Version Number
  *
  * This version number is increased each time one or more new features are added.
  *
  */

#define TRTK_MINOR_VERSION 16


/** \brief %TRTK Patch Level
  *
  * This version number is intended for bug-fix releases, only.
  *
  */

#define TRTK_PATCH_LEVEL 0


#endif // VERSION_HPP_8641455825
