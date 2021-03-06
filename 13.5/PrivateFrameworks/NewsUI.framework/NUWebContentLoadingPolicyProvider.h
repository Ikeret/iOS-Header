//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SWLoadingPolicyProvider-Protocol.h>

@class NSString;
@protocol FCHeadlineProviding;

@interface NUWebContentLoadingPolicyProvider : NSObject <SWLoadingPolicyProvider>
{
    id <FCHeadlineProviding> _headline;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (unsigned long long)loadingPolicy;
- (id)initWithHeadline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

