/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>


@interface PSKeychainUtilities : NSObject {
}
+(id)_passwordForHost:(id)host username:(id)username port:(int)port protocol:(id)protocol;
+(id)passwordForHost:(id)host username:(id)username port:(int)port protocol:(id)protocol;
+(void)setPassword:(id)password forHost:(id)host username:(id)username port:(int)port protocol:(id)protocol;
+(void)removePasswordForHost:(id)host username:(id)username port:(int)port protocol:(id)protocol;
+(id)_passwordForGenericAccount:(id)genericAccount service:(id)service;
+(id)passwordForServiceName:(id)serviceName accountName:(id)name;
+(void)setPassword:(id)password forServiceName:(id)serviceName accountName:(id)name;
+(void)removePasswordForServiceName:(id)serviceName accountName:(id)name;
@end
