//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface XDCAppMetadata : PBCodable <NSCopying>
{
    unsigned long long _downloaderID;
    unsigned long long _externalVersionID;
    unsigned long long _itemID;
    unsigned long long _purchaserID;
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_artworkURLString;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_externalIDString;
    NSString *_itemName;
    NSString *_manifestURLString;
    NSString *_messagesArtworkURLString;
    NSData *_packageDPInfo;
    NSData *_packageSINF;
    NSString *_packageURLString;
    NSMutableArray *_provisioningProfiles;
    NSString *_redownloadParams;
    NSString *_storeCohort;
    NSString *_storeFront;
    int _type;
    NSString *_variantID;
    NSString *_vendorName;
    _Bool _containsMessagesExtension;
    _Bool _isBeta;
    _Bool _isStoreApp;
    _Bool _isSystemApp;
    _Bool _launchProhibited;
    _Bool _skipIfInstalled;
    _Bool _suppressDialogs;
    struct {
        unsigned int downloaderID:1;
        unsigned int externalVersionID:1;
        unsigned int itemID:1;
        unsigned int purchaserID:1;
        unsigned int type:1;
        unsigned int containsMessagesExtension:1;
        unsigned int isBeta:1;
        unsigned int isStoreApp:1;
        unsigned int isSystemApp:1;
        unsigned int launchProhibited:1;
        unsigned int skipIfInstalled:1;
        unsigned int suppressDialogs:1;
    } _has;
}

+ (Class)provisioningProfileType;
- (void).cxx_destruct;
@property(nonatomic) _Bool suppressDialogs; // @synthesize suppressDialogs=_suppressDialogs;
@property(retain, nonatomic) NSString *manifestURLString; // @synthesize manifestURLString=_manifestURLString;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(nonatomic) _Bool isStoreApp; // @synthesize isStoreApp=_isStoreApp;
@property(nonatomic) _Bool isSystemApp; // @synthesize isSystemApp=_isSystemApp;
@property(nonatomic) _Bool isBeta; // @synthesize isBeta=_isBeta;
@property(nonatomic) _Bool skipIfInstalled; // @synthesize skipIfInstalled=_skipIfInstalled;
@property(retain, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;
@property(retain, nonatomic) NSMutableArray *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(retain, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(retain, nonatomic) NSString *storeFront; // @synthesize storeFront=_storeFront;
@property(retain, nonatomic) NSString *storeCohort; // @synthesize storeCohort=_storeCohort;
@property(retain, nonatomic) NSString *packageURLString; // @synthesize packageURLString=_packageURLString;
@property(retain, nonatomic) NSData *packageSINF; // @synthesize packageSINF=_packageSINF;
@property(retain, nonatomic) NSData *packageDPInfo; // @synthesize packageDPInfo=_packageDPInfo;
@property(retain, nonatomic) NSString *messagesArtworkURLString; // @synthesize messagesArtworkURLString=_messagesArtworkURLString;
@property(nonatomic) _Bool launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) _Bool containsMessagesExtension; // @synthesize containsMessagesExtension=_containsMessagesExtension;
@property(retain, nonatomic) NSString *artworkURLString; // @synthesize artworkURLString=_artworkURLString;
@property(retain, nonatomic) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property(nonatomic) unsigned long long purchaserID; // @synthesize purchaserID=_purchaserID;
@property(nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(nonatomic) unsigned long long externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(retain, nonatomic) NSString *externalIDString; // @synthesize externalIDString=_externalIDString;
@property(nonatomic) unsigned long long downloaderID; // @synthesize downloaderID=_downloaderID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSuppressDialogs;
@property(readonly, nonatomic) _Bool hasManifestURLString;
@property(readonly, nonatomic) _Bool hasBundleVersion;
@property(nonatomic) _Bool hasIsStoreApp;
@property(nonatomic) _Bool hasIsSystemApp;
@property(nonatomic) _Bool hasIsBeta;
@property(nonatomic) _Bool hasSkipIfInstalled;
@property(readonly, nonatomic) _Bool hasVariantID;
- (id)provisioningProfileAtIndex:(unsigned long long)arg1;
- (unsigned long long)provisioningProfilesCount;
- (void)addProvisioningProfile:(id)arg1;
- (void)clearProvisioningProfiles;
@property(readonly, nonatomic) _Bool hasVendorName;
@property(readonly, nonatomic) _Bool hasStoreFront;
@property(readonly, nonatomic) _Bool hasStoreCohort;
@property(readonly, nonatomic) _Bool hasPackageURLString;
@property(readonly, nonatomic) _Bool hasPackageSINF;
@property(readonly, nonatomic) _Bool hasPackageDPInfo;
@property(readonly, nonatomic) _Bool hasMessagesArtworkURLString;
@property(nonatomic) _Bool hasLaunchProhibited;
@property(readonly, nonatomic) _Bool hasItemName;
@property(nonatomic) _Bool hasContainsMessagesExtension;
@property(readonly, nonatomic) _Bool hasArtworkURLString;
@property(readonly, nonatomic) _Bool hasRedownloadParams;
@property(nonatomic) _Bool hasPurchaserID;
@property(nonatomic) _Bool hasItemID;
@property(nonatomic) _Bool hasExternalVersionID;
@property(readonly, nonatomic) _Bool hasExternalIDString;
@property(nonatomic) _Bool hasDownloaderID;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasAppleID;
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

