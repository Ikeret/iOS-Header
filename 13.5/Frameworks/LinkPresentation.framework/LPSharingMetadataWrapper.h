//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding>
{
    _Bool _hasFetchedSubresources;
    _Bool _hasCompletedFetch;
    LPLinkMetadata *_metadata;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCompletedFetch; // @synthesize hasCompletedFetch=_hasCompletedFetch;
@property(nonatomic) _Bool hasFetchedSubresources; // @synthesize hasFetchedSubresources=_hasFetchedSubresources;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentation;

@end

