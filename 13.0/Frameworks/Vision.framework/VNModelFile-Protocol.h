//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/NSObject-Protocol.h>

@class NSString;

@protocol VNModelFile <NSObject>
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) const void *baseAddress;
- (void)advise:(long long)arg1;

@optional
@property(retain, nonatomic) NSString *resourcePath;
@end

