//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol _DUIClientSessionDestination;

@protocol _DUIServerDestination
- (oneway void)sawFirstDragEventWithSessionID:(unsigned int)arg1 systemPolicy:(_Bool)arg2 destination:(id <_DUIClientSessionDestination>)arg3 reply:(void (^)(id <_DUIServerSessionDestination>, PBItemCollection *, unsigned long long, _Bool))arg4;
@end

