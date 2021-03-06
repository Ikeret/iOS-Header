//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHSceneClassification : NSObject
{
    unsigned int _sceneIdentifier;
    double _confidence;
}

+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned int sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSceneClassification:(id)arg1;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2;

@end

