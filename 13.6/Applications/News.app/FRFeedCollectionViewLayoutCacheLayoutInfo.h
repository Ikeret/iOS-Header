//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NFLFeedTileLayoutInfo, NSString;

@interface FRFeedCollectionViewLayoutCacheLayoutInfo : NSObject <NSCopying>
{
    NFLFeedTileLayoutInfo *_layoutTileInfo;
    NSString *_precedingAdIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *precedingAdIdentifier; // @synthesize precedingAdIdentifier=_precedingAdIdentifier;
@property(retain, nonatomic) NFLFeedTileLayoutInfo *layoutTileInfo; // @synthesize layoutTileInfo=_layoutTileInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLayoutTileInfo:(id)arg1 precedingAdIdentifier:(id)arg2;

@end

