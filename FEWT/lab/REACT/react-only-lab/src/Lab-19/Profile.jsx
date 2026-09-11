function Profile({ user }) {
  return (
    <div>
      <h3>User Profile</h3>
      <p>Username: {user.username}</p>
      <p>Name: {user.name}</p>
    </div>
  );
}

export default Profile;
