/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2019 OpenCFD Ltd.
    Copyright (C) YEAR AUTHOR, AFFILIATION
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "fixedValueFvPatchFieldTemplate.H"
#include "addToRunTimeSelectionTable.H"
#include "fvPatchFieldMapper.H"
#include "volFields.H"
#include "surfaceFields.H"
#include "unitConversion.H"

//{{{ begin codeInclude

//}}} end codeInclude


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

// dynamicCode:
// SHA1 = e4fdc61f585969b7cfb34df06ce385ac03670ab0
//
// unique function name that can be checked if the correct library version
// has been loaded
extern "C" void tempProfile_e4fdc61f585969b7cfb34df06ce385ac03670ab0(bool load)
{
    if (load)
    {
        // Code that can be explicitly executed after loading
    }
    else
    {
        // Code that can be explicitly executed before unloading
    }
}

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

makeRemovablePatchTypeField
(
    fvPatchScalarField,
    tempProfileFixedValueFvPatchScalarField
);


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

tempProfileFixedValueFvPatchScalarField::
tempProfileFixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF
)
:
    fixedValueFvPatchField<scalar>(p, iF)
{
    if (false)
    {
        printMessage("Construct tempProfile : patch/DimensionedField");
    }
}


tempProfileFixedValueFvPatchScalarField::
tempProfileFixedValueFvPatchScalarField
(
    const tempProfileFixedValueFvPatchScalarField& ptf,
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    fixedValueFvPatchField<scalar>(ptf, p, iF, mapper)
{
    if (false)
    {
        printMessage("Construct tempProfile : patch/DimensionedField/mapper");
    }
}


tempProfileFixedValueFvPatchScalarField::
tempProfileFixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const dictionary& dict
)
:
    fixedValueFvPatchField<scalar>(p, iF, dict)
{
    if (false)
    {
        printMessage("Construct tempProfile : patch/dictionary");
    }
}


tempProfileFixedValueFvPatchScalarField::
tempProfileFixedValueFvPatchScalarField
(
    const tempProfileFixedValueFvPatchScalarField& ptf
)
:
    fixedValueFvPatchField<scalar>(ptf)
{
    if (false)
    {
        printMessage("Copy construct tempProfile");
    }
}


tempProfileFixedValueFvPatchScalarField::
tempProfileFixedValueFvPatchScalarField
(
    const tempProfileFixedValueFvPatchScalarField& ptf,
    const DimensionedField<scalar, volMesh>& iF
)
:
    fixedValueFvPatchField<scalar>(ptf, iF)
{
    if (false)
    {
        printMessage("Construct tempProfile : copy/DimensionedField");
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

tempProfileFixedValueFvPatchScalarField::
~tempProfileFixedValueFvPatchScalarField()
{
    if (false)
    {
        printMessage("Destroy tempProfile");
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void tempProfileFixedValueFvPatchScalarField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        printMessage("updateCoeffs tempProfile");
    }

//{{{ begin code
    #line 52 "/home/asra8696/RUN/occupant/0/T.boundaryField.Exposed_Wall"
const fvPatch& boundaryPatch = patch();
              const vectorField& Cf = boundaryPatch.Cf();
              scalarField& field = *this; 
              const scalar y0 = 0;
              const scalar y1 = 1;
              const scalar y2 = 2;
              const scalar y3 = 2.5;
              const scalar t0 = 296.15;
              const scalar t1 = 297.15;
              const scalar t2 = 298.65;
              const scalar t3 = 301.15;

              forAll(Cf, faceI)
              {
                 const scalar y = Cf[faceI].y();
                 if(y==y0) {field[faceI] = scalar(t0);};
                 if(y>y0&&y<y1)
                 {field[faceI] = t0 + ((t1-t0)/(y1-y0))*(y-y0);}; 
                 if(y==y1) {field[faceI] = scalar(t1);};
                 if(y>y1&&y<y2)
                 {field[faceI] = t1 + ((t2-t1)/(y2-y1))*(y-y1);};
                 if(y==y2) {field[faceI] = scalar(t2);};
                 if(y>y2&&y<y3)
                 {field[faceI] = t2 + ((t3-t2)/(y3-y2))*(y-y2);};
                 if(y==y3) {field[faceI] = scalar(t3);};

              }
//}}} end code

    this->fixedValueFvPatchField<scalar>::updateCoeffs();
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

