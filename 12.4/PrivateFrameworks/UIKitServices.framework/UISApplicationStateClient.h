//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@class NSString;

@interface UISApplicationStateClient : FBSServiceFacilityClient
{
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
- (void)configureConnectMessage:(id)arg1;
@property(nonatomic) double nextWakeIntervalSinceReferenceDate;
@property(nonatomic) double minimumBackgroundFetchInterval;
@property(nonatomic) _Bool usesBackgroundNetwork;
@property(copy, nonatomic) NSString *badgeValue;
- (id)initWithBundleIdentifier:(id)arg1;

@end

