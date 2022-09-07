//
//  MBClassInfoTypes.h
//  MicroblinkDev
//
//  Created by Jura Skrlec on 09/10/2019.
//

#ifndef MBClassInfoTypes_h
#define MBClassInfoTypes_h

typedef NS_ENUM(NSInteger, MBCountry) {
    MBCountryNone = 0,
    MBCountryAlbania,
    MBCountryAlgeria,
    MBCountryArgentina,
    MBCountryAustralia,
    MBCountryAustria,
    MBCountryAzerbaijan,
    MBCountryBahrain,
    MBCountryBangladesh,
    MBCountryBelgium,
    MBCountryBosniaAndHerzegovina,
    MBCountryBrunei,
    MBCountryBulgaria,
    MBCountryCambodia,
    MBCountryCanada,
    MBCountryChile,
    MBCountryColombia,
    MBCountryCostaRica,
    MBCountryCroatia,
    MBCountryCyprus,
    MBCountryCzechia,
    MBCountryDenmark,
    MBCountryDominicanRepublic,
    MBCountryEgypt,
    MBCountryEstonia,
    MBCountryFinland,
    MBCountryFrance,
    MBCountryGeorgia,
    MBCountryGermany,
    MBCountryGhana,
    MBCountryGreece,
    MBCountryGuatemala,
    MBCountryHongKong,
    MBCountryHungary,
    MBCountryIndia,
    MBCountryIndonesia,
    MBCountryIreland,
    MBCountryIsrael,
    MBCountryItaly,
    MBCountryJordan,
    MBCountryKazakhstan,
    MBCountryKenya,
    MBCountryKosovo,
    MBCountryKuwait,
    MBCountryLatvia,
    MBCountryLithuania,
    MBCountryMalaysia,
    MBCountryMaldives,
    MBCountryMalta,
    MBCountryMauritius,
    MBCountryMexico,
    MBCountryMorocco,
    MBCountryNetherlands,
    MBCountryNewZealand,
    MBCountryNigeria,
    MBCountryPakistan,
    MBCountryPanama,
    MBCountryParaguay,
    MBCountryPhilippines,
    MBCountryPoland,
    MBCountryPortugal,
    MBCountryPuertoRico,
    MBCountryQatar,
    MBCountryRomania,
    MBCountryRussia,
    MBCountrySaudiArabia,
    MBCountrySerbia,
    MBCountrySingapore,
    MBCountrySlovakia,
    MBCountrySlovenia,
    MBCountrySouthAfrica,
    MBCountrySpain,
    MBCountrySweden,
    MBCountrySwitzerland,
    MBCountryTaiwan,
    MBCountryThailand,
    MBCountryTunisia,
    MBCountryTurkey,
    MBCountryUAE,
    MBCountryUganda,
    MBCountryUK,
    MBCountryUkraine,
    MBCountryUsa,
    MBCountryVietnam,
    MBCountryBrazil,
    MBCountryNorway,
    MBCountryOman,
    MBCountryEcuador,
    MBCountryElSalvador,
    MBCountrySriLanka,
    MBCountryPeru,
    MBCountryUruguay,
    MBCountryBahamas,
    MBCountryBermuda,
    MBCountryBolivia,
    MBCountryChina,
    MBCountryEuropeanUnion,
    MBCountryHaiti,
    MBCountryHonduras,
    MBCountryIceland,
    MBCountryJapan,
    MBCountryLuxembourg,
    MBCountryMontenegro,
    MBCountryNicaragua,
    MBCountrySouthKorea,
    MBCountryVenezuela,
    MBCountryAfghanistan,
    MBCountryAlandIslands,
    MBCountryAmericanSamoa,
    MBCountryAndorra,
    MBCountryAngola,
    MBCountryAnguilla,
    MBCountryAntarctica,
    MBCountryAntiguaAndBarbuda,
    MBCountryArmenia,
    MBCountryAruba,
    MBCountryBailiwickOfGuernsey,
    MBCountryBailiwickOfJersey,
    MBCountryBarbados,
    MBCountryBelarus,
    MBCountryBelize,
    MBCountryBenin,
    MBCountryBhutan,
    MBCountryBonaireSaintEustatiusAndSaba,
    MBCountryBotswana,
    MBCountryBouvetIsland,
    MBCountryBritishIndianOceanTerritory,
    MBCountryBurkinaFaso,
    MBCountryBurundi,
    MBCountryCameroon,
    MBCountryCapeVerde,
    MBCountryCaribbeanNetherlands,
    MBCountryCaymanIslands,
    MBCountryCentralAfricanRepublic,
    MBCountryChad,
    MBCountryChristmasIsland,
    MBCountryCocosIslands,
    MBCountryComoros,
    MBCountryCongo,
    MBCountryCookIslands,
    MBCountryCuba,
    MBCountryCuracao,
    MBCountryDemocraticRepublicOfTheCongo,
    MBCountryDjibouti,
    MBCountryDominica,
    MBCountryEastTimor,
    MBCountryEquatorialGuinea,
    MBCountryEritrea,
    MBCountryEthiopia,
    MBCountryFalklandIslands,
    MBCountryFaroeIslands,
    MBCountryFederatedStatesOfMicronesia,
    MBCountryFiji,
    MBCountryFrenchGuiana,
    MBCountryFrenchPolynesia,
    MBCountryFrenchSouthernTerritories,
    MBCountryGabon,
    MBCountryGambia,
    MBCountryGibraltar,
    MBCountryGreenland,
    MBCountryGrenada,
    MBCountryGuadeloupe,
    MBCountryGuam,
    MBCountryGuinea,
    MBCountryGuineaBissau,
    MBCountryGuyana,
    MBCountryHeardIslandAndMcdonaldIslands,
    MBCountryIran,
    MBCountryIraq,
    MBCountryIsleOfMan,
    MBCountryIvoryCoast,
    MBCountryJamaica,
    MBCountryKiribati,
    MBCountryKyrgyzstan,
    MBCountryLaos,
    MBCountryLebanon,
    MBCountryLesotho,
    MBCountryLiberia,
    MBCountryLibya,
    MBCountryLiechtenstein,
    MBCountryMacau,
    MBCountryMadagascar,
    MBCountryMalawi,
    MBCountryMali,
    MBCountryMarshallIslands,
    MBCountryMartinique,
    MBCountryMauritania,
    MBCountryMayotte,
    MBCountryMoldova,
    MBCountryMonaco,
    MBCountryMongolia,
    MBCountryMontserrat,
    MBCountryMozambique,
    MBCountryMyanmar,
    MBCountryNamibia,
    MBCountryNauru,
    MBCountryNepal,
    MBCountryNewCaledonia,
    MBCountryNiger,
    MBCountryNiue,
    MBCountryNorfolkIsland,
    MBCountryNorthernCyprus,
    MBCountryNorthernMarianaIslands,
    MBCountryNorthKorea,
    MBCountryNorthMacedonia,
    MBCountryPalau,
    MBCountryPalestine,
    MBCountryPapuaNewGuinea,
    MBCountryPitcairn,
    MBCountryReunion,
    MBCountryRwanda,
    MBCountrySaintBarthelemy,
    MBCountrySaintHelenaAscensionAndTristianDaCunha,
    MBCountrySaintKittsAndNevis,
    MBCountrySaintLucia,
    MBCountrySaintMartin,
    MBCountrySaintPierreAndMiquelon,
    MBCountrySaintVincentAndTheGrenadines,
    MBCountrySamoa,
    MBCountrySanMarino,
    MBCountrySaoTomeAndPrincipe,
    MBCountrySenegal,
    MBCountrySeychelles,
    MBCountrySierraLeone,
    MBCountrySintMaarten,
    MBCountrySolomonIslands,
    MBCountrySomalia,
    MBCountrySouthGeorgiaAndTheSouthSandwichIslands,
    MBCountrySouthSudan,
    MBCountrySudan,
    MBCountrySuriname,
    MBCountrySvalbardAndJanMayen,
    MBCountryEswatini,
    MBCountrySyria,
    MBCountryTajikistan,
    MBCountryTanzania,
    MBCountryTogo,
    MBCountryTokelau,
    MBCountryTonga,
    MBCountryTrinidadAndTobago,
    MBCountryTurkmenistan,
    MBCountryTurksAndCaicosIslands,
    MBCountryTuvalu,
    MBCountryUnitedStatesMinorOutlyingIslands,
    MBCountryUzbekistan,
    MBCountryVanuatu,
    MBCountryVaticanCity,
    MBCountryVirginIslandsBritish,
    MBCountryVirginIslandsUs,
    MBCountryWallisAndFutuna,
    MBCountryWesternSahara,
    MBCountryYemen,
    MBCountryYugoslavia,
    MBCountryZambia,
    MBCountryZimbabwe
};

typedef NS_ENUM(NSInteger, MBRegion) {
    MBRegionNone = 0,
    MBRegionAlabama,
    MBRegionAlaska,
    MBRegionAlberta,
    MBRegionArizona,
    MBRegionArkansas,
    MBRegionAustralianCapitalTerritory,
    MBRegionBritishColumbia,
    MBRegionCalifornia,
    MBRegionColorado,
    MBRegionConnecticut,
    MBRegionDelaware,
    MBRegionDistrictOfColumbia,
    MBRegionFlorida,
    MBRegionGeorgia,
    MBRegionHawaii,
    MBRegionIdaho,
    MBRegionIllinois,
    MBRegionIndiana,
    MBRegionIowa,
    MBRegionKansas,
    MBRegionKentucky,
    MBRegionLouisiana,
    MBRegionMaine,
    MBRegionManitoba,
    MBRegionMaryland,
    MBRegionMassachusetts,
    MBRegionMichigan,
    MBRegionMinnesota,
    MBRegionMississippi,
    MBRegionMissouri,
    MBRegionMontana,
    MBRegionNebraska,
    MBRegionNevada,
    MBRegionNewBrunswick,
    MBRegionNewHampshire,
    MBRegionNewJersey,
    MBRegionNewMexico,
    MBRegionNewSouthWales,
    MBRegionNewYork,
    MBRegionNorthernTerritory,
    MBRegionNorthCarolina,
    MBRegionNorthDakota,
    MBRegionNovaScotia,
    MBRegionOhio,
    MBRegionOklahoma,
    MBRegionOntario,
    MBRegionOregon,
    MBRegionPennsylvania,
    MBRegionQuebec,
    MBRegionQueensland,
    MBRegionRhodeIsland,
    MBRegionSaskatchewan,
    MBRegionSouthAustralia,
    MBRegionSouthCarolina,
    MBRegionSouthDakota,
    MBRegionTasmania,
    MBRegionTennessee,
    MBRegionTexas,
    MBRegionUtah,
    MBRegionVermont,
    MBRegionVictoria,
    MBRegionVirginia,
    MBRegionWashington,
    MBRegionWesternAustralia,
    MBRegionWestVirginia,
    MBRegionWisconsin,
    MBRegionWyoming,
    MBRegionYukon,
    MBRegionCiudadDeMexico,
    MBRegionJalisco,
    MBRegionNewfoundlandAndLabrador,
    MBRegionNuevoLeon,
    MBRegionBajaCalifornia,
    MBRegionChihuahua,
    MBRegionGuanajuato,
    MBRegionGuerrero,
    MBRegionMexico,
    MBRegionMichoacan,
    MBRegionNewYorkCity,
    MBRegionTamaulipas,
    MBRegionVeracruz,
    MBRegionChiapas,
    MBRegionCoahuila,
    MBRegionDurango,
    MBRegionGuerreroCocula,
    MBRegionGuerreroJuchitan,
    MBRegionGuerreroTepecoacuilco,
    MBRegionGuerreroTlacoapa,
    MBRegionGujarat,
    MBRegionHidalgo,
    MBRegionKarnataka,
    MBRegionKerala,
    MBRegionKhyberPakhtunkhwa,
    MBRegionMadhyaPradesh,
    MBRegionMaharashtra,
    MBRegionMorelos,
    MBRegionNayarit,
    MBRegionOaxaca,
    MBRegionPuebla,
    MBRegionPunjab,
    MBRegionQueretaro,
    MBRegionSanLuisPotosi,
    MBRegionSinaloa,
    MBRegionSonora,
    MBRegionTabasco,
    MBRegionTamilNadu,
    MBRegionYucatan,
    MBRegionZacatecas,
    MBRegionAguascalientes,
    MBRegionBajaCaliforniaSur,
    MBRegionCampeche,
    MBRegionColima,
    MBRegionQuintanaRooBenitoJuarez,
    MBRegionQuintanaRoo,
    MBRegionQuintanaRooSolidaridad,
    MBRegionTlaxcala
};

typedef NS_ENUM(NSInteger, MBType) {
    MBTypeNone = 0,
    MBTypeConsularId,
    MBTypeDl,
    MBTypeDlPublicServicesCard,
    MBTypeEmploymentPass,
    MBTypeFinCard,
    MBTypeId,
    MBTypeMultipurposeId,
    MBTypeMyKad,
    MBTypeMyKid,
    MBTypeMyPR,
    MBTypeMyTentera,
    MBTypePanCard,
    MBTypeProfessionalId,
    MBTypePublicServicesCard,
    MBTypeResidencePermit,
    MBTypeResidentId,
    MBTypeTemporaryResidencePermit,
    MBTypeVoterId,
    MBTypeWorkPermit,
    MBTypeiKad,
    MBTypeMilitaryId,
    MBTypeMyKas,
    MBTypeSocialSecurityCard,
    MBTypeHealthInsuranceCard,
    MBTypePassport,
    MBTypeSPass,
    MBTypeAddressCard,
    MBTypeAlienId,
    MBTypeAlienPassport,
    MBTypeGreenCard,
    MBTypeMinorsId,
    MBTypePostalId,
    MBTypeProfessionalDl,
    MBTypeTaxId,
    MBTypeWeaponPermit,
    MBTypeVisa,
    MBTypeBorderCrossingCard,
    MBTypeDriverCard,
    MBTypeGlobalEntryCard,
    MBTypeMypolis,
    MBTypeNexusCard,
    MBTypePassportCard,
    MBTypeProofOfAgeCard,
    MBTypeRefugeeId,
    MBTypeTribalId,
    MBTypeVeteranId,
    MBTypeCitizenshipCertificate,
    MBTypeMyNumberCard
};

#endif /* MBClassInfoTypes_h */
