//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipPolicy-Protocol.h>

@class NSString;
@protocol SVContentTransitionTypeProviding;

@interface SVPlaylistSkipPolicyHandler : NSObject <SVVideoSkipPolicy>
{
    id <SVContentTransitionTypeProviding> _contentTransitionTypeProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SVContentTransitionTypeProviding> contentTransitionTypeProvider; // @synthesize contentTransitionTypeProvider=_contentTransitionTypeProvider;
@property(readonly, nonatomic) _Bool canSkip;
- (id)initWithContentTransitionTypeProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

