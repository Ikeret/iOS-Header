//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString, NTCatchUpOperationArticleIDsRequest, NTPBPersonalizedTodaySectionSpecificConfig;

@interface NTPersonalizedSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>
{
    NTPBPersonalizedTodaySectionSpecificConfig *_personalizedConfiguration;
    NTCatchUpOperationArticleIDsRequest *_mandatoryArticleIDsRequest;
    NTCatchUpOperationArticleIDsRequest *_personalizedArticleIDsRequest;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NTCatchUpOperationArticleIDsRequest *personalizedArticleIDsRequest; // @synthesize personalizedArticleIDsRequest=_personalizedArticleIDsRequest;
@property(copy, nonatomic) NTCatchUpOperationArticleIDsRequest *mandatoryArticleIDsRequest; // @synthesize mandatoryArticleIDsRequest=_mandatoryArticleIDsRequest;
@property(copy, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedConfiguration; // @synthesize personalizedConfiguration=_personalizedConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)initWithPersonalizedConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

