import Profile from "./Profile";

function Dashboard({ user, onLogout }) {
  return (
    <div>
      <h2>Welcome, {user.name}!</h2>
      <Profile user={user} />
      <button onClick={onLogout}>Logout</button>
    </div>
  );
}

export default Dashboard;
