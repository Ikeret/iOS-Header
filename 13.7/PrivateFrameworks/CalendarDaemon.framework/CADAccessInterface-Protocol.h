//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADDatabaseInitializationOptions;

@protocol CADAccessInterface
- (void)CADDatabaseGetAccess:(void (^)(int, _Bool, _Bool))arg1;
- (void)CADDatabaseSetInitializationOptions:(CADDatabaseInitializationOptions *)arg1 reply:(void (^)(int))arg2;
@end

