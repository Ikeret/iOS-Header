//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol LABackoffCounter
- (void)currentBackoffErrorWithReply:(void (^)(NSError *))arg1;
- (void)actionSuccess;
- (void)actionBackoffWithReply:(void (^)(NSError *))arg1;
- (void)actionFailureWithReply:(void (^)(NSError *))arg1;
@end

